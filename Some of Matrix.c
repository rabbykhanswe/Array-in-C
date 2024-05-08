#include<stdio.h>
int main()
{
    int i,j,rows,cols,some=0,sm;
    int A[10][10];

    printf("Enter the number of rows and colums :");
    scanf("%d %d",&rows, &cols);

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("%d ",A[i][j]);

        }
        printf("\n");

    }

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
           some=some+A[i][j];

        }
        printf("\n");

    }

    printf("The Matrix Total :%d",some);




    return 0;
}
