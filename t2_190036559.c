
/* ALUNO: PEDRO LÍSIAS VIANA ARCOVERDE ALVES              *
 * MATRÍCULA: 19/0036559                                  *
 * DIICIPLINA: ALGORÍTMOS E PROGRAMAÇÃO PARA COMPUTADORES *
 *                                                        *
 *                      TRABALHO_2                        */


#include <stdio.h> 
#include <math.h>
#include <ctype.h>



int fatorial(int n)
{
	if(n < 1)
	{
		return 1;
	}

	return n * fatorial(n - 1);
}


int elevado(int base, int expoente)
{
	while (expoente > 1)
	{
		base *= base;
		expoente --;
	}
	return base;
}


int modolo1(int H)
{
	if (H < 12)
	{
		H = 12 - H;
		return H;
	}
	H -= 12;
	return H;
}


int modolo2(int x, int y)
{
	if (x < y)
	{
		x = y - x;
		return x;
	}
	x -= y;
	return x;
}






/* 3.1 */

int calcula_vida(int N, int PC, int A, int NE)
{

int hp;

 hp = fatorial(A + 1) * elevado(N, PC) / (NE + 1);

 return hp;

}



/* 3.2 */

int atualiza_iluminacao(int L, int H, int* ptr_i)
{

*ptr_i = ( 26 / ( modolo1(H) + 1 ) ) - ( (L * H) / 12 );

return *ptr_i;

}



/* 3.3 */

int num_euler(int x)
{

float i = 0.0000;
float som = 0.0000;

if (x == 0)
{
 return 1;    
}
	
	i = 1.0000 / fatorial(x);
    x -- ;
    som += i;

	return som + num_euler(x); 

}



/* 3.4 */

char entrada_valida()
{

char c;

scanf (" %c", &c);

if (c == 'w' || c == 'a' || c == 's' || c == 'd' || c == 'm' || c == 'W' || c == 'A' || c == 'S' || c == 'D' || c == 'M')
{
return c;
}


return entrada_valida();


}




/* 3.6 */

int esta_ordenado()
{

const int x = 5;
char nome1[x], nome2[x];
int i = 0, j = 0;

scanf("%s%s", nome1, nome2);

while(i < x)
{
	nome1[i] = toupper(nome1[i]);
	nome2[i] = toupper(nome2[i]);
    i++;
}

while(j < x)
{

if ( nome1[j] < nome2[j] )
{
	return 1;
} 
else
{
	if(nome1[j] > nome2[j])
	{
		return 0;
	}
	else
	{
		j++;
	}

}

}
	return 0;

}




/* 3.7 */

int busca_item(int *vetor, int n)
{

int v, qtdde = 0;

for (v = 0; v <= 10; v ++)
{
	if (vetor[v] == n)
	{
		qtdde ++;
	}
	
}

if (qtdde > 0)
{
	printf("O item %d foi encontrado no inventário.\n", n);
}

if (qtdde == 0)
{
	printf("O item %d não foi encontrado no inventário.\n", n);
}
     
return qtdde;


}




/* 3.8 */

void tempo_de_jogo()
{

float horainicial, horafinal, mininicial, minfinal, seginicial, segfinal;
float hrtotalc, hrtotalf, hrresultado1, minresultado1, segresultado1;
int hrresultado2, minresultado2, segresultado2;


scanf("%f:%f:%f", &horainicial, &mininicial, &seginicial);
hrtotalc = horainicial + (mininicial / 60) + ((seginicial / 60) / 60);
printf("%f\n", hrtotalc);

scanf("%f:%f:%f", &horafinal, &minfinal, &segfinal);
hrtotalf = horafinal + (minfinal / 60) + ((segfinal / 60) / 60);
printf("%f\n", hrtotalf);


hrresultado1 = hrtotalf - hrtotalc;
hrresultado2 = hrresultado1;

minresultado1 = (hrresultado1 - hrresultado2) * 60;
minresultado2 = minresultado1;

segresultado1 = (minresultado1 - minresultado2) * 60;
segresultado2 = segresultado1;



  if (hrresultado2 < 10)
  {
  	printf("0%d:", hrresultado2);
  } else {

         printf ("%d:", hrresultado2);
         }

  if (minresultado2 < 10)
  {
  	printf("0%d:", minresultado2);
  } else {

         printf ("%d:", minresultado2);
         }

  if (segresultado2 < 10)
  {
  	printf("0%d\n", segresultado2);
  } else {

         printf ("%d\n", segresultado2);
         }

}



/* 3.9 */

float dif_dist(int xi, int yi, int xf, int yf)
{

float d, de, dm;


dm = modolo2(xf, xi) + modolo2(yf, yi);



de = sqrt(( (xf - xi)*(xf - xi) ) + ( (yf - yi)*(yf - yi) ));


return d = dm - de;

}



/* 3.10 */

int opera_ponteiro (int **ppj, int *pi, int i)
{

int op;

scanf("%d", &op);

if (op == 1)
{

	return *pi + **ppj;

}

if (op == 2)
{

	return *pi - **ppj;

}

if (op == 3)
{

	return *pi * **ppj;

}
else {

	return 1;
}

}
