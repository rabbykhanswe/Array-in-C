#include<stdio.h>
int main()
{
    int i,j;
    int A[3][4]={ {10,11,12,13}, {12,13,14,15}, {13,14,15,16}, {14,15,16,17} };

    for(i=0; i<3; i++){

        for(j=0; j<4; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


return 0;
}
