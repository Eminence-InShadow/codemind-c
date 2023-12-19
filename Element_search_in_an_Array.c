#include <stdio.h>


int isPresent(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return 1; 
        }
    }
    return 0;
}

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); 
    }

    int elementToCheck;
    scanf("%d", &elementToCheck); 

    int result = isPresent(arr, N, elementToCheck);
    
    if (result == 1) {
        printf("True
");
    } else {
        printf("False
"); 
    }

    return 0;
}