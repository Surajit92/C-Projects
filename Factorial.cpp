//Factorial Number.

#include<stdio.h>

int main(){
	int i;
	int Number;

	int Fact = 1;
	printf("Enter the Factorial No. : ");
	scanf("%d",&Number);

	for(i=1;i<=Number;i++){
		Fact=Fact*i;
	}
	printf("Factorial of %d is %d",Number,Fact);
	
	
	     
}

////Factorial Number.
//
//#include<stdio.h>
//
//int main(){
//	int i;
//	int Number;
//
//	long int Fact = 1;
//	printf("Enter the Factorial No. : ");
//	scanf("%d",&Number);
//
//	for(i=1;i<=Number;i++){
//		Fact=Fact*i;
//	}
//	printf("Factorial of %d is %ld",Number,Fact);
//	
//	
//	     
//}
