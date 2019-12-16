/**
 * C语言有三种函数可以用来显示器上输出数据，他们是:
 *  puts() :只能输出字符串
 *  putchar() :只能输出单个字符
 *  printf() :可以输出各种类型的数据。
 *
 *  %c 输出一个单个字符
 *  %hd %d %ld 以十进制、有符号形式输出short int long类型整数
 *  %hu %u %ul 以十进制、无符号形式输出short int long类型整数
 *  %ho %o %lo 以八进制、不带前缀、无符号形式输出short int long类型的整数
 *  %#ho %#o %#lo 以八进制、带前缀、无符号输出short int long类型整数
 *  %hx %x %lx 以十六进制、不带前缀、无符号形式输出 short int long 类型的整数。如果x小写，那么输出的十六进制数字也小写；如果X大写，那么输出的十六进制数字也大写
 *  %hX %X %lX
 *  %#hx %#x %#lx 以十六进制、带前缀、无符号形式输出 short int long 类型的整数。如果x小写，那么输出的十六进制数字也小写；如果X大写，那么输出的十六进制数字也大写
 *  %#hX %#X %#lX
 *  %f %lf  以十进制的形式输出float、double类型小数
 *  %e %le  以指数形式输出float double 类型小数。如果e 小写，那么输出结果中的e也小写；如果E大写，那么输出结果中的E也大写。
 *  %E %lE
 *  %g %lg  以十进制和指数中较短的形式输出float double类型的小数，并且小数部分最后不会添加多余的0.如果g小写，那么当以指数形式输出时e也小写；如果G大写，那么当以指数形式输出时E也大写
 *  %G %lG
 *  %s 输出字符串
 */
#include <stdio.h>
#include <unistd.h>

void my_printf_format(){
    int a1=20, a2=345, a3=700, a4=22;
    int b1=56720, b2=9999, b3=20098, b4=2;
    int c1=233, c2=205, c3=1, c4=6666;
    int d1=34, d2=0, d3=23, d4=23006783;
    // - 表示左对齐 9表示最少占用9个字符的宽度，不足用空格补齐
    /**
     * printf() 格式控制符的完整格式
     * %[flag][width][.precision] type
     */
    printf("%-9d %-9d %-9d %-9d\n", a1, a2, a3, a4);
    printf("%-9d %-9d %-9d %-9d\n", b1, b2, b3, b4);
    printf("%-9d %-9d %-9d %-9d\n", c1, c2, c3, c4);
    printf("%-9d %-9d %-9d %-9d\n", d1, d2, d3, d4);

    // - 表示左对齐 +表示无论正负数都带符号
}

void my_scanf_test(){
    /**
     * scanf(): 和 printf()类似，scanf() 可以输入多种类型的数据
     * getchar()\getche()\getch(): 这个三个函数都用于输入单个字符
     * gets(): 获取一行数据，并作为字符串处理
     */
    int a = 0, b = 0, c = 0, d = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("a+b=%d\n", a+b);
}

void flush_io_buffer(){
    printf("C语言中文网");
    fflush(stdout);
    sleep(5);
    printf("http://www.baidu.com");
}
int main(){
    flush_io_buffer();
    return 0;
}