#include<stdio.h>

int main()

{
    double selling_price,total_profit,cost_price,cost_price_for_each_product;

    printf("enter the selling price of 15 items:");

    scanf("%lf",&selling_price);

    printf("enter the total profit:");

    scanf("%lf",&total_profit);

    cost_price=selling_price-total_profit;

    cost_price_for_each_product=cost_price/15;

    printf("cost price for each product:%.3lf",cost_price_for_each_product);

    return 0;
}
