#include<stdio.h>
int main()
{

    //Intitializing
    int i,j, numberOfRows, numberOfColums;

    int A[10][10],B[10][10],C[10][10];

    printf("Enter the number of Rows & Colums :");
    scanf("%d %d",&numberOfRows, &numberOfColums);

    //Input Elements of Matrix A
    for(i=0; i<numberOfRows; i++){
        for(j=0; j<numberOfColums; j++){
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    //Input Elements of Matrix B
    for(i=0; i<numberOfRows; i++){
        for(j=0; j<numberOfColums; j++){
            printf("B[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    //Printing Elements of Matrix A
    printf("A=");
    for(i=0; i<numberOfRows; i++){
            printf("\t");
        for(j=0; j<numberOfColums; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

     //Printing Elements of Matrix B
     printf("B=");
    for(i=0; i<numberOfRows; i++){
            printf("\t");
        for(j=0; j<numberOfColums; j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }


     //Adding Elements of Matrix A & B
    for(i=0; i<numberOfRows; i++){
        for(j=0; j<numberOfColums; j++){
           C[i][j]= A[i][j] + B[i][j];
        }
        printf("\n");
    }

    //Summation Result of Matrix A & B or Printing The C Matrix
    printf("C=");
    for(i=0; i<numberOfRows; i++){
            printf("\t");
        for(j=0; j<numberOfColums; j++){
        printf("%d ",C[i][j]);
        }
        printf("\n");
    }


    return 0;
}
