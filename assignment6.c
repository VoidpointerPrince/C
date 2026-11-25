#include <stdio.h>
int fact (int n){
    if (n>=2)
    return n* fact(n-1);
    else
    return 1;
}

int main() {
    printf("Printing Factorial Without Recursion: \n");
    int lim;
    int f=1;
    printf("Enter the number: \n");
    scanf("%d", &lim);
    for (int i=lim; i>=1; i--){
            f*=i;
    }
    printf("%d", lim);
    printf("! is : ");
    printf("%d\n", f);
    printf ("\nPrinting factorial with Recursion: \n");
    int n, a;
    printf("Enter the number to find the factorial of: \n");
    scanf("%d", &n);
    printf("The factorial is: %d", fact (n));
    return 0;
}
