// Program for restaurant billing system
#include<stdio.h>
#include<conio.h>
struct Product
{
    int pid;
    char pname[50];
    int rate;
    int qty;

};
struct Product p[3];
void main(){
    int i,total = 0;
    for ( i = 0; i < 2; i++)
    {   fflush(0);
        printf("\n Enter Product id: ");
        scanf("%d", &p[i].pid);
        fflush(0);
        printf("\n Enter Product Name: ");
        scanf("%s", &p[i].pname);
        fflush(0);
        printf("\n Enter Product Rate: ");
        scanf("%d", &p[i].rate);
        fflush(0);
        printf("\n Enter Product Qty: ");
        scanf("%d", &p[i].qty);
    }
printf("\n --------------- Product Details------------");
printf("\nID\tName\tPrice\tQuantity\tAmount\n");
for ( i = 0; i < 2; i++)
{
    printf("%d\t%s\t%d\t%d\t\t%d", p[i].pid, p[i].pname, p[i].rate, p[i].qty,(p[i].rate * p[i].qty));
    total = total + p[i].rate * p[i].qty;
    printf("\n");
    }
    printf("\n--------------------------------------------");
    printf("\n\t\tTotal Amount: %d",total);
    printf("\n--------------------------------------------");
}