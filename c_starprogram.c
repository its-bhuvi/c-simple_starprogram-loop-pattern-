#include<stdio.h>
#include<conio.h>
void main ()

{
   int i,j,k,l,a,b,c,d,e,ee=0;
   clrscr();
for(i=0;i<4;i++)
{
  for(l=i;l<=4;l++)
  {
  printf("*");
  }
  for(j=1;j<=i;j++)
  {
  printf(" ");
  }
  for(j=0;j<i;j++)
  {
  printf(" ");
  }
  for(j=0;j<i;j++)
  {
  printf(" ");
  }
  for(k=j;k<=4;k++)
  {
  printf("*");
  }
  printf("\n");
}

for(a=4;a>=0;a--)
{
  for(b=ee;b>0;b--)
  {
  printf("*");
  }
  for(c=1;c<=a;c++)
  {
  printf(" ");
  }
  for(c=1;c<=a;c++)
  {
  printf(" ");
  }
  for(e=a;e<=4;e++)
  {
  printf("*");
  }
  printf("\n");
  ee++;

}
  
getch();

}