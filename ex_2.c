#include<stdio.h>

int isEvenNumber(int number){
	if (number%2==0){
		return 1;
	} else {
		return 0;
	}
}
int main(){
	int n, m,i,check;
	do{
		printf("\nPlease, enter a number: ");
	    printf("\n+ n: ");
	    scanf("%d",&n);
	    printf("\n+ m: ");
	    scanf("%d",&m);
	}while(n>m);
	printf("\nThe numbers between %d and %d: ",n,m);
	for(i=n+1;i<m;i++){
		check=isEvenNumber(i);
		if(check==1){
			printf("\n%d",i);
		}
	}
	return 0;
}
