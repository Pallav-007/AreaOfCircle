#include<stdio.h>
#include<conio.h>
#define PI 3.14
int main(){
//WAP to find area of circle PI*Rsquare

//Declaring Variables	
	float radious,area;
	printf("Enter Radious Of Circle: \n");
	scanf("%f",&radious);
//Calculating	
	area=PI*radious*radious;
//Printing	
	printf("area of Circle is %.2f\n",area);
	
	return 0;
}
