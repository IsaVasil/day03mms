#include <stdio.h>
#include <math.h>
#define PI 3.14
#define sum(x,y) ((x)+(y))
#define mult(x,y) ((x)*(y))
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((b)>(a)?(a):(b))
#define fori(start,end,step) (int i =start;i<=end; i==step)
#define SWAP(a,b) (a^=b,b^=a,a^=b)

int main(){
  //  double r=10;
   // double s =PI * r * r;
   // double p=2*PI *r;
   // printf("s=%.2lf",s);
//
   // printf("p=%.2lf",p);
   int num=sum(10,20)*2;
   printf("p=%.d",num);
      num=mult(10,20)*2;
   printf("p=%.d",num);
    return 0;
     // num = min(10.1 > 15.1 ? 10.1 : 15.1);
  // printf("p=%.d",num);
 /* int a=20;
  int b=30;
  SWAP(a,b);
  printf("%d,%d",a,b);
   printf("p=%.d",num);
   */
    return 0;
}