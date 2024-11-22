#include <stdio.h>
#include <stdlib.h>


int main() {
	
	// Deðiþkenleri tanýmlýyoruz.
	
	double beklenenGetiri,risksizGetiri,standartSapma,sharpeOrani;
	
	// Kullanýcýdan verileri alýyoruz.
	
	printf("Beklenen getiriyi yuzde olarak girin: ");
	scanf("%lf",&beklenenGetiri);
	
	printf("Risksiz getiri oranýný yuzde olarak girin: ");
	scanf("%lf",&risksizGetiri);
	
	printf("Standart sapmayi yuzde olarak girin: ");
	scanf("%lf",&standartSapma);
	
	// Sharpe oraninin hesaplanmasi.
	
	sharpeOrani = (beklenenGetiri-risksizGetiri)/standartSapma;
	
	//Sonucu yazdýrma iþlemi.
	printf("Sharpe orani: %2lf ",sharpeOrani);
	
	if(sharpeOrani<0){
		printf("Sharpe orani negatif yatirim ölü");
	} else if(sharpeOrani<1){
		printf("Sharpe orani düsük risk için yeterli getiri saglanmiyor.");
	} else if(sharpeOrani<2){
		printf("Sharpe orani iyi yatirim riskine karsilik makul bir getiri sagliyor.");
	} else {
		printf("Sharpe orani cok iyi yatirim riskine karsi oldukca odullendirici.");
	}
	
	
	return 0;
}
