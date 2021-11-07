#include <stdio.h>

int main() {

    int n,m,x;
    printf("Please enter number of rows: ");
    scanf("%d", &n);
    printf("Please Enter number of columns: ");
    scanf("%d", &m);

    int arr[n][m];
    int i, j;
    printf("Please Enter numbers from 1 to 9 Randomly: ");
    printf("\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");


printf("Your Array is: ");
printf("\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int ctr = 0;

    printf("Enter the number 'x' to be searched for in array: ");
    scanf("%d", &x);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == x){
                ctr++;
            }
        }
    }
    printf("\n");

    if(ctr >= 1){
        printf("Found the number %d in the array!", x);
    }
    else{
        printf("Didn't find the number %d in the array :( ", x);
    }



    return 0;
}
