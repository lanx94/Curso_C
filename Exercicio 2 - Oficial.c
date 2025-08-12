// Engenharia Civil 2AECM-D3
//Lucas Cardoso da Silva R.A. 201411599
//Silas José de Oliveira R.A. 201412970

#include<stdio.h>
#include<math.h>

main()
{
int q;
int contador1, contador2, contador3;
contador1=0;
contador2=0;
contador3=0;

do{

 printf("\nbem vindo!\n");
 printf("1 - valor de 'e'\n");
 printf("2 - valor de 'pi'\n" );
 printf("3 - valor de Raiz de '2'\n");

 scanf("%d",&q);

 switch (q)
{
 case 1:
{
        int i;
        double d,e,y;

        y=1.0;
        e=1.0;
        i=1;

        printf("\n\n\nValor aproximado de e:\n");

        do
        {
            y=y/i;
            e=e+y;
            d=M_E-e;
            printf("i=%2d y=%le e=%.12lf (dif=%.12le)\n", i, y, e, d);
            i++;
            contador1++;
        }
        while (fabs(d)>1.0e-5);
        printf ("e=%.10lf\n", e);
        printf ("Contador=%d\n", contador1);

break;
    }
case 2:
    {

         int i;
        double d,j,y,pi4;

        j=1.0;
        pi4 = 0.0;
        i=1;

        printf("\n\n\nValor aproximado de pi:\n");

        do
        {
            y=j/i;
            pi4=pi4 + y;
            d=pi4*4-M_PI;
            printf ("i=%2d j=%12.8lf y = %12.8lf diff=%12.8lf\n",i,j,y,d);
            j=-j;
            i=i+2;
            contador2++;
        }
        while(fabs(d)>1.0e-5);
        printf ("pi=%12.10lf\n", pi4*4);
        printf ("Contador=%d\n", contador2);

break;
    }
case 3:
    {
        int q;
        int a,n;
        double e, y,z,k;
        double d,x;

        a=2;
        x=1.0;
        n=0;

        printf("\n\nValor aproximado de raiz de 2:");

        do
        {
            y=(a+(x*x));
            z=(2*x);
            k=y/z;
            printf("\nX%d=%.10le",n,x  );
            d=M_SQRT2-k;
            printf("    diferenca:%.10le",d);
            x=k;
            printf("    Raiz2=%.10lf",x);
            n++;
            contador3++;

        }while(fabs(d)>1.0e-5);
        printf("\nRaiz2=%.10lf\n",x);
        printf ("Contador=%d\n", contador3);
break;
}
}
}
while (q!=0);
system("cls");
printf("Obrigado, volte sempre!\n\n");
}
