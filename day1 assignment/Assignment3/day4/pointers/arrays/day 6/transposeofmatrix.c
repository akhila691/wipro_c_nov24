#include<stdio.h>

int main(){
    int a[2][2], i, j;
    
    
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
        {
            printf("\nEnter the element:");
            scanf("%d", &a[i][j]);
        }
        printf("\nTranspose of matrix is:");
        for(i=0; i<2; i++)
        {
            printf("\n");
            for(j=0; j<2; j++)
            printf("%d", a[j][i]);
        }
            return 0;
        }

   
    