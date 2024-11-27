#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[3][3], b[3][3], c[3][3], i, j;
    
    printf("enter the first matrix");
    for(i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
}
printf("enter the second matrix");
    for(i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &b[i][j]);
        }
}
 printf("enter the first matrix");
    for(i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
     printf("enter the second matrix");
    for(i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
     for(i=0; i<3; i++){
        for(int j=0; j<3; j++){
            c[i][j]=a[i][j]+b[i][j];
        }
     }
     printf("sum of two matrix is");
     for(i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d", c[i][j]);
        }
        printf("\n");
     }

    
    return 0;
}