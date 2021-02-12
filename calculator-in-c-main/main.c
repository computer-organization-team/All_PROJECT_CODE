#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX(a, b) (((a > b)) ? (a) : (b))
#define MIN(a, b) (((a < b)) ? (a) : (b))
typedef long long int ll;

int x;
ll a,b,result;

void welcomeMessage() {
    puts("Welcome to scientific calculator!");
    puts("Choose your operation: you want to do: ");
    puts("(1) For subtraction\n(2) For division\n(3) For Max Of List\n(4) Power of Number\n(5) Factorization\n(6) For Sin\n(7) For Cos\n(8) For Tan\n(9) For Square\n(10) For Rectangle detection\n(11) For Triangle detection");
    printf("Enter ur choice: ");
}

void Subtraction() { ll result = a-b; printf("%lld-%lld=%lld", a, b, result); }

void Division() { if(b==0) printf("division over zero invalid"); printf("%lld/%lld=%lld",a,b,a/b); }

void FindMax() {
        ll size=0,max=-999999,x; printf("Enter list size \n"); scanf("%lld",&size);
        for(ll i=0; i<size; i++) { scanf("%lld",&x); max=MAX(max,x); }
        printf("%lld",max); }

void Power() {
    double a,b;
    printf("enter base and the power  \n");
    scanf("%lf%lf",&a,&b);
    double sum=a;
    for(int i=1;i<b;i++)
    {
        sum*=a;
    }
    printf("%.2lf ^ %.2lf= %.2lf",a,b,sum);
}

void Sin() {
    int n;
    float  term, denominator, x, sinx;

    printf("Enter the value of x (in degrees) \n");
    scanf("%f", &x);
    x = x * (3.142 / 180.0);
    term = x;
    sinx = term;
    n = 1;
    while (n <= 5)
    {
        denominator = 2 * n * (2 * n + 1);
        term = -term * x * x / denominator;
        sinx = sinx + term;
        n = n + 1;
    }
    printf("Sum of the sine series = %f \n", sinx);
}

void Cos() {
    double a;
    printf("enter the angle in degree  \n");
    scanf("%lf",&a);
    a*=0.0174532925 ;
    printf("%.2lf",cos(a));
}

void Tan() {
    double a;
    printf("enter the angle in degree  \n");
    scanf("%lf",&a);
    a*=0.0174532925 ; printf("%.2lf",tan(a));
}

void square()
{
     double a,b,c,d;
    int sum=0;
    printf("enter base and the length  \n");
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    if(a==b&&b==c&&c==d){
        printf("this is square");
    }
    else{
        printf("this is not square ");
    }
}
void Rectangle() {
    double a,b,c,d;
    int sum=0;
    printf("enter base and the length  \n");
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    if(a==b)sum++;
    if(a==c)sum++;
    if(a==d)sum++;
    if(b==c)sum++;
    if(b==d)sum++;
    if(c==d)sum++;
    (sum==2)? printf("this is rectangle") : printf("this is not rectangle");
}

void Triangle() {
    double a,b,c;
    printf("enter base and the length  \n");
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a+b>c && a+c>b && b+c >a)printf("this is rectangle");
    else printf("this is not rectangle");
}

void factorization() {
    int n;
    printf("enter int number ");
    scanf("%d",&n);
    float temp, sqrt;
    sqrt = n / 2;
    temp = 0;

    // Iterate until sqrt is different of temp, that is updated on the loop
    while(sqrt != temp){
        // initially 0, is updated with the initial value of 128
        // (on second iteration = 65)
        // and so on
        temp = sqrt;

        // Then, replace values (256 / 128 + 128 ) / 2 = 65
        // (on second iteration 34.46923076923077)
        // and so on
        sqrt = ( n/temp + temp) / 2;
    }




while (n%2 == 0)
    {
        printf("%d ", 2);
        n = n/2;
    }

    // n must be odd at this point.  So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt; i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            printf("%d ", i);
            n = n/i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        printf ("%d ", n);
}

int main()
{
    welcomeMessage();
    scanf("%d",&x);
    if(x==1||x==2)
    {
        printf("Enter first number and second number : ");
        scanf("%lld%lld",&a,&b);
    }

    if(x==1) Subtraction();
    else if (x==2) Division();
    else if (x==3) FindMax();
    else if (x==4) Power();
    else if (x==5) factorization();
    else if (x==6) Sin();
    else if (x==7) Cos();
    else if (x==8) Tan();
    else if (x==9) square();
    else if (x==10) Rectangle();
    else if (x==11) Triangle();

    return 0;
}
