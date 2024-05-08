#include<stdio.h>
int main()
{
	int arr[]={1,2,3,15,5,6,7,8};
	int size= sizeof(arr)/ sizeof (arr[0]);
	int max=arr[0];
	int i;
	
	for(i=0; i<size; i++){
		
		if(arr[i]>max){
			max=arr[i];
		}
	
	}
	printf("The maximum array is : %d",max);
	
	
	
	
	
	return 0;
}