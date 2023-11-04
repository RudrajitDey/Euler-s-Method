#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x,y) y-x/y+x 

int main()
{
    float x0,y0,xn,yn,slope,h;
    int n,i;

    printf("Enter the Enitial condition : ");
    printf("x0=");
    scanf("%f",&x0);
    printf("y0=");
    scanf("%f",&y0);
    printf("Enter the calculation point xn : ");
    scanf("%f",&xn);
    printf("Enter the number of steps : ");
    scanf("%d",&n);
    printf("\nx0\ty0\tyn\n");

    h=(xn-x0)/n;

    for(i=0;i<n;i++)
    {
        slope=f(x0,y0);

        yn=y0+h*slope;
        printf("\n%0.4f\t%0.4f\t%0.4f\n",x0,y0,yn);

        y0=yn;
        x0=x0+h;
    }

    printf("\nValue of y at x= %0.3f is %0.3f",xn,yn);

    return 0;

}