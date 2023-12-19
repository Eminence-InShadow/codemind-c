#include <stdio.h>

float calculateHarmonicSum(int n) {
    float result = 0.0;
    for (int i = 1; i <= n; i++) {
        result += 1.0 / i;
    }
    return result;
}

int main() {
    int N;
    float sum_value;

  
    
    scanf("%d", &N);

  
    sum_value = calculateHarmonicSum(N);

   
    printf("%.2f
", sum_value);

    return 0;
}
