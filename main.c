#include <stdio.h>
#include <stdlib.h>


int main() {
	
	// De�i�kenleri tan�ml�yoruz.
	
	double beklenenGetiri,risksizGetiri,standartSapma,sharpeOrani;
	
	// Kullan�c�dan verileri al�yoruz.
	
	printf("Beklenen getiriyi yuzde olarak girin: ");
	printf("test: ");
	scanf("%lf",&beklenenGetiri);
	
	printf("Risksiz getiri oran�n� yuzde olarak girin: ");
	scanf("%lf",&risksizGetiri);
	
	printf("Standart sapmayi yuzde olarak girin: ");
	scanf("%lf",&standartSapma);
	
	// Sharpe oraninin hesaplanmasi.
	
	sharpeOrani = (beklenenGetiri-risksizGetiri)/standartSapma;
	
	//Sonucu yazd�rma i�lemi.
	printf("Sharpe orani: %2lf ",sharpeOrani);
	
	if(sharpeOrani<0){
		printf("Sharpe orani negatif yatirim �l�");
	} else if(sharpeOrani<1){
		printf("Sharpe orani d�s�k risk i�in yeterli getiri saglanmiyor.");
	} else if(sharpeOrani<2){
		printf("Sharpe orani iyi yatirim riskine karsilik makul bir getiri sagliyor.");
	} else {
		printf("Sharpe orani cok iyi yatirim riskine karsi oldukca odullendirici.");
	}
	
	
	return 0;
}
