#include<stdio.h>
int main ()
{
    int i,j,rows,cols,transpose[j][i],some;
    int A[10][10];

    printf("Enter The Number Of Rows :");
    scanf("%d",&rows);

    printf("Enter The Number Of Colums :");
    scanf("%d",&cols);
    printf("\n");

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("A[%d] [%d]=",i,j);
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
        transpose[j][i]=A[i][j];
    }
    printf("\n");
  }


  for(i=0; i<cols; i++){
    for(j=0; j<rows; j++){
         printf("%d ",transpose[i][j]);
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
