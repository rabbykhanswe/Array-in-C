#include<stdio.h>
int main()

{
	int i, num[]={5,2,3,4,6};
	int size=sizeof(num)/sizeof (num[0]);
	printf("The Original Array :");
	for(i=0; i<size; i+=1){
		printf("%d",num[i]);
	}
	
	for(i=0; i<2; i+=1){
		int temp=num[i];
		num[i]=num[size-1-i];
		num[size-1-i]=temp;
	}
	
	printf("\n The reversed array :");
	for(i=0; i<size; i++){
		printf("%d",num[i]);
	}
	printf("\n");
	
	return 0;
}