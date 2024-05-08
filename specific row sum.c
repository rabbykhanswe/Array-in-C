#include<stdio.h>
int main()
{
    int A[10][10];
    int i,j,targetrow,row=3,col=3;

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

     for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d",A[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Enter your targeted row : ");
    scanf("%d",&targetrow);
  
    printf("\n");
    if(targetrow>=0 && targetrow<=row){
            int rowsome=0;
        for(j=0; j<row; j++){
            rowsome=rowsome+A[targetrow][j];

        }
    printf("Some of row is :%d",rowsome);


    }


    else{
        printf("This is a invalid row number--");
    }



    return 0;
}
