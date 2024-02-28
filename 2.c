#include<stdio.h>
void void1(int a,int b){
	int arr[a][b],i,*p,j;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("array[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	
	p = &arr;

	printf("\nCubes of all elements : \n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("%d  ",((*p)*(*p)*(*p)));
			p++;
		}
		printf("\n");
	}
}

void main(){
	int a,b;

	printf("Enter array size : ");
	scanf("%d",&a);
	b=a;

	void1(a,b);
}
