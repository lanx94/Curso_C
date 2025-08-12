// Engenharia Civil 2AECM-D3
//Lucas Cardoso da Silva R.A. 201411599
//Silas José de Oliveira R.A. 201412970

#include<stdio.h>
main()
{
int i= 50, j=10, k=5,l=1;
int ab,bc,cd,a,b,c,d,v=0,x;

do
{
scanf ("%d",&x);
    if(x==0)break;
    else if (x<0 || x>10000)break;
    else {
    a = (x / i);
    ab = (x % i);
    b = ( ab / j);
    bc = (ab % j);
    c = (bc / k);
    cd = (bc % k);
    d = (cd / l);
    printf("Teste %d",v=v+1);
    printf("\n%d%2d%2d%2d\n",a,b,c,d);
    printf("\n");
    }
}
while (x!=0);
return 0;
}

