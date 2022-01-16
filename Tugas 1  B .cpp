#include<stdio.h>
#include<conio.h>
#include<string.h>

	int main()
{
	int ao, bo;
	int aa, ba;
	
	printf ("..................\n");
	printf (" Mencari titik tengah\n\n");
	
	printf ("Masukan X koordinat A :");scanf("%d",&aa);
	printf ("Masukan Y koordinat A :");scanf("%d",&ao);
	printf ("Masukan X koordinat B :");scanf("%d",&ba);
	printf ("Masukan Y koordinat B :");scanf("%d",&bo);
	
	int absis, ordinat, pencerminan;
	
	absis=(aa+bo)/2;
	ordinat=(ao+bo)/2;
	
	printf("Absis		:%d",absis);printf("\n");
	printf("ordinant	:%d",ordinat);
	printf("\n\n");
	
	
	pencerminan=(absis+ordinat)/2;
	
	printf("Pencerminan	sumbu	X	dan	Y	:%d",pencerminan);printf("\n\n");
	
	return 0;
}
