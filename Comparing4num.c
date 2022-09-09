# include<stdio.h>
# include<math.h>
int main() {
    int m,n,b,v,pl= 0,a=0,winner = 0;
    printf("Enter first number : ");
    scanf("%d", &m);
    printf("Enter second number : ");
    scanf("%d", &n);
    printf("Enter third number : ");
    scanf("%d", &b);
    printf("Enter fourth number : ");
    scanf("%d", &v);
    if (m>=n){
    a = a + m;
    }
    else if (n>=m){
    a = a + n;
    }
    if (b>=v){
    pl = pl + b;
    }
    else if (v>=b){
    pl = pl + v;
    }
    if (pl>=a){
    winner = winner + pl;
    }
    else {
    winner = winner + a;
    }
    printf("The largest number Entered by you is %d",winner);
    return 0;
}