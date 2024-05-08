#include<conio.h>
int main()
{
   int arr[]={1,2,3,3,4,5,6,7,8};
   int size=sizeof (arr)/sizeof (arr[0]);
   int value=3;
   int freequency=0;

    for(int i=0;i<size;i+=1){
        if(value==arr[i]){
            freequency++;
        }
    }
    printf("Freequency is :%d",freequency);

    return 0;
}
