#include<stdio.h>
main()
{
    int n,m,p,contador;
    scanf ("%d",&n);
    if (n<0) n=n*(-1);
    m=1;
    contador=0;
    while (m<=n)
     {
     p = n%m;
     ++m;
     if (p==0)
     ++contador;
     }
     if (contador==2) printf("sim");
     else printf("nao");
     return 0;
}
