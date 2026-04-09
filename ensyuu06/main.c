#include <stdio.h>
int main(void)
{
    int a=1;
    int b=1;
    int c=0;

    printf("1～1000までのフィボナッチ数列を表示します。\n");
    printf("%d,%d",a,b);

    for(c=a+b;c<1000;c=a+b)
    {
        printf(",%d", c);
        
        a=b;
        b=c;
    }
    printf("\n1000を超えたので、終了とします。");

    return 0;
}
