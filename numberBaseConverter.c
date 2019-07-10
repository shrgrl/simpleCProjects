#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sayi, ilkTaban, sonTaban, onlukSayi, istenenSayi, i;
	
	printf("Cevirmek istediginiz sayinin tabani nedir? : ");
	
	scanf("%d", &ilkTaban);
	printf("\n%d tabaninda ", ilkTaban);
	
	printf(" bir sayi girin: ");
	scanf("%d", &sayi);
	
	printf("\nCevirmek istediginiz taban nedir? :");
	scanf("%d", &sonTaban);
	
	printf("\n\n%d tabaninda %d sayisi %d tabaninda ", ilkTaban, sayi, sonTaban);
	
	onlukSayi = i = 0;
	
	while(sayi!=0)
	{
		onlukSayi += (sayi%10)*(int)pow(ilkTaban, i);
		sayi /= 10;
		i++;
	}
	
	i=0;
	
	while(onlukSayi>pow(sonTaban,i))i++;
	
	while(i>0)
	{
		istenenSayi = onlukSayi/(int)pow(sonTaban, i-1);
		onlukSayi -= istenenSayi*(int)pow(sonTaban, i-1);
		printf("%d", istenenSayi);
		i--;		
	}
	
	printf(" olur.");

	return 0;
}

