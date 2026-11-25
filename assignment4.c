#include<stdio.h>

int main(){
    int r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int wafer1[r][c];
    int wafer2[r][c];
    int wafer3[r][c];
   
    printf("Enter elements for Wafer 1:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d", &wafer1[i][j]);
        }
    }
   
    printf("\nWafer 1:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d ", wafer1[i][j]);
        }
        printf("\n");
    }
   
    printf("\nEnter elements for Wafer 2:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d", &wafer2[i][j]);
        }
    }
   
    printf("\nWafer 2:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d ", wafer2[i][j]);
        }
        printf("\n");
    }
   
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            wafer3[i][j] = wafer1[i][j] + wafer2[i][j];
        }
    }
   
    printf("\nWafer 3 (Sum):\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%d ", wafer3[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}
