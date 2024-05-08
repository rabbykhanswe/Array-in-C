#include<stdio.h>
int main()
{
	int arr[9]={1,2,3,15,6,5,7,8};
	int value;
	printf("Enter the value that you want to search :");
	scanf("%d",&value);
	int found =0;
	int i;
	
	for(i=0; i<9; i++){
		
		
		if(arr[i]==value){
			
			found=1;
			break;
		}
	}
		if(found==1){
		
		printf("This is the value position :%d",i);
	}
	     else{
		printf("This is an invalid array");
	}
	


	
	
	return 0;
}