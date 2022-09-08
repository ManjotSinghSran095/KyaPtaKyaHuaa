# include<stdio.h>
# include<math.h>
int main() {
    int cost,tax;
    printf("Enter the money earned by anyone : ");
    scanf("%d",&cost);
    if (cost>250000 && cost<500000){
        tax = 5;
        cost -= 250000;
        }
    else if (cost>=500000 && cost<1000000){
        tax = 10;
        cost -= 250000;
        }
    else if (cost>=1000000){
        tax = 20;
        cost -= 250000;
        }
    else {
        tax = 0;
        }
    printf("Your earning is more for tax is %d so , you have to pay %d percent of tax as ", cost,tax);
    int montax = (cost*tax/100);
    printf("%d $", montax);
    return 0;
}