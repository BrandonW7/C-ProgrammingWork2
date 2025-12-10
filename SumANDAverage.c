#include <stdio.h>

int main(void){
    //Sum of integers 1-5
    int sum = 1 + 2 + 3 + 4 + 5;
    printf("Sum of integers 1 to 5 is: %d\n", sum);

    //Average of floating point number: 1.0 to 2.0
    float total = 0.0;
    int count = 0;

    for (float i = 1.0; i <= 2.0; i += 0.1)
    {
        total += i;
        count++;
    }
    float average = total / count;
    printf("Average of numbers 1.0 to 2.0 is: %.2f\n", average);

    return 0;
}


