#include<stdio.h>
#include<locale.h>




void calcular_area(float b , float h,float *area){
	
	printf("%f  *  %f  =   ",b,h);
	*area = (b) * (h);
	printf("%2.f",*area);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	float area  , b = 10 , h = 20 ;
	calcular_area(b,h,&area);	
	return 0;
}
