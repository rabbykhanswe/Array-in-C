#include<stdio.h>
int main()
{
	int i,sum=0,avg,arr[9];
	printf("Enter Your Numbers :\n");
	
	for(i=0; i<=9; i++){
		scanf("%d",&arr[i]);
		sum=arr[i]+sum;
	}
	printf("Your Total Sum Is : %d\n",sum);
	avg=sum/10;
	printf("your Avarage Is :%d",avg);
	
	
	
	
	return 0;
}