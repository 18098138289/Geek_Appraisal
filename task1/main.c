#include <bits/stdc++.h>
int main ()
{
   double a,h,y1,y2;
   int t = 0;
   double x,y;
   x = 0;
   h=0.001;
   
   
   
   printf("Please enter:\n");
   scanf("%lf",&a);
   y1 = a*(1 - h);
   y2 = a*pow((1 - h),2);
   printf("  x     y   \n");
   printf("0.00000     %lf\n",a);
   
for(double y=a; y1 - y2 > 0.0001;t++)
{
	x += h;
	y1=a*pow((1-h),t);
	y2=a*pow((1-h),t+1);
	printf("  %lf     %lf\n",  x  ,  y2);
}
 
  return 0;
   
}
