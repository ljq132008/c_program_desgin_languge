#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

void fahr_map_celsius(){
    int fahr, celsius;
    int lower, upper, step;

    lower = 0; /* 温度表的下限 */
    upper = 300; /* 温度表的上限 */
    step = 20; /* 步长 */

    fahr = lower;
    printf("%s\t%s\n", "fahr", "celsius");
    while(fahr <= upper){
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
}

int my_strlen(char *s){
    setlocale(LC_ALL, "zh_CN");
    int i=0;
    while(s[i] != '\n'){
        printf("%lc", s[i]);
        ++i;
    }
    printf("\n");
    return i;
}

void print_string(){
    char web_url[] = "http://c.biancheng.net";
    char *web_name = "C语言中文网";
    puts(web_url);
    puts(web_name);
    printf("%s\n%s\n", web_url, web_name);
}
int main(){
    int a = 10;
    int * pa = &a;
    printf("%d\n", *pa);
    printf("helloworld!\n");
    fahr_map_celsius();
    char s[] = "string";
    int len = my_strlen(s);
    printf("%d\n", len);
    printf("%ld\n", strlen(s));
}