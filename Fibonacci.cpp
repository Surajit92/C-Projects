// Fibonacci Series by recursion

#include<stdio.h>

int fib(int n);

int main(){
	int n, i;
	int sum=0;
	printf("Enter the number : ");
	scanf("%d",&n);
    for(i = 0;i<n;i++) {
       sum = sum+fib(i);
       printf("%d",fib(i));              
    }
    printf("%d",sum);

//    printf("Fibonacii Series sum : %d",sum);
	
	
  return 0;
			
}

int fib(int n){
	
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else {
		return (fib(n-1) + fib(n-2));
	}
}
