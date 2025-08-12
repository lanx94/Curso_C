// Engenharia Civil 2AECM-D3
//Lucas Cardoso da Silva R.A. 201411599
//Silas José de Oliveira R.A. 201412970

#include<stdio.h>

main()

{
    int g,p,l,n,z,x,i,c=-1,y,a,b=-1;
    double p1[21],p2[21];
    double media;
    int f= 0;
    int h = 0;

printf ("       Bem vindo\n");

do{
printf("\nO que deseja fazer?\n\n");
printf("1 - Receber notas P1 de todos os alunos.\n");//ok
printf("2 - Receber notas P2 de todos os alunos.\n");//ok
printf("3 - Receber nota P1 de um aluno.\n");
printf("4 - Receber nota P2 de um aluno.\n");
printf("5 - Verificar a condicao de um aluno.\n");
printf("6 - Listar alunos em intervalo.\n");
printf("7 - Listar todos os alunos.\n");
printf("0 - Sair do Sistema\n\n");//ok


printf("Entre com uma opcao\n");
scanf("%d",&y);

           switch(y){

           case 1:
             {
                for (i=10000;i<10021;i=i+1)
                {
                printf("\nAluno %d\n",i);
                printf("Digite a nota p1\n");
                scanf("%lf",&p1[i-10000]);
                if (p1[i-10000] == -1)
                {
                    printf("\n"); break;
                }
                else if ((p1[i-10000]<0 && p1[i-10000]!=-1) || p1[i-10000] >10 ) {printf("\nValor Invalido\n"); ((c=c-1)+10000);}
                }
            }
               break;

            case 2:
            {
                for (a=10000;a<10021;a=a+1)
                {
                printf("\nAluno %d\n",(b=b+1)+10000);
                printf("Digite a nota p2\n");
                scanf("%lf",&p2[a-10000]);
                if (p2[a-10000] == -1)
                {
                    printf("\n"); break;
                }
                else if ((p2[a-10000]<0 && p2[a-10000]!=-1) || p2[a-10000] >10 ) {printf("\nValor Invalido\n"); b=b-1;}
                }
            }
               break;

            case 3:
            {
                printf ("\nEntre com o numero do aluno:\n");
                scanf ( "%d", &x);

                if ( x <10000 || x >10020) printf ("Aluno inexistente\n");
                else
                {
                    printf ("Entre com a nota P1 do aluno:\n");
                    scanf ("%lf", & p1[x-10000]);
                }
                }
                break;

            case 4:
            {
                printf ("\nEntre com o numero do aluno:\n");
                scanf ( "%d", &z);

                if ( z <10000 || z >10020) printf ("Aluno inexistente\n");
                else
                {
                    printf ("Entre com a nota P2 do aluno:\n");
                    scanf ("%lf",&p2[z-10000]);
                }
            }
            break;

            case 5:
             {
                   printf ("\nDigite o numero aluno:\n");
                   scanf("%d",&n);

                    if ( n <10000 || n >10020)
                {
                    printf ("Aluno inexistente\n\n");
                }
                else
                {
                    printf ("Nota p1: %.2lf\n", p1[n-10000]);
                    printf ("Nota p2: %.2lf\n", p2[n-10000]);

                    double media = (0.4*p1[n-10000]) + (0.6*p2[n-10000]);
                    printf ("Media: %.2lf", media);

                    if ( media >= 6.0){ printf("    Aluno aprovado\n\n");}
                    else{   printf ("   Aluno reprovado\n\n");}
                }
             }
            break;

            case 6:
              {
                int inicial;
                int finall;
                int w;

                printf("\nEntre com o numero do aluno inicial:\n");
                scanf("%d", &inicial);
                inicial = inicial-10000;

                printf("\nEntre com o numero do aluno final:\n");
                scanf("%d", &finall);
                finall = finall-10000;

                for(w=inicial; w<=finall; w++)
                {
                    printf("Aluno %d:\n", w+10000);
                    printf("Nota P1: %.2lf\n", p1[w]);
                    printf("Nota P2: %.2lf\n\n", p2[w]);

                    double media = (0.4*p1[w]) + (0.6*p2[w]);
                    printf ("Media: %.2lf", media);

                    if ( media >= 6.0){ printf("    Aluno aprovado\n");}
                    else{   printf ("   Aluno reprovado\n");}
                }
              }
            break;

            case 7:

                    for(l=10000; l <= 10020; l++)
               {
                    printf("Aluno %.2d\n",l);
                    printf("Nota P1: %.2lf\n", p1[l-10000]);
                    printf("Nota P2: %.2lf\n\n",p2[l-10000]);
                    media = ((0.4*p1[l-10000])+(0.6*p2[l-10000]));
                    printf("Media:%.2lf",media);
                    if (media >= 6.0) {printf("  Aluno Aprovado\n\n");}
                    else {printf("   Aluno Reprovado\n\n");}
               }
           break;
          }
}
while (y != 0);
system("cls");
printf("Obrigado, Volte Sempre!\n\n");
}
