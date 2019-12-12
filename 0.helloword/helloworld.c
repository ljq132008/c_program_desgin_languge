#include <stdio.h>

void fahr_map_celsius(){
    int fahr, celsius;
    int lower, upper, step;

    lower = 0; /* 温度表的下限 */
    upper = 300; /* 温度表的上限 */
    step = 20; /* 步长 */

    fahr = lower;
    while(fahr <= upper){
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}

int main(){
    int a = 10;
    int * pa = &a;
    printf("%d\n", *pa);
    printf("helloworld!\n");
    fahr_map_celsius();
}