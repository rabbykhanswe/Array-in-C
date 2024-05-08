#include<stdio.h>
int main()
{
    int i,j,row,col,sum=0;

    int A[10][10];
    printf("Enter the number of Row and Col:");
    scanf("%d %d", &row, &col);

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
           if(i==j){
            sum=sum+A[i][j];
           }
        }
        printf("\n");
    }
    printf("The Sum of Diogonal =%d",sum);





    return 0;
}
