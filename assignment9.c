#include <stdio.h>
struct Robot
{
    float depth;
    float pressure;
    float temperature;
    float battery;
    int defects;
};
void input(struct Robot r[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Robot Record %d\n", i+1);
        printf("Depth: ");
        scanf("%f", &r[i].depth);
        printf("Water Pressure: ");
        scanf("%f", &r[i].pressure);
        printf("Temperature: ");
        scanf("%f", &r[i].temperature);
        printf("Battery Percentage: ");
        scanf("%f", &r[i].battery);
        printf("Number of Structural Defects: ");
        scanf("%d", &r[i].defects);
    }
}
void report(struct Robot r[], int n)
{
    int i, unsafe;
    for(i = 0; i < n; i++)
    {
        unsafe = 0;
        printf("\n------ INSPECTION REPORT %d ------\n", i+1);
        printf("Depth: %.2f m\n", r[i].depth);
        printf("Pressure: %.2f\n", r[i].pressure);
        printf("Temperature: %.2f C\n", r[i].temperature);
        printf("Battery: %.2f%%\n", r[i].battery);
        printf("Structural Defects: %d\n", r[i].defects);
        if(r[i].depth > 500)
        {
            printf("Warning: Excessive Depth!\n");
            unsafe++;
        }
        if(r[i].pressure > 50)
        {
            printf("Warning: High Water Pressure!\n");
            unsafe++;
        }
        if(r[i].temperature > 40 || r[i].temperature < 0)
        {
            printf("Warning: Unsafe Temperature!\n");
            unsafe++;
        }
        if(r[i].battery < 20)
        {
            printf("Warning: Low Battery!\n");
            unsafe++;
        }
        if(r[i].defects > 0)
        {
            printf("Warning: Structural Defects Detected!\n");
            unsafe++;
        }
        if(unsafe == 0)
            printf("Status: SAFE\n");
        else
            printf("Status: UNSAFE\n");
    }
}
int main()
{
    struct Robot r[100];
    int n;
    printf("Enter number of historical records: ");
    scanf("%d", &n);
    input(r, n);
    report(r, n);
    return 0;
}
