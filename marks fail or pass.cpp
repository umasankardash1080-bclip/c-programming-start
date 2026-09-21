#include<stdio.h>
int main(){
	int marks;
	printf("enter your marks :");
	scanf("%d",&marks);
//	if(marks>30&&marks<=100 ){
//		printf("passed");
//
//	}
//	
//	else if(marks <= 30){
//		printf("failed");
//	}
//	else{
//		printf("invalid marks");
//	}
marks <= 30 ? printf("failed \n"):printf("passed \n");
}
