/* T_3 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int desafio_charada ()
{ 

	char resposta[7];

	system ("clear");

	printf("\n");
	printf("         ,     .                              \n");
	printf("        /(     )\\               A             \n");
	printf("   .--.( `.___.' ).--.         /_\\           ______________________________________________________ \n");
	printf("   `._ `'_&   &_ ' _.'     /| <___> |\\      |                                                      |\n");
	printf("      `|(@\\*  /@)|'       / (  |L|  ) \\     |   VOCÊ ESTÁ DIANTE O MAJESTOSO GUARDIÃO CHIFRUDO!!!  |\n");
	printf("       |  |! !|  |       J d8bo|=|od8b L    |                                                      |\n");
	printf("        \\ \\ ! / /        | 8888|=|8888 |    |       PARA SEGUIR EM FRENTE RESOLVA A CHARADA:       |\n");
	printf("        |\\| # |/|        T º8Y'|=|'Y8º T    |                                                      |\n");
	printf("        | (.'.) |         \\ (  |L|  ) /     |                  O QUE É, O QUE É?                   |\n");
	printf("    ___.'  `-'  `.___      \\|  |L|  |/      |          NUNCA VOLTA, EMBORA NUNCA TENHA IDO.        |\n");
	printf("  .'   `-       -'  *`.       / )|          |                                                      |\n");
	printf(" /  ^  *_ * ^ _        \\    .J (__)         '~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~'\n");
	printf(" |   . ###### ####*.   * \\.-'  (__)           \n");
	printf(" |*  J  . #_|_# .\\J* \\  '  *^  |(_)           \n");  /* resposta: passado */
	printf(" *   J      |     J\\    *   .-´|L|            \n");
	printf(" |   J\\ `   |   ' / `.   _.'   |L|            \n");
	printf(" |   ||`         '|   `-'      |L|            \n");
	printf(" (   ||`         '|            |L|            \n");
	printf(" |    |___________|            |L|            \n");
	printf("                               |L|            \n");
	printf("                               |L|            \n");
	printf("                               |L|            \n");
	printf("                               |L|            \n");
	printf("                               |L|            \n");
	printf("                               |L|            \n");
	printf("                               |L|            \n");
	printf("                               \\|/            \n");
	printf("                                '             \n");
	printf("\n\n");

	printf("            SUA RESPOSTA: ");

	scanf(" %s", resposta);


	if ((resposta[0] == 'p' || resposta[0] == 'P') && (resposta[1] == 'a' || resposta[1] == 'A') && (resposta[2] == 's' || resposta[2] == 'S') && (resposta[3] == 's' || resposta[3] == 'S') && (resposta[4] == 'a' || resposta[4] == 'A') && (resposta[5] == 'd' || resposta[5] == 'D') && (resposta[6] == 'o' || resposta[6] == 'O'))
	{
		system("clear");
		printf("          PARABÉNS VOCÊ ACERTOU !!!\n");
		
		return 1;
		
	}else
	{
		system("clear");
		printf("          VOCÊ ERROU E O GUARDÃO TE DEU UMA MACHADADA !!! >:(\n");

		return 2;
	}


}



int desafio_1000 ()
{

	int segredo, chute, b = 0;

	srand (time(NULL));
	segredo = rand() % 1000 + 1;

		
	
    while(b < 20 && segredo != chute)
	{
	    printf ("ADIVINHE O NÚMERO PARA ABRIR A PORTA DA SALA (1 a 1000): ");
	    scanf ("%d", &chute);
	    b ++;
	    if (segredo < chute) puts ("\nO CÓDIGO DA PASSAGEM É UM NÚMERO MENOR QUE ESSE\n");
	    else if (segredo > chute) puts ("\nO CÓDIGO DA PASSAGEM É UM NÚMERO MAIOR QUE ESSE\n");

	}
	
	if (b == 20)
	{
		system("clear");
		printf("VOCÊ DEMOROU DEMAIS E UM PEDAÇO DO TETO CAIU SOBRE VOCÊ!!!\n");
		return 2;
	}

	system("clear");
 	puts ("        PARABÉNS!!! VOCÊ ABRIU A PORTA COM SUCESSO!\n");
  	return 1;


}



int desafio_dragao ()
{
	
	char resposta[7];

	system ("clear");

	printf("\n");
	printf("                 \\||/     \n");
	printf("                 |  @___oo         ____________________________________________________________\n");
	printf("       /\\  /\\   / (__,,,,|        |                                                            |\n");
	printf("      ) /^\\) ^\\/ _)               |         VOCÊ ESTÁ DIANTE O MAJESTOSO DRAGÃO !!!!!!!        |\n");
	printf("      )   /^\\/   _)               |                                                            |\n");
	printf("      )   _ /  / _)               |           PARA SEGUIR EM FRENTE RESOLVA A CHARADA:         |\n");
	printf("  /\\  )/\\/ ||  | )_)              |                                                            |\n");
	printf(" <  >      |(,,) )__)             |                     O QUE É, O QUE É?                      |\n");
	printf("  ||      /    \\)___)\\            |         TODOS ME PISAM, MAS EU NÃO PISO EM NINGUÉM;        |\n");
	printf("  | \\____(      )___) )___        |  TODOS PERGUNTAM POR MIM, MAS EU NÃO PERGUNTO POR NINGUÉM. |\n");
	printf("   \\______(_______;;; __;;;       |                                                            |\n");
	printf("                                  '~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~'\n\n\n");
	                                                        /* caminho */
	printf("            SUA RESPOSTA: ");

	scanf(" %s", resposta);


	if ((resposta[0] == 'c' || resposta[0] == 'C') && (resposta[1] == 'a' || resposta[1] == 'A') && (resposta[2] == 'm' || resposta[2] == 'M') && (resposta[3] == 'i' || resposta[3] == 'I') && (resposta[4] == 'n' || resposta[4] == 'N') && (resposta[5] == 'h' || resposta[5] == 'H') && (resposta[6] == 'o' || resposta[6] == 'O'))
	{
		system("clear");
		printf("          PARABÉNS VOCÊ ACERTOU !!!\n");
		
		return 1;
		
	}else
	{
		system("clear");
		printf("          VOCÊ ERROU E O DRAGÃO COSPE UMA BOLA DE FOGO EM VOCÊ !!! >:(\n");

		return 2;
	}

}




int desafio_final ()
{
	char respostafinal[9];

	system ("clear");

	printf("\n");
	printf("            ______________________________________________________ \n");
	printf("           |                                                      |\n");
	printf("           |    VOCÊ CHEGA EM FRENTE A UM PORTÃO ENORME !!!!!!!   |\n");
	printf("           |                                                      |\n");
	printf("           |        ESSE É O CADEADO FINAL PARA O TÃO SONHADO     |\n");
	printf("           |                       TESOURO !!!                    |\n");                           
	printf("           |                                                      |\n");
	printf("           |                DIGITE SUA RESPOSTA FINAL:            |\n");
	printf("           |                                                      |\n");
	printf("           '~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~'\n\n");
	printf("                                  ");
	
	scanf(" %s", respostafinal);


	if ((respostafinal[0] == 'h' || respostafinal[0] == 'H') && (respostafinal[1] == 'e' || respostafinal[1] == 'E') && (respostafinal[2] == 'y' || respostafinal[2] == 'Y') && (respostafinal[3] == 'b' || respostafinal[3] == 'B') && (respostafinal[4] == 'a' || respostafinal[4] == 'A') && (respostafinal[5] == 'n' || respostafinal[5] == 'N') && (respostafinal[6] == 'a' || respostafinal[6] == 'A') && (respostafinal[7] == 'n' || respostafinal[7] == 'N') && (respostafinal[8] == 'a' || respostafinal[8] == 'A'))
	{
		system("clear");
		printf("          PARABÉNS VOCÊ ACERTOU !!!   :)\n");
		
		return 1;
		
	}else
	{
		system("clear");
		printf("               VOCÊ ERROU !!!   :/ \n");

		return 2;
	}
}


int menufinal ()
{
	char P;

	system("clear");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n                           VOCÊ MORREU !!!  TENTE OUTRA VEZ!\n\n\n");

	printf("                ,---------------------------------------------------------,\n");
	printf("                |                                                         |\n");
	printf("                |    PARA FECHAR O JOGO              PARA RECOMEÇAR       |\n");
	printf("                |                                                         |\n");
	printf("                |         digite 0                       digite 1         |\n");
	printf("                |                                                         |\n");
	printf("                `---------------------------------------------------------´\n\n");	

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");	

	scanf(" %c", &P);

	if(P == '0')
	{
		return 0;
	} 
	if(P == '1')
	{
		return 1;
	} 

	else
	{
		if(P != '1' && P != '0')
		{
			printf("OPÇÃO INVÁLIDA\n");
			return menufinal();
		} 
		
	return 1;

	}
}



int menufinal2 ()
{
	char P;

	system("clear");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

	printf("                ,---------------------------------------------------------,\n");
	printf("                |                                                         |\n");
	printf("                |    PARA FECHAR O JOGO              PARA RECOMEÇAR       |\n");
	printf("                |                                                         |\n");
	printf("                |         digite 0                       digite 1         |\n");
	printf("                |                                                         |\n");
	printf("                `---------------------------------------------------------´\n\n");	

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");	

	scanf(" %c", &P);

	if(P == '0')
	{
		return 0;
	} 
	if(P == '1')
	{
		return 1;
	} 

	else
	{
		if(P != '1' && P != '0')
		{
			printf("OPÇÃO INVÁLIDA\n");
			return menufinal2();
		} 
		
	return 1;

	}
}




void tela_do_game(char vidadicafinal[80], char mapa[90][30], int* iplayer, int* jplayer, int* desafio1, int* desafio2, int* desafio3, int* desafiofinal, int* asterix1, int* asterix2, int* asterix3, char* vida, int* mf)
{
	int i, j, t;	

	

	for(i = 0; i < 90; i ++)
		for(j = 0; j < 30; j ++)
		{
			mapa[i][j] = '#';
		}


	for(i = 3; i < 10; i ++)
		for(j = 2; j < 6; j ++)
		mapa[i - 1][j] = ' ';

	for(i = 3; i < 84; i ++)
		mapa[i - 1][3] = ' ';

	for(j = 3; j < 14; j ++)
		{
		mapa[16][j] = ' ';
		mapa[17][j] = ' ';
		mapa[18][j] = ' ';
		}
	
	for(j = 3; j < 15; j ++)
		{
		mapa[81][j] = ' ';
		mapa[82][j] = ' ';
		mapa[83][j] = ' ';
		}

	for(j = 6; j < 19; j ++)
		{
		mapa[4][j] = ' ';
		mapa[5][j] = ' ';
		mapa[6][j] = ' ';
		}

	for(i = 53; i < 83; i ++)
		mapa[i - 1][8] = ' ';

	for(i = 5; i < 36; i ++)
		mapa[i - 1][14] = ' ';

	for(j = 8; j < 12; j ++)
		{
		mapa[52][j] = ' ';
		mapa[53][j] = ' ';
		mapa[54][j] = ' ';
		}

	for(i = 45; i < 54; i ++)
		mapa[i - 1][11] = ' ';


	for(j = 8; j < 12; j ++)
		{
		mapa[44][j] = ' ';
		mapa[45][j] = ' ';
		mapa[46][j] = ' ';
		}

	for(i = 35; i < 48; i ++)
		mapa[i - 1][8] = ' ';

	for(i = 29; i < 35; i ++)
		for(j = 7; j < 10; j ++)
		mapa[i - 1][j] = ' ';

	for(j = 14; j < 20; j ++)
		{
		mapa[44][j] = ' ';
		mapa[45][j] = ' ';
		mapa[46][j] = ' ';
		}

	for(i = 37; i < 77; i ++)
		mapa[i - 1][19] = ' ';


	for(j = 14; j < 20; j ++)
		{
		mapa[58][j] = ' ';
		mapa[59][j] = ' ';
		mapa[60][j] = ' ';
		}

	for(j = 14; j < 16; j ++)
		{
		mapa[62][j] = ' ';
		mapa[63][j] = ' ';
		mapa[64][j] = ' ';
		}	


	for(i = 80; i < 87; i ++)
		for(j = 17; j < 21; j ++)
		mapa[i - 1][j] = ' ';

	for(i = 12; i < 82; i ++)
		mapa[i - 1][26] = ' ';

	for(j = 21; j < 27; j ++)
		{
		mapa[81][j] = ' ';
		mapa[82][j] = ' ';
		mapa[83][j] = ' ';
		}

	for(j = 20; j < 25; j ++)
		{
		mapa[65][j] = ' ';
		mapa[66][j] = ' ';
		mapa[67][j] = ' ';
		}

	for(i = 21; i < 29; i ++)
		mapa[i - 1][18] = ' ';

	for(i = 21; i < 31; i ++)
		mapa[i - 1][20] = ' ';

	for(i = 29; i < 36; i ++)
		mapa[i - 1][21] = ' ';

	for(i = 33; i < 39; i ++)
		mapa[i - 1][22] = ' ';


	for(j = 19; j < 20; j ++)
		{
		mapa[20][j] = ' ';	
		mapa[21][j] = ' ';
		mapa[22][j] = ' ';
		mapa[23][j] = ' ';
		}
	
	for(j = 22; j < 27; j ++)
		{
		mapa[35][j] = ' ';
		mapa[36][j] = ' ';
		mapa[37][j] = ' ';
		}

		mapa[5][19] = ' ';
		mapa[6][20] = ' ';
		mapa[7][21] = ' ';
		mapa[8][22] = ' ';
		mapa[9][23] = ' ';
		mapa[10][24] = ' ';
		mapa[11][25] = ' ';

		mapa[33][15] = ' ';
		mapa[34][16] = ' ';
		mapa[35][17] = ' ';
		mapa[36][18] = ' ';
				
		mapa[6][19] = ' ';
		mapa[7][20] = ' ';
		mapa[8][21] = ' ';
		mapa[9][22] = ' ';
		mapa[10][23] = ' ';
		mapa[11][24] = ' ';
		mapa[12][25] = ' ';

		mapa[34][15] = ' ';
		mapa[35][16] = ' ';
		mapa[36][17] = ' ';
		mapa[37][18] = ' ';

		mapa[7][19] = ' ';
		mapa[8][20] = ' ';
		mapa[9][21] = ' ';
		mapa[10][22] = ' ';
		mapa[11][23] = ' ';
		mapa[12][24] = ' ';
		mapa[13][25] = ' ';

		mapa[35][15] = ' ';
		mapa[36][16] = ' ';
		mapa[37][17] = ' ';
		mapa[38][18] = ' ';

	/* portas */

		mapa[34][8] = '!';
		mapa[61][14] = '!';
		mapa[24][18] = '!';
		mapa[81][21] = '!';
		mapa[82][21] = '!';
		mapa[83][21] = '!';

	/* desafios */
	
		mapa[35][8] = '?';
		mapa[60][14] = '?';
		mapa[23][18] = '?';
		mapa[82][22] = '?';		

	/* dicas */

		mapa[30][8] = '*';
		mapa[63][15] = '*';
		mapa[26][18] = '*';

	/* tesouro */
	
		mapa[82][18] = 'W';


	/* posição inicial */

		mapa[*iplayer][*jplayer] = '@';



	if (mapa[30][8] == '@')
	{
		*asterix1 = 1;
	}

	if (mapa[63][15] == '@')
	{
		*asterix2 = 1;
	}

	if (mapa[26][18] == '@')
	{
		*asterix3 = 1;
	}




	if (*asterix1 == 1)
	{
		vidadicafinal[42] = 'h';
		vidadicafinal[49] = 'n';
		vidadicafinal[46] = 'a';
	}

	if (*asterix2 == 1)
	{
		vidadicafinal[47] = 'n';
		vidadicafinal[48] = 'a';
		vidadicafinal[43] = 'e';
	}

	if (*asterix3 == 1)
	{
		vidadicafinal[44] = 'y';
		vidadicafinal[45] = 'b';
		vidadicafinal[50] = 'a';
	}





	system ("clear");


	

	/* desafios */

		if (mapa[35][8] == '@')
		{
			if (*desafio1 != 1)
			{
				*desafio1 = desafio_charada ();
				if(*desafio1 == 2)
				{
					*vida -= 1;
				}
			}
		}


		if (mapa[60][14] == '@')
		{
			if (*desafio2 != 1)
			{
				*desafio2 = desafio_1000 ();
				if(*desafio2 == 2)
				{
					*vida -= 1;
				}
			}
		
		}


		if (mapa[23][18] == '@')
		{
			if (*desafio3 != 1)
			{
				*desafio3 = desafio_dragao ();
				if(*desafio3 == 2)
				{
					*vida -= 1;
				}
			}
		}


		if (mapa[82][22] == '@')
		{
			if (*desafiofinal != 1)
			{
				*desafiofinal = desafio_final ();
				if(*desafiofinal == 2)
				{
					*vida -= 1;
				}
			}
		}




		if(*desafio1 == 1)
		{
			mapa[34][8] = ' ';		
			mapa[35][8] = ' ';
			mapa[*iplayer][*jplayer] = '@';
		}


		if(*desafio2 == 1)
		{
			mapa[61][14] = ' ';		
			mapa[60][14] = ' ';
			mapa[*iplayer][*jplayer] = '@';			
		}

		
		if(*desafio3 == 1)
		{
			mapa[24][18] = ' ';		
			mapa[23][18] = ' ';	
			mapa[*iplayer][*jplayer] = '@';		
		}


		if(*desafiofinal == 1)
		{
			mapa[82][22] = ' ';		
			mapa[81][21] = ' ';
			mapa[82][21] = ' ';
			mapa[83][21] = ' ';	
			mapa[*iplayer][*jplayer] = '@';		
		}




/* printa mapa */


	printf("\n");
	printf(" %s\n", vidadicafinal);

	for(j = 0; j < 30; j ++)
	{
		for(i = 0; i < 90; i ++)
		{
			
			if (i == 0 || i == 88 || j == 0 || j == 29 || i == 89 || i == 1 || (i <= *iplayer + 3 && i >= *iplayer - 3 && j <= *jplayer + 2 && j >= *jplayer - 2) )
			{
				printf("%c", mapa[i][j]);
			}

			if(i == 89)
			{
				printf("\n");
			}

			if(i != 0 && i != 88 && j != 0 && j != 29 && i != 89 && i != 1 && (i > *iplayer + 3 || i < *iplayer - 3 || j > *jplayer + 2 || j < *jplayer - 2)         /*i != *iplayer && i != *iplayer + 1 && i != *iplayer + 2 && i != *iplayer + 3 && i != *iplayer - 1 && i != *iplayer - 2 && i != *iplayer - 3 && j != *jplayer && j != *jplayer + 1 && j != *jplayer + 2 && j != *jplayer - 1 && j != *jplayer - 2*/  )
			{
				printf(" ");
			}
		}
	}


		printf("\n        W\n      A S D                                                  M -> MENU\n\n\n");	


		
	if (*vida == '0')
	{
		*mf = menufinal();
	}



	if (mapa[82][18] == '@')
	{

		system ("clear");

		printf("\n\n\n\n\n\n\n\n");

		printf("                  ,~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~,\n");
		printf("                  |                                                                     |\n");
		printf("                  |                                                                     |\n");
		printf("                  |                    PARABÉNS MEU CONSAGRADO !!!!                     |\n");
		printf("                  |                                                                     |\n");
		printf("                  |                                                                     |\n");
		printf("                  |       VOCÊ CHEGA NA TÃO ESPERADA TUMBA DO PAJÉ E ABRE O ENORME      |\n");
		printf("                  |      SARCÓFAGO QUE ESTÁ NO MEIO DA SALA E DESCOBRE QUE O GRANDE     |\n");
		printf("                  |        TESOURO NA VERDADE O AMOR E  A AMIZADE QUE SE CONSTRÓI       |\n");
		printf("                  |       NO CAMINHO DA VIDA QUE SÃO OS VERDADEIROS TESOUROS!!!!!!      |\n");
		printf("                  |                                                                     |\n");
		printf("                  |                                                                     |\n");
		printf("                  |                                 S2                                  |\n");
		printf("                  |                                                                     |\n");
		printf("                  |                                                                     |\n");
		printf("                  |  *pressione qualquer botão juntamente ao enter para fechar o jogo*  |\n");
		printf("                  '~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~'\n\n\n\n\n\n\n\n");

		scanf(" %d", &t);

		*mf = menufinal2();

	}

}



int menu ()
{
	char c;

	system("clear");
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("                ,---------------------------------------------------------,\n");
	printf("                |                                                         |\n");
	printf("                |    retornar ao jogo                  fechar o jogo      |\n");
	printf("                |                                                         |\n");
	printf("                |       digite 1                          digite 0        |\n");
	printf("                |                                                         |\n");
	printf("                `---------------------------------------------------------´\n\n");	
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");	

	scanf(" %c", &c);

	if(c == '0')
	{
		return 0;
	} 

	else
	{
		if(c != '1')
		{
			printf("OPÇÃO INVÁLIDA\n");
			return menu();
		} 
		
	return 1;

	}
}


char entrada_valida()
{

	char c;

	scanf (" %c", &c);

	if (c == 'w' || c == 'a' || c == 's' || c == 'd' || c == 'm' || c == 'W' || c == 'A' || c == 'S' || c == 'D' || c == 'M')
	{
		return c;
	} 
			
	printf("\nMOVIMENTO INVÁLIDO\n\n");
	return entrada_valida();

}

int jogando ()
{

char mapa[90][30];
int m, mf = 5, iplayer = 5, jplayer = 3, i;
char direcao, vida = '5';
int desafio1 = 0, desafio2 = 0, desafio3 = 0, desafiofinal = 0;
char vidadicafinal[80];	
int asterix1 = 0, asterix2 = 0, asterix3 = 0;


printf("\n");
system("clear");

printf("\n |VIDA: 5|                     dica final: \n##########################################################################################\n#########                                                                               ##\n##                                                                                      ##\n##   @                                                                                  ##\n##                                                                                      ##\n##                                                                                      ##\n##                                                                                      ##\n##                                                                                      ##\n##                                                                                      ##\n##                                                                                      ##\n##                                                                                      ##\n##                                                                                      ##\n##                                                                                      ##\n##                                                                                      ##\n##                                                                                      ##\n##                                                                                      ##\n##                                                                                      ##\n##                                                                                      ##\n##                                                                                      ##\n##                                                                                      ##\n##                                                                                      ##\n##                                                                                      ##\n##                                                                                      ##\n##                                                                                      ##\n##                                                                                      ##\n##                                                                                      ##\n##                                                                                      ##\n##                                                                                      ##\n##                                                                                      ##\n##########################################################################################\n\n\n        W\n      A S D                                                  M -> MENU\n\n");






while (vida >= '0')
{

    if (mf == 0)
	{
		return 0;
	}

	if (mf == 1)
	{
		return 1;
	}



	for(i = 0; i < 85; i ++)
		{
			vidadicafinal[i] = ' ';
		}

			vidadicafinal[0] = '|';
			vidadicafinal[1] = 'V';
			vidadicafinal[2] = 'I';
			vidadicafinal[3] = 'D';
			vidadicafinal[4] = 'A';
			vidadicafinal[5] = ':';
			vidadicafinal[7] = vida;
			vidadicafinal[8] = '|';
			vidadicafinal[30] = 'd';
			vidadicafinal[31] = 'i';
			vidadicafinal[32] = 'c';
			vidadicafinal[33] = 'a';
			vidadicafinal[35] = 'f';
			vidadicafinal[36] = 'i';
			vidadicafinal[37] = 'n';
			vidadicafinal[38] = 'a';
			vidadicafinal[39] = 'l';
			vidadicafinal[40] = ':';

 

	direcao = entrada_valida();


	if (direcao == 'w' || direcao == 'W')
	{
		if ( mapa[iplayer][jplayer - 1] != '#' && mapa[iplayer][jplayer - 1] != '!')	
		jplayer --;

	}
	if (direcao == 'a' || direcao == 'A')
	{
		if ( mapa[iplayer - 1][jplayer] != '#' && mapa[iplayer - 1][jplayer] != '!')
		iplayer --;

	}
	if (direcao == 's' || direcao == 'S')
	{
		if ( mapa[iplayer][jplayer + 1] != '#' && mapa[iplayer][jplayer + 1] != '!')
		jplayer ++;

	}
	if (direcao == 'd' || direcao == 'D')
	{
		if ( mapa[iplayer + 1][jplayer] != '#' && mapa[iplayer + 1][jplayer] != '!')
		iplayer ++;

	}
	if (direcao == 'm' || direcao == 'M')
	{
		m = menu();
		if (m == 0)
		{
			return 0;
		}

    }

	tela_do_game (vidadicafinal, mapa, &iplayer, &jplayer, &desafio1, &desafio2, &desafio3, &desafiofinal, &asterix1, &asterix2, &asterix3, &vida, &mf);

	
}


	return 0;
}



int main()
{

	int jogo;


	jogo = jogando();

	if (jogo == 0)
	{
		return 0;
	}


	if (jogo == 1)
	{
		return jogando();
	}



	return 0;
}