#include<stdio.h>
main()
{
int X1,Y1,X2,Y2;
while(1)
{
scanf ("%d %d %d %d",&X1,&Y1,&X2,&Y2);
if (X1==0 && Y1==0 && X2==0 && Y2==0) break;
else if (X1<1 || X2<1 || Y1<1 || Y2<1 || X1>8 || Y1>8 || X2>8 || Y2>8) {break;}
else if (X1==X2 && Y1==Y2) {printf("0\n");}
else if (X1==X2) {printf("1\n");}
else if (Y1==Y2) {printf("1\n");}
else if (X1+Y1==X2+Y2) {printf ("1\n");}
else if  (X1-X2==Y1-Y2) {printf("1\n");}
else printf("2\n");
}
return 0;
}
