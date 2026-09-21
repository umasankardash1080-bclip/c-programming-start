#include<stdio.h>
int main(){
	int day;
	printf("enter the day (1-7)");
	scanf("%d",&day);
	switch(day){
		case 1 : printf("this is sunday ");
		        break;
		case 2 : printf("this is monday ");
		        break;
		case 3 : printf("this is tuesday ");
		        break;
		case 4 : printf("this is wedness day");
		        break;
		case 5 : printf("this is thursday ");
		        break;
		case 6 : printf("this is fri day ");
		        break;
		case 7 : printf("this is saturday");
		        break;
		default : printf("your input is invalid");
	}
	return 0;
}
