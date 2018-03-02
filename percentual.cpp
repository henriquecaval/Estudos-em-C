#include<stdio.h>
#include<locale.h>


void percentuais(float *v1 , float *v2){
	
	*v1 = *v1 / 10 ;
	*v2 = *v2 / 10 ; 
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	float v1 , v2 ; 
	
	printf("Digite a nota da v1");
	scanf("%f",&v1);
	printf("Digite a nota da v2");
	scanf("%f",&v2);
	
	percentuais(&v1,&v2);
	
	printf("O percentual da v1 é %.1f \n ",v1);
	printf("O percentual da v2 é %.1f \n ",v2);
	
}
