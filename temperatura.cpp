#include <stdio.h>

int main(){

float t[3];
int i;
float soma, media;

soma=0;
for (i=0;i<=2;i++){
	printf("digitte a temperatura %d",i);
	scanf("%f", &t[i]);
	soma=soma+t[i];
}
media=soma/3;
printf("\n media das temperatudas %10f \n", media);
	for (i=0;i<=2;i++){
		printf("diferença %d eh %10f \n", i, media-t[i],i);
		
		
	}
}
