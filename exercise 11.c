#include<stdio.h>

int main()

{
        int amount,ten,fifty,hundred;

        printf("enter the amount:");

        scanf("%d",&amount);

        ten=amount/10;

        fifty=amount/50;

        hundred=amount/100;

        printf("notes of ten=%d\n",ten);

        printf("notes of fifty=%d\n",fifty);

        printf("notes of hundred=%d",hundred);

        return 0;
}
