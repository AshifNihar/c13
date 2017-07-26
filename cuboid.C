#include<stdio.h>
#include<math.h>
void main()
{
int l,b,h,tot,vol;
scanf("%d %d %d",&l,&b,&h);
tot=2(l*b+b*h+l*h);
vol=l*b*h;
printf("%d %d",tot,vol);
}
