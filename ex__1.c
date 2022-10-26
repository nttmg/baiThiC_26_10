#include<stdio.h>

int isEvenNumber(int number){
	if (number%2==0){
		return 1;
	} else {
		return 0;
	}
}
int main(){
	int check,n;
	printf("\nInput number: ");
	scanf("%d",&n);
	check = isEvenNumber(n);
	if(check==1){
		printf("\n%d is even",n);
	}else{
		printf("\n%d is odd",n);
	}
	return 0;
}
