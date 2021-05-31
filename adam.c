#include<stdio.h>
int main()
{
    int num, rev_num, sqr_num, sqr_rev_num, rev_sqr_num;
    int digit, process;
    num= 13;
    rev_num = rev_sqr_num = 0;
    process = num;
    while(process)
    {
        digit = process % 10;
        rev_num = rev_num * 10 + digit;
        process /= 10;
    }
    sqr_num = num * num;
    sqr_rev_num = rev_num * rev_num;
    process = sqr_num;
    while(process)
    {
        digit = process % 10;
        rev_sqr_num = rev_sqr_num * 10 + digit;
        process /= 10;
    }
    if(sqr_rev_num == rev_sqr_num)
        printf("%d is an ADAM Number", num);
    return 0;
}
