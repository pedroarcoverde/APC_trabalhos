 /*        TRABALHO1APC_SALVANDO-A-PRINCESA             *
  *ALUNO: PEDRO LÍSIAS VIANA ARCOVERDE ALVES            *
  *MATRÍCULA: 19/0036559                                *
  *MATÉRIA: ALGORÍTIMOS E PROGRAMAÇÃO PARA COMPUTADORES *

  *OBS: TODAS AS TEXTART SÃO DE DESENVOLVIMENTO ORIGINAL*
  *SOMENTE COM INSPIRAÇÃO EM OUTROS DESENHO0S DIVULGADOS *
  *            EM SITES PARA AFINS                      */



#include <stdio.h>



int main () 
{



	int catacumba1, catacumba2, catacumba3, catacumba4, equipamento, teletransporte, acao, morte, defesa, ataque, classe_escolhida, ataqueinicial, defesainicial;
	int life = 0, jogando = 1, morte_dardos = 1, vidaxama, ataquexama =2, vidaprincesa, ataqueprincesa = 3, estamina, fimgame; 

	char nome_player[20], resposta2, aux;


	while (jogando == 1) 
	{

	estamina = 3;
	vidaprincesa = 10;
	vidaxama = 9;

		printf ("        *OBS: È RECOMENDADO A EXECUÇÃO EM TELA CHEIA*\n        *OBS²: ESCOLHA UM NOME DE ATÉ 20 CARACTERES*\n\n\n");
		printf (" OLA AVENTUREIRO, SEJA BEM VINDO AO REINO DE WHITE SNOW!\n");
		printf (" DIGITE SEU NOME DE AVENTUREIRO:\n");

		scanf ("%s", nome_player);																			    /*	defesa = 4 ataque = 1		defesa = 3 ataque = 2	  defesa = 2 ataque = 3     defesa = 1 ataque = 4 */
		printf ("\n POIS BEM AVENTUREIRO, ANTES DE COMEÇARMOS, ESCOLHA SUA CLASSE E CONSEQUENTEMENTE SUA ARMA:\n\n1) GUERREIRO (ESPADA E ESCUDO)\n2) ARQUEIRO (ARCO E FLECHA)\n3) MAGO (CAJADO)\n4) NINJA (KATANA)\n\n");
		scanf ("%d", &classe_escolhida);
				
		if (classe_escolhida == 1)
			{
			printf ("   ATK = 1\n   DEF = 4\n\n");
			ataque = 1;
			defesa = 4;

			} else 
				{ 
					if (classe_escolhida == 2) 
		   			{
					printf ("   ATK = 2\n   DEF = 3\n\n");
					ataque = 2;
					defesa = 3;

					} else 
						{ if (classe_escolhida == 3) 
							{
							printf ("   ATK = 3\n   DEF = 2\n\n");
							ataque = 3;
							defesa = 2;

							} else
								{ if (classe_escolhida == 4)
									{
									printf ("   ATK = 4\n   DEF = 1\n\n");
									ataque = 4;
									defesa = 1;

									} else
										{
									printf("\nCLASSE INVÁLIDA\n");
									printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
									scanf ("%d", &fimgame);

										if (fimgame == 1)
										{
										
											printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
											continue;
										

										} else {

												return 0;

												}

											return 0;
							
					}}}
				}
				

		printf ("\n APÓS MAIS UM DIA DE TRABALHO ÁRDUO, MATANDO SLIMES E VENDENDO SUAS PELES, AO CHEGAR EM CASA VC PERCEBE\nQUE DEIXARAM EM SUA CAIXA DE CORRESPONDÊNCIAS UMA CARTA DE APARENCIA REQUINTADA\n(COISA JAMAIS VISTA ANTES EM SEU HUMILDE VILAREJO)\nNELA DIZIA:\n");
			
		printf(" _________________________________________________________________________________________________________\n");
		printf("|                                                                                                         |\n");
		printf("|                                                                                                         |\n");
		printf("|     CARO(A) Sr(a) %-21s                                                                 |\n", nome_player);
		printf("|                                                                                                         |\n");
		printf("|                                                                                                         |\n");
		printf("|     MEU NOME É STUART SNOW, ATUAL REI DE WITE SNOW, UM DOS CINCO MAIORES REINOS DA ILHA DE MARKOV,      |\n");
		printf("|    E VENHO POR MEIO DESTA CARTA CONVOCAR NOBRES AVENTUREIROS DISPOSTOS A SE AVENTURAR NAS CATACUMBAS    |\n");
		printf("|    DO ISOLAMENTO, ONDE MINHA QUERIDA PRIMOGENITA SE PERDEU ENQUANTO PASSEAVA A CAVALO PELAS TERRAS DO   |\n");	
	 	printf("|    REINO. O SR(A) ESTARIA DISPOSTO A RESGATA-LA EM TROCA DE UMA RECOMPENSA EM MOEDAS DE OURO E UMA      |\n");
		printf("|    PORÇÃO DE TERRAS NO MEU REINO?                                                                       |\n");
		printf("|                                                                                                         |\n");
		printf("|                                                                                                         |\n");
		printf("|             SE SUA RESPOSTA FOR SIM DIGITE 'S'                       SE NÃO DIGITE 'N'                  |\n");
		printf("|                                                                                                         |\n");
		printf("|                                                                                                         |\n");
		printf("|_________________________________________________________________________________________________________|\n");
		scanf (" %c", &resposta2);
				

					/* final 1 */
		if (resposta2 == 'n' || resposta2 =='N') 
		{

			printf ("\n DEPOIS DE RECUSAR O PEDIDO DO REI E ENVIAR DE VOLTA SUA CARTA, VC SE DEPARA COM UMA CRISE DE DEPRESSÃO\n");
			printf ("POR TER RECUSADO ESSA OPORTUNIDADE QUE PODERIA TER MUDADO SUA VIDA E SE MATA AO PULAR DE UM PRECIPÍCIO.\n\n");
				
			printf ("                       VC DEVIA SE ENVERGONHAR DE SUAS ESCOLHAS!\n\n");
			printf (" ___________________________________________________________________________________________\n");
			printf ("|                                                                                           |\n");     
			printf ("|                                                                                           |\n");
			printf ("|                  ████▀░░░░░░░░░░░░░░░░░▀████                                              |\n");
			printf ("|                  ███│░░░░░░░░░░░░░░░░░░░│███                                              |\n");
			printf ("|                  ██▌│░░░░░░░░░░░░░░░░░░░│▐██                                              |\n");
			printf ("|                  ██░└┐░░░░░░░░░░░░░░░░░┌┘░██                                              |\n");
			printf ("|                  ██░░└┐░░░░░░░░░░░░░░░┌┘░░██                                              |\n");
			printf ("|                  ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██                VOCÊ                          |\n");
			printf ("|                  ██▌░│██████▌░░░▐██████│░▐██                                              |\n");
			printf ("|                  ███░│▐███▀▀░░▄░░▀▀███▌│░███                      MORREU!!!               |\n");
			printf ("|                  ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██                                              |\n");
			printf ("|                  ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██                                              |\n");
			printf ("|                  ████▄─┘██▌░░░░░░░▐██└─▄████                                              |\n");
			printf ("|                  █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████                  KKKKKKKKK                   |\n");
			printf ("|                  ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████                                              |\n");
			printf ("|                  █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████                                              |\n");
			printf ("|                  ███████▄░░░░░░░░░░░▄███████                                              |\n");
			printf ("|                                                                                           |\n");
			printf ("|___________________________________________________________________________________________|\n\n");

			printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
			scanf ("%d", &fimgame);

			if (fimgame == 1)
			{
							
				printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
				continue;
							

			} else {
					
					return 0;

					}


		} else  
			{
				
				if (resposta2 == 's' || resposta2 == 'S') 
				{
				 
				
						printf ("\n APÓS RESPONDER A CARTA, UM SENTIMENTO DE VIGOR TOMA O SEU CORPO \n E VOCÊ DECIDE PROCURAR POR UM MAPA DA REGIÃO PARA VER SE VOCÊ TEM CONDIÇÕES DE REALISAR A VIAJEM\n\n");

						printf ("   ____________________________________________________________________________________________\n");
						printf ("  (_)__________________________________________________________________________________________)\n");
						printf ("  |                                                                                           |\n");
						printf ("  |      MAPA DO REINO DE WHITE SNOW                                                          |\n");
						printf ("  |                                                                                           |\n");
						printf ("  |                                            ,-.^._                 _                       |\n");
						printf ("  |                                          .'      `-.            ,' ;     entrada          |\n");
						printf ("  |                               /`-.  ,----'         `-.   _  ,-.,'  ;    principal         |\n");
						printf ("  |                            _.'   `--'                 `-' '-'     .      do reino         |\n");
						printf ("  |                           :                                      ;____                    |\n");
						printf ("  |                           ,'      _   |~  _                       ____                    |\n");
						printf ("  |                          :       [_]--'--[_]                     ;                        |\n");
						printf ("  |                          :       |'|´ o `|'| <- castelo         ;                         |\n");
						printf ("  |                          :       | |  ^  | |                    :                         |\n");
						printf ("  |                          ;       |_|_|I|_|_|                    :                         |\n");
						printf ("  |                         (                                       ;                         |\n");
						printf ("  |                          `-.                                  ,'                          |\n");
						printf ("  |                             ;                                 :                           |\n");
						printf ("  |                           .'                             .-._,'                           |\n");
						printf ("  |                         .'                               `.                              _|\n");
						printf ("  |                      _.'                                .__;                            / |\n");
						printf ("  |                      `._                               ;                             __/  |\n");
						printf ("  |                       ___`                            :                             /     |\n");
						printf ("  |                        _____ <-catacumba   ,..__,---._;                           _/      |\n");
						printf ("  |       N                     `-.__         :                                      /        |\n");
						printf ("  |                                  `.--.____;                                   __/       _/|\n");
						printf ("  |   W   +   L                                                                  /         /  |\n");
						printf ("  |                                                                             /        _/   |\n");
						printf (" _|       S                                                                    /        /     |\n");
						printf ("(_)___________________________________________________________________________________________)\n\n");


						printf ("JUNTO DO MAPA, VOCÊ ENCONTRA SEU ANTIGO PASSAPORTE DE MERCANTE\nQUE TE DÁ ACESSO À QUALQUER UM DOS REINOS DA ILHA DE MARKOV\nAGORA VOCÊ PRECISA SE DECIDIR ENTRE:\n\n");
						printf ("1) IR NA CARA E NA CORAGEM, SOMENTE COM OS EQUIPAMENTOS QUE VOCÊ JÁ TEM\n\n");
						printf ("2) GASTAR SUAS ECONOMIAS EM AGUNS EQUIPAMENTOS MINIMAMENTE DECENTES PARA INICIAR A AVENTURA\n\n");
						scanf ("%d", &equipamento);

							/* final 2 */
							if (equipamento == 1)
							{
								printf ("\n VOCÊ, MESQUINHO COMO SEMPRE, DECIDE PEGAR SEU CAVALO E IR SOMENTE COM SEU EQUIPAMENTO VELHO\n");
								printf ("DEPOIS DE DOIS DIAS DE VIAJEM VOCÊ CHEGA NUM VILAREJO RURAL APARENTEMENTE TRANQUÍLO PARA PASSAR A NOITE.\n\n");
								printf ("NO MEIO DA NOITE SEU QUARTO É INVADIDO POR UMA FLECHA DISPARADA POR UM CAÇADOR DE RECOMPENÇAS CHAMADO JORGE,\nQUE FOI CONTRATADO PARA TESTAR AQUELES QUE ACEITARAM O PEDIDO DO REI.\n");
								printf ("PELO FATO DE NÃO TER COMPRADO NEM UMA PANELA PARA PROTEGER O TORÁX,\nA FLEXA DE AVISO PERFUROU SEU ESTOMAGO E VOCÊ MORREU DE EMORRGIA INTERNA\n");
								printf ("JORGE TE MATOU\n");

								printf ("                       VC DEVIA SE ENVERGONHAR DE SUAS ESCOLHAS!\n\n");
								printf (" ___________________________________________________________________________________________\n");
								printf ("|                                                                                           |\n");     
								printf ("|                                                                                           |\n");
								printf ("|                  ████▀░░░░░░░░░░░░░░░░░▀████                                              |\n");
								printf ("|                  ███│░░░░░░░░░░░░░░░░░░░│███                                              |\n");
								printf ("|                  ██▌│░░░░░░░░░░░░░░░░░░░│▐██                                              |\n");
								printf ("|                  ██░└┐░░░░░░░░░░░░░░░░░┌┘░██                                              |\n");
								printf ("|                  ██░░└┐░░░░░░░░░░░░░░░┌┘░░██                                              |\n");
								printf ("|                  ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██                VOCÊ                          |\n");
								printf ("|                  ██▌░│██████▌░░░▐██████│░▐██                                              |\n");
								printf ("|                  ███░│▐███▀▀░░▄░░▀▀███▌│░███                      MORREU!!!               |\n");
								printf ("|                  ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██                                              |\n");
								printf ("|                  ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██                                              |\n");
								printf ("|                  ████▄─┘██▌░░░░░░░▐██└─▄████                                              |\n");
								printf ("|                  █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████                  KKKKKKKKK                   |\n");
								printf ("|                  ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████                                              |\n");
								printf ("|                  █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████                                              |\n");
								printf ("|                  ███████▄░░░░░░░░░░░▄███████                                              |\n");
								printf ("|                                                                                           |\n");
								printf ("|___________________________________________________________________________________________|\n\n");

								printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
								scanf ("%d", &fimgame);

									if (fimgame == 1)
									{
									
										printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
										continue;
									

									} else {

											return 0;

											}

										return 0;


							} else
								{ 			
									if (equipamento == 2)
									{	

										
											printf ("                                   ######## LEVEL UP! ########\n");
											printf ("                     ***** +%d DE DEFESA ******  ****** +%d DE ATAQUE ******\n\n", equipamento, equipamento);

											ataque += 2;
											defesa += 2;
											printf("AGORA SEU ATAQUE É: %d, E SUA DEFESA É: %d\n\n", ataque, defesa);

										

										
									}  else 
										{
											printf ("\n\n\n\n\n\n   MEU CONSAGRADO, POR GENTILEZA, SELECIONE SOMENTE UMA DAS OPÇÕES!!!\n\n\n\n\n");

											printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
											scanf ("%d", &fimgame);

											if (fimgame == 1)
											{
												
												printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
												continue;
												
											} else 
												{

													return 0;
												}

										}
								}
									     		
								     		


								printf ("AO VER VOCÊ SAINDO PELO PORTÃO DA CIDADE, O FERREIRO COM QUE VOCÊ HAVIA COMPRADO SEUS EQUIPAMENTOS,\nTE OFERECE UMA POÇÃO DE TELETRANSPORTE PELA SUA ANTIGA AMIZADE COM SEU PAI JÁ FALECIDO\n");
								printf ("ESSA POÇÃO FUNCIONA A PARTIR DA FORÇA DO PENSAMENTO, ELA TE LEVA PARA QUALQUER PORTA QUE VOCÊ QUISER\n");
								printf ("HUMILDEMENTE, VOCÊ ACEITA A POÇÃO E AGRADECE O FERREIRO\nLOGO EM SEGUIDA, VOCÊ MONTA EM SEU CAVALO E JOGA O FRASCO NO CHÃO\nUMA NUVEM ROXA DENSA SOBE E VOCÊS VÃO DIRETO PARA:\n\n");
								printf ("1) A PORTA DO CASTELO DO REI STUART\n2) A PORTA DAS CATACUMBAS DO ISOLAMENTO\n\n");
								scanf ("%d", &teletransporte);

								
								/* TP 1*/

									if (teletransporte == 1)
									{
									 	
										printf ("                                                                                             \n");
										printf ("                                  -|             |-                                          \n");
										printf ("              -|                  [-_-_-_-_-_-_-_-]                  |-                      \n");
										printf ("              [-_-_-_-_-]          |             |          [-_-_-_-_-]                      \n");
										printf ("               | o   o |           [  0   0   0  ]           | o   o |                       \n");
										printf ("                |     |    -|       |           |       |-    |     |                        \n");
										printf ("                |     |_-___-___-___-|         |-___-___-___-_|     |                        \n");
										printf ("                |  o  ]              [    0    ]              [  o  |                        \n");
										printf ("                |     ]   o   o   o  [ _______ ]  o   o   o   [     | ----__________         \n");
										printf ("     _____----- |     ]              [ ||||||| ]              [     |                        \n");
										printf ("                |     ]              [ ||||||| ]              [     |                        \n");
										printf ("            _-_-|_____]--------------[_|||||||_]--------------[_____|-_-_                    \n");
										printf ("                                                                                             \n");
										
									 	printf (" QUANDO A NUVEM SE DESFAZ VOCÊ VÊ UMA GRANDE PORTA DE MADEIRA DE CARVALHO COM FECHADURAS ENORMES DE PRATA.\nAO EMPURRAR LEVEMENTE A POTA ELA SE ABRE MOSTRANDO UMA FILA COM DIVERSOS AVENTUREIROS DE DIFERENTES NAÇÕES\n");
									 	printf ("AO CHEGAR NO FINAL DA FILA CADA AVENTUREIRO RECEBE UM MAPA INDICANDO QUAL É A ROTA MAIS SEGURA ATÉ\nO LOCAL ONDE ELES IMAGINAM QUE OS GOBLINS ESTÃO MANTENDO A PRINCESA A PRINCESA\n");
									 	printf ("VOCÊ ENTRA NA FILA, E APÓS ALGUNS INSTANTES, RECEBE SEU MAPA:\n\n");
									 	printf ("   ___________________________________________________________________________________________\n");
										printf ("  |                                                         |          §    §         |       |\n");
										printf ("  |    MAPA DAS CATACUMBAS DO ISOLAMENTO                    |    ?     |    |    ?    |       |\n");
										printf ("  |                                                         |__________|    |_________|       |\n");
										printf ("  |      portão                                             |///////////    //////////|       |\n");
										printf ("  |                                                         |    passagem secreta     |       |\n");
										printf ("  |      |   |______________________________________________|---_______________---____|       |\n");
										printf ("  |      |   |////////////////|//////////////////////////////   ////|/////|////   ////|       |\n");
										printf ("  |      |   |                |                         x           |     |           |       |\n");
										printf ("  |      |   |    perigo      |      acampamento        x           |                 |       |\n");
										printf ("  |      |   | (goblin xamã)  |          dos            x           |     | princesa  |       |\n");
										printf ("  |      |   |_____________   |         goblis          x           |     |           |       |\n");
										printf ("  |      |    _____________   |_________________________x____   ____|     |___________|       |\n");
										printf ("  |      |   |/////////////|  |//////////////////////////////   ////|     |///////////|       |\n");
										printf ("  |      |   |             |       ^^^^^^^^^^^^^^^^^^^^^^^^         |     |__|__|__|__|       |\n");
										printf ("  |      |   |     ???     |       ^^^^^^^^^^^^^^^^^^^^^^^^         |     |__|     |__|       |\n");
										printf ("  |      |   |              ________________________________________|     |__|     |__|       |\n");
										printf ("  |      |   |_____________|/////////o/////o/////o/////o////////////|     |           |       |\n");
										printf ("  |      |   |/////////////|                                              §   celas   |       |\n");
										printf ("  |      |                           corredor com dardos                  §           |       |\n");
										printf ("  |      '~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~'~~~~~~~~~~~'       |\n");
										printf ("  |                                                                                           |\n");
										printf ("  |___________________________________________________________________________________________|\n");

										

										printf ("\nEM POSSE DO MAPA VOCÊ SE JUNTA AO COMBOIO RUMO A ENTRADA DA CATACUMBA\n");
										printf ("\nAPÓS UM DIA DE CAMINHADA, VOCÊS CHEGAM A ENTRADA DA CATACUMBA\nLOGO NA ENTRADA OS GOBLINS FAZEM UMA EMBOSCADA COM VÁRIAS PRÉ-TRAPS QUE JOGAM MAIS DA METADE DOS AVENTUREIROS EM BURACOS CHEIOS DE ESPINHOS,\nASSIM ENTÃO MATANDO SEUS CONCORRENTES\n");
										printf("CHOCADOS COM A SITUAÇÃO, OUTRA GRANDE PARTE DOS QUE FORAM JUNTO DA CARAVANA DESISTIRAM E VOLTARAM CORRENDO PARA CASA\nVOCÊ, SEM PERDER TEMPO, AO VER A CONCORRÊNCIA DIMINUINDO LOGO PULOU DE SEU CAVALO\nE ENQUANDO ADENTRAVA CUIDADOSAMENTE PELA PASSAGEM NO MEIO DAS ROCHAS VOCÊ PUXA SEU MAPA\n");


										printf ("ANALIZANDO FRIAMENTE O MAPA CONCEDIDO, VOCÊ ENXERGA DOIS CAMINHOS POSSÍVEIS:\n\n1) ENTRAR NO PRIMEIRO CORREDOR A ESQUERDA, E SALVAR A PRINCESA PELA PASSAGEM SECRETA, QUE FOI DESCOBERTA POR AVENTUREIROS ANTERIORMENTE\n2) OU SEGUIR PELO CORREDOR CENTRAL, PASSANDO PELA PAREDE DE DARDOS E SEGUINDO PELO CORREDOR DOS FUNDOS\n");
										scanf ("%d", &catacumba1);

										if (catacumba1 == 1) 
										{

											printf("VOCÊ ENTÃO, SABIAMENTE, ESCOLHE O CAMINHO MAIS 'RÁPIDO' AO SEU VER, E SEGUE PELA ESQUERDA\nVOCÊ CHEGA EM UMA ESQUINA ONDE SE ENCONTRA UMA PORTA DE MADEIRA TAMPADA POR UM PANO QUE É O LOCAL ONDE É INDICADO A OFICINA DO XAMÃ NO MAPA\n");
											printf("AGORA VOCÊ PODE:\n\n1) ENTRAR NA OFICINA E TENTAR ELIMINAR O XAMÃ ANTES MESMO DELE TER A CHANCE DE TE VER\n2) OU SEGUIR STEALTH EM DIREÇÃO AO SAGUÃO E DEIXAR PARA O SEU EU DO FUTURO RESOLVER COMO VOLTAR PARA A SAÍDA\n\n");
											scanf ("%d", &catacumba2);

											if (catacumba2 == 1) 
											{
												printf("VOCÊ ENTÃO LEVANTA O PANO E SE DEPARA COM UMA SALA CHEIA DE EQUIPAMENTOS FUTURISTAS, DIGNOS DE UM CENÁRIO DE STAR TREK\nASSUSTADO AINDA, VOCÊ VÊ AO FUNDO DA SALA UM GOBLIN ANCIÃO MECHENDO NUMA ESPÉCIE DE COMPUTADOR\nPERCEBENDO SUA PRESENÇA O GOBLIN SACA UMA PISTOLA LASER DA UM GRUNIDO E VOCÊS COMEÇAM UM COMBATE\n");
												


												printf("\n\n\n\n\n\n\n\n\nCOMBATE XAMÃ\n");

												ataqueinicial = ataque;
												defesainicial = defesa;

													while (defesa > 0 && vidaxama > 0)
														{	
															printf ("\n\n\n\n\n\n\n\n");
															printf (" ___________________________________________________________________________________________\n");
															printf ("|                                                                                           |\n");
															printf ("|                                                                                           |\n");
															printf ("|       VIDA DO XAMÃ : %d                                                                    |\n", vidaxama);
															printf ("|       DANO DA PISTOLA : %d                                                                 |\n", ataquexama);
															printf ("|          DO XAMÃ                                                                          |\n");
															printf ("|                                                                                           |\n");
															printf ("|                                                                                           |\n");
															printf ("|                     o                                                                     |\n");
															printf ("|                 ___/|                                                                     |\n");
															printf ("|                //   |                                                                     |\n");
															printf ("|               //    |                                                                     |\n");
															printf ("|               @---@-3                                                                     |\n");
															printf ("|               ###...'                                                                     |\n");	
															printf ("|                # |___                                                                     |\n");
															printf ("|                 /|  /                                                                     |\n");
															printf ("|                / |                                                                        |\n");
															printf ("|                 /|                                                                        |\n");
															printf ("|                / |                                                     VIDA     : %d       |\n", defesa);
															printf ("|              o/  |o                                                    ATK      : %d       |\n", ataque);
															printf ("|                                                                        ESTAMINA : %d       |\n", estamina);
															printf ("|                                                                                           |\n");
															printf ("|___________________________________________________________________________________________|\n\n");

															printf ("DIGITE SUA AÇÃO:\n\n1) ATACAR\n2) TOMAR POÇÃO DE VIDA\n3) DESCANÇAR\n\n");
															scanf ("%d", &acao);

															if (acao == 1 && estamina > 0)
															{
																printf ("\n\n\n\n\n\n\nVOCÊ CAUSOU %d DE DANO\n\n", ataque);
																vidaxama -= ataque;
																defesa -= ataquexama;
																estamina --;
															} else
																{
																	if (acao == 2)
																	{
																		printf ("\n\n\n\n\n\n\nVOCÊ CORRE DE UM LADO PARA O OUTRO ENQUANTO ENFAIXA O BRAÇO\nCUROU '1' DE VIDA\n\n");
																		defesa ++;
																		estamina --;
																	} else
																		{
																			if (acao == 3)
																			{
																				printf ("\n\n\n\n\n\n\nVOCÊ SE ESCONDE ATRÁS DE UMA ARMÁRIO E RECUPERA '1' DE ESTAMINA\n\n");
																				estamina += 1;
																				defesa -= ataquexama;

																			} else
																				{
																					printf ("\n\n\n\n\n\n\nOPÇÃO INVÁLIDA OU VOCÊ FICOU SEM ESTAMINA\n\n");
																					printf ("DESEJA TENTAR DE NOVO?\n\n1) SIM\n2) NÃO\n\n");
																					scanf ("%d", &morte);

																					if (morte == 1)
																					{

													 									continue;
																					} else 
																						{
																							if (morte == 2)
																							{
																								
																								return 0;
																							} else
																								{
																									printf ("\n\n\n\n\n\n\nVAI FICAR ZUANDO, ENTÃO TCHAU DO MEU JOGO\n\n");
																									return 0;

																								}
																						}


																					continue;
																				}
																		}
																	if (estamina == 0)
																	{
																		printf ("VOCÊ FICOU SEM ESTAMINA E UM TIRO PERFUROU SEU CORAÇÃO\n\n");

																			printf (" ___________________________________________________________________________________________\n");
																			printf ("|                                                                                           |\n");     
																			printf ("|                                                                                           |\n");
																			printf ("|                  ████▀░░░░░░░░░░░░░░░░░▀████                                              |\n");
																			printf ("|                  ███│░░░░░░░░░░░░░░░░░░░│███                                              |\n");
																			printf ("|                  ██▌│░░░░░░░░░░░░░░░░░░░│▐██                                              |\n");
																			printf ("|                  ██░└┐░░░░░░░░░░░░░░░░░┌┘░██                                              |\n");
																			printf ("|                  ██░░└┐░░░░░░░░░░░░░░░┌┘░░██                                              |\n");
																			printf ("|                  ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██                VOCÊ                          |\n");
																			printf ("|                  ██▌░│██████▌░░░▐██████│░▐██                                              |\n");
																			printf ("|                  ███░│▐███▀▀░░▄░░▀▀███▌│░███                      MORREU!!!               |\n");
																			printf ("|                  ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██                                              |\n");
																			printf ("|                  ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██                                              |\n");
																			printf ("|                  ████▄─┘██▌░░░░░░░▐██└─▄████                                              |\n");
																			printf ("|                  █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████                  KKKKKKKKK                   |\n");
																			printf ("|                  ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████                                              |\n");
																			printf ("|                  █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████                                              |\n");
																			printf ("|                  ███████▄░░░░░░░░░░░▄███████                                              |\n");
																			printf ("|                                                                                           |\n");
																			printf ("|___________________________________________________________________________________________|\n\n");

																			printf ("PARA TOMAR UM SUPLEMENTO E VOLTAR A BATALHA '1'                PARA FECHAR O JOGO APERTE '0'\n\n");
																			scanf ("%d", &fimgame);

																				if (fimgame == 1)
																				{
																				
																					printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																					continue;
																				

																				} else {

																						return 0;

																						}


																	} 

																}
															

														}


															if (vidaxama <= 0)
															{
																printf ("VOCÊ GANHOOOUUUUU!!!!\n\n");
																life += 1;
																estamina = 4;
																ataque = ataqueinicial;
																defesa = defesainicial;
															} 




												if (life >= 1)
												{
													printf ("APÓS UMA ÁRDUA BATALHA, VOCÊ SAÍ VITORIOSO\nCOMO RECOMPENSA, VOCÊ PEGA A PISTOLA LASER E UM TIPO DE CAPACETE QUE ELE ESTAVA USANDO, E SAÍ DA SALA RUMO AO SAGUÃO\n\n");


													if (equipamento == 2)
													{	

														
														printf ("                                   ######## LEVEL UP! ########\n");
														printf ("                     ***** +%d DE DEFESA ******  ****** +%d DE ATAQUE ******\n\n", equipamento, equipamento);

														ataque += 2;
														defesa += 2;
														printf("AGORA SEU ATAQUE É: %d, E SUA DEFESA É: %d\n\n", ataque, defesa);

																											
													}


													printf("CHEGANDO NO SAGUÃO VOCÊ SENTE UM CHEIRO HORRÍVEL VINDO DE UMA PORTA NO FUNDO ONDE É INDICADA UMA ÁREA DESCONHECIDA NO MAPA\nVOCÊ, CURIOSO COMO SEMPRE, RESOLVE DAR UMA ESPIADA PELA FRESTA DA PORTA\nCOLOCANDO SEU OLHO DIREITO NA FENDA VOCÊ VÊ UMA CRIATURA ENORME DEITADA EM CIMA DE UMA PILHA ENORME FEITA COM CORPOS DE AVENTUREIROS\nASSUSTADO, VOCÊ RAPIDAMENTE SE AFASTA DALÍ E SEGUE RUMO A PRINCESA QUE É SEU OBJETIVO PRINCIPAL\n\n");
													printf("CONFORME MOSTRA O MAPA, NO MEIO DO SAGUÃO EXISTEM VÁRIOS FUROS POR TODO O CHÃO DE ONDE SAEM ESPINHOS MORTAIS\nCOMO VOCÊ FOI PRECAVIDO E PEGOU O MAPA NO CASTELO REAL, VOCÊ SEGUE PELA DIREITA QUE É O ÚNICO CAMINHO SEGURO\n\n");
													printf("CHEGANDO NA PRÓXIMA SALA, A SUA ESQUERDA, VOCÊ VÊ DIVERSAS TENDAS UMAS EM CIMA DAS OUTRAS, TODAS ELAS SOMENTE COM FÊMEAS E FILHOTES\nVOCÊ PODE:\n\n1) USAR SUA LAMPARINA E ATEAR FOGO NAS TENTAS E NO ACAMPAMENTO\n2) IGNORA-LOS E SEGUIR PARA A PRINCESA\n\n");
													scanf ("%d", &catacumba3);

													if (catacumba3 == 1)
													{
														printf("COM ÓDIO E REPULSA PELAS CRIATURAS HORRENDAS NA SUA FRENTE, EM UMA ATITUDE DESPRESÍVEL, VOCÊ JOGA SUA LAMPARINA EM CIMA DOS PANOS QUE COMBRIAM AS TENDAS\nVOCÊ DÁ UM SUSPIRO DE ALÍVIO COMO SE TIVESSE LIVRADO O MUNDO DA FOME E DA SEDE ENQUANTO DESPOLUIA A ATMOSFERA\nAO SE VIRAR PARA IR FINALMENTE RESGATAR A PRINCESA, VOCÊ SE DEPARA COM UMA HORDA DE GOBLINS GUERREIROS, QUE ESTAVAM VOLTANDO DA ENTRDA DA CATACUMBA APÓS MATAR TODOS OS OUTROS AVENTUREIROS,\nVENDO A CENA, OS GOBLINS, TOMADOS POR ÓDIO E VINGANÇA, CERCAM VOCÊ E EM CONJUNTO ELES RÁPIDAMENTE TE DESARMAM E TE ESFOLAM ATÉ A MORTE\n\n");
													
														printf ("                       VC DEVIA SE ENVERGONHAR DE SUAS ESCOLHAS!\n\n");
														printf (" ___________________________________________________________________________________________\n");
														printf ("|                                                                                           |\n");     
														printf ("|                                                                                           |\n");
														printf ("|                  ████▀░░░░░░░░░░░░░░░░░▀████                                              |\n");
														printf ("|                  ███│░░░░░░░░░░░░░░░░░░░│███                                              |\n");
														printf ("|                  ██▌│░░░░░░░░░░░░░░░░░░░│▐██                                              |\n");
														printf ("|                  ██░└┐░░░░░░░░░░░░░░░░░┌┘░██                                              |\n");
														printf ("|                  ██░░└┐░░░░░░░░░░░░░░░┌┘░░██                                              |\n");
														printf ("|                  ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██                VOCÊ                          |\n");
														printf ("|                  ██▌░│██████▌░░░▐██████│░▐██                                              |\n");
														printf ("|                  ███░│▐███▀▀░░▄░░▀▀███▌│░███                      MORREU!!!               |\n");
														printf ("|                  ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██                                              |\n");
														printf ("|                  ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██                                              |\n");
														printf ("|                  ████▄─┘██▌░░░░░░░▐██└─▄████                                              |\n");
														printf ("|                  █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████                  KKKKKKKKK                   |\n");
														printf ("|                  ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████                                              |\n");
														printf ("|                  █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████                                              |\n");
														printf ("|                  ███████▄░░░░░░░░░░░▄███████                                              |\n");
														printf ("|                                                                                           |\n");
														printf ("|___________________________________________________________________________________________|\n\n");

														printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
														scanf ("%d", &fimgame);

															if (fimgame == 1)
															{
															
																printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																continue;
															

															} else {

																	return 0;

																	}

																
													} else 
														{	if (catacumba3 == 2)
															{
																printf("VOCÊ, COM ESPERANÇA DE ENCONTRAR A PASSAGEM SECRETA, VAI TATEANDO A PAREDE DE BARRO ATÉ QUE VOCÊ ENCONTRA UMA ALAVANCA CAMUFLADA NA PAREDE\nVOCÊ PUXA ELA E SE ABRE NA PAREDE UMA FENDA QUE DÁ ACESSO PARA UM TIPO DE TÚNEL\nENTRANDO NO TÚNEL VOCÊ VÊ UM CORREDOR A ESQUERDA QUE LEVA PARA VÁRIAS SALAS FECHAS POR TELAS E JANELAS DE VIDRO\nDENTRO DE ALGUMAS DAS SALAS TÊM BANCADAS CHEIAS DE TUBOS DE ENSAIO COM UMA ESPŚCIE DE SOLUÇÃO VERDE, E MONITORES MOSTRANDO A MENSAGEM : 'MUTAGÊNICO COMPLETO'\n\n");

																printf ("                                                                                     \n");
																printf ("                       ____________________________                                  \n");
																printf ("                      |]_________________________[|`.                                \n");
																printf ("                      |!                         !|  ;                               \n");
																printf ("                      |!    MUTAGÊNICO           !|  |                               \n");
																printf ("                      |!                         !|  |                               \n");
																printf ("                      |!          COMPLETO       !|  |                               \n");
																printf ("                      |!                         !|  |                               \n");
																printf ("                      |!                         !|  |                               \n");
																printf ("                      |!                         !|  |                               \n");
																printf ("                      |!    (/////100//////)     !|  /                               \n");
																printf ("         ||           |!_________________________!| /                  ||            \n");
																printf ("         ||           |___________________________|/          ||       ||            \n");
																printf ("        (__)            ___//_______________//____            ||      (__)           \n");
																printf ("                       /_________________________/           (__)  ||                \n");
																printf ("                       ________________________                    ||                \n");
																printf ("                      /oooo  oooo  oooo  oooo /                   (__)               \n");
																printf ("                     /ooooooooooooooooooooooo/                                       \n");
																printf ("                    /ooooooooooooooooooooooo/                                        \n");
																printf ("                   /_______________________/                                         \n");
																printf ("                                                                                     \n\n");

																printf("AINDA APOIADO NA GRADE, TENTANDO VER O QUE MAIS TEM NESSAS SALAS MISTERIOSAS, VOCÊ COMEÇA A OUVIR PASSOS E DECIDE SE APRESSAR E IR DE UMA VEZ RESGATAR A PRINCESA\nCHEGANDO NA PORTA QUE DÁ ACESSO A CELA DA PRINCESA VOCÊ COMEÇA A OUVIR GRUNIDOS ENSURDECEDORES\nA PORTA APARENTA ESTAR EMPERREDA E VOCÊ COMEÇA A FORÇA-LA\nA CADA PANCADA SUA NA PORTA OS GRUNIDOS PARECEM CADA VEZ MAIS ASSUSTADORES\nVOCÊ FINALMENTE, EM UMA PANCADA, DERRUBA A PORTA\n\n");
																printf("QUANDO A PORTA BATE NO CHÃO VOCÊ VÊ UMA CRIATURA, QUE MAIS PARECIA UM ALIEN DE CLÁSSICOS FILMES DE TERROR, DEVORANDO OS CORPOS DE VÁRIOS GUARDA E CIENTISTAS GOBLINS\nA CRIATURA SE VIRA E VOCÊ VÊ UMA TIARA DE BRILHANTES PENDURADA EM SEU BRAÇO, LOGO VOCÊ JUNTA OS FATOS:\nA PRINCESA FOI ULTILIZADA EM ESPERIENCIAS MUTAGÊNICAS DEVIDO AO ALTO POTẼNCIAL DO SEU SANGUE AZUL, PORÉM, AO QUE PARECE ELAS SAIRAM DE CONTROLE E VOCÊ CHEGOU BEM NA HORA\n\n");
																
																printf ("PRESSIONE QUALQUER BOTÃO E ENTER\n");
																scanf (" %c", &aux);


																printf ("                                                                                       \n");
																printf ("                                                                                       \n");
																printf ("             __.,,------..__                                                           \n");
																printf ("          ,´´   _      _    `.                                                         \n");
																printf ("         /.__, ._  -=- _``    Y                   GGRRRRRRRÃÃÃÃÃÃ                      \n");
																printf ("        (.____.-.`      ´``   )                          !!!!!!!!!!!!!!!!!             \n");
																printf ("         VvvvvvV`.Y,.    _.,-´       ,     ,     ,                                     \n");
																printf ("            Y    ||,   ``          ,/    ,/    ./                                      \n");
																printf ("            |   ,´  ,     `-,.,´_,´/___,´/   ,´/   ,                                   \n");
																printf ("       .,  ,;,,`,-`` ,`  ,  .     `     ` ``` `--,/    ., .,                           \n");
																printf ("     ,´. `.`---´     `, /  , Y -=-    ,´   ,   ,. .`-.,||_|| .,                        \n");
																printf ("    ff| `. `._        /f ,´j j , ,` ,   , f , |=| Y    || ||`||_.,                     \n");
																printf ("    l` |` `.`.``-.,,-´ j  /./ /, , / , / /l |   |=|l   || `´ || ||...                  \n");
																printf ("     `  `   `-._ `-.,-/ ,´ /`´/-/-/-/-``````.`.  ``.|--``--.,``_`` || ,                \n");
																printf ("                ´`-_,´,  ,´  f    ,   /      `._    ``._     ,  `-.``/|         ,      \n");
																printf ("              ,-´´´ _.,-´    l_,-´_,,´          ´`-._ . ``. /|     `.´ |,       |      \n");
																printf ("            ,´,.,-´´           =  ,`-.         ,    `-´._`.V |       | / ., . /j       \n");
																printf ("            |f |               ´._  -.´`.     /|         `.| |        `.`-||-  /       \n");
																printf ("            l` |`                 ``._   ´`--´ j          j´ j          `-`---`        \n");
																printf ("             `  `                     ``,-  ,`/       ,-´´  /                          \n");
																printf ("                                     ,``,__,-´       /,, ,-´                           \n");
																printf ("                                     Vvv´            VVv´                              \n");
																printf ("                                                                                       \n\n");

																printf("A PRINCESA PERCEBE SUA PRESENÇA E VOCÊS COMEÇAM UM COMBATE\n\n");
																

																printf ("\n\nPRESSIONE QUALQUER BOTÃO E ENTER\n");
																scanf (" %c", &aux);



																printf("COMBATE PRINCESA\n");


																
																while (defesa > 0 && vidaprincesa > 0)
																{	
																	printf ("\n\n\n\n\n\n\n\n");
																	printf (",~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~,\n");
																	printf ("|                                                                                               |\n");
																	printf ("|          VIDA DA PRINCESA : %d                                                                |\n", vidaprincesa);
																	printf ("|          ATK DA PRINCESA  : %d                                                                 |\n", ataqueprincesa);
																	printf ("|                                                                                               |\n");
																	printf ("|                                                                                               |\n");
																	printf ("|             __.,,------..__                                                                   |\n");
																	printf ("|          ,´´   _      _    `.                                                                 |\n");
																	printf ("|         /.__, ._  -=- _``    Y                                                                |\n");
																	printf ("|        (.____.-.`      ´``   )                                                                |\n");
																	printf ("|         VvvvvvV`.Y,.    _.,-´       ,     ,     ,                                             |\n");
																	printf ("|            Y    ||,   ``          ,/    ,/    ./                                              |\n");
																	printf ("|            |   ,´  ,     `-,.,´_,´/___,´/   ,´/   ,                                           |\n");
																	printf ("|       .,  ,;,,`,-`` ,`  ,  .     `     ` ``` `--,/    ., .,                                   |\n");
																	printf ("|     ,´. `.`---´     `, /  , Y -=-    ,´   ,   ,. .`-.,||_|| .,                                |\n");
																	printf ("|    ff| `. `._        /f ,´j j , ,` ,   , f , |=| Y    || ||`||_.,                             |\n");	
																	printf ("|    l` |` `.`.``-.,,-´ j  /./ /, , / , / /l |   |=|l   || `´ || ||...                          |\n");
																	printf ("|     `  `   `-._ `-.,-/ ,´ /`´/-/-/-/-``````.`.  ``.|--``--.,``_`` || ,                        |\n");	
																	printf ("|                ´`-_,´,  ,´  f    ,   /      `._    ``._     ,  `-.``/|         ,              |\n");
																	printf ("|              ,-´´´ _.,-´    j_,-´_,,´          ´`-._ . ``. /|     `.´ |,       |              |\n");
																	printf ("|            ,´,.,-´´           =  ,`-.         ,    `-´._`.V |       | / ., . /j               |\n");
																	printf ("|            |f |               ´._  -.´`.     /|         `.| |        `.`-||-  /               |\n");
																	printf ("|            l` |`                 ``._   ´`--´ j          j´ j          `-`---`                |\n");
																	printf ("|             `  `                     ``,-  ,`/       ,-´´  /                                  |\n");
																	printf ("|                                     ,``,__,-´       /,, ,-´                                   |\n");
																	printf ("|                                     Vvv´            VVv´                                      |\n");
																	printf ("|                                                                        VIDA     : %d           |\n", defesa);
																	printf ("|                                                                        ATK      : %d           |\n", ataque);
																	printf ("|                                                                        ESTAMINA : %d           |\n", estamina);
																	printf ("|                                                                                               |\n");
																	printf ("|                                                                                               |\n");
																	printf ("'~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~'\n\n");

																	printf ("DIGITE SUA AÇÃO:\n\n1) ATACAR\n2) TOMAR POÇÃO DE VIDA\n3) DESCANÇAR\n\n");
																	scanf ("%d", &acao);

																	if (acao == 1 && estamina > 0)
																	{
																		printf ("\n\n\n\n\n\n\nVOCÊ CAUSOU %d DE DANO\n\n", ataque);
																		vidaprincesa -= ataque;
																		defesa -= ataqueprincesa;
																		estamina --;
																	} else
																		{
																			if (acao == 2)
																			{
																				printf ("\n\n\n\n\n\n\nVOCÊ CORRE DE UM LADO PARA O OUTRO ENQUANTO ENFAIXA O BRAÇO\nCUROU '1' DE VIDA\n\n");
																				defesa ++;
																				estamina --;
																			} else
																				{
																					if (acao == 3)
																					{
																						printf ("\n\n\n\n\n\n\nVOCÊ SE ESCONDE ATRÁS DE UMA ARMÁRIO E RECUPERA '1' DE ESTAMINA\n\n");
																						estamina += 1;
																						defesa -= ataqueprincesa;

																					} else
																						{
																							printf ("\n\n\n\n\n\n\nOPÇÃO INVÁLIDA\n\n");
																							printf ("DESEJA TENTAR DE NOVO?\n\n1) SIM\n2) NÃO\n\n");
																							scanf ("%d", &morte);

																							if (morte == 1)
																							{

																									continue;
																							} else 
																								{
																									if (morte == 2)
																									{
																										
																										return 0;
																									} else
																										{
																											printf ("\n\n\n\n\n\n\nVAI FICAR ZUANDO, ENTÃO TCHAU DO MEU JOGO\n\n");
																											return 0;

																										}
																								}


																							continue;
																						}
																				}
																			if (estamina == 0)
																			{
																				printf ("VOCÊ FICOU SEM ESTAMINA E A GARRA DELA PERFUROU SEU CORAÇÃO\n\n");

																						printf (" ___________________________________________________________________________________________\n");
																						printf ("|                                                                                           |\n");     
																						printf ("|                                                                                           |\n");
																						printf ("|                  ████▀░░░░░░░░░░░░░░░░░▀████                                              |\n");
																						printf ("|                  ███│░░░░░░░░░░░░░░░░░░░│███                                              |\n");
																						printf ("|                  ██▌│░░░░░░░░░░░░░░░░░░░│▐██                                              |\n");
																						printf ("|                  ██░└┐░░░░░░░░░░░░░░░░░┌┘░██                                              |\n");
																						printf ("|                  ██░░└┐░░░░░░░░░░░░░░░┌┘░░██                                              |\n");
																						printf ("|                  ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██                VOCÊ                          |\n");
																						printf ("|                  ██▌░│██████▌░░░▐██████│░▐██                                              |\n");
																						printf ("|                  ███░│▐███▀▀░░▄░░▀▀███▌│░███                      MORREU!!!               |\n");
																						printf ("|                  ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██                                              |\n");
																						printf ("|                  ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██                                              |\n");
																						printf ("|                  ████▄─┘██▌░░░░░░░▐██└─▄████                                              |\n");
																						printf ("|                  █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████                  KKKKKKKKK                   |\n");
																						printf ("|                  ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████                                              |\n");
																						printf ("|                  █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████                                              |\n");
																						printf ("|                  ███████▄░░░░░░░░░░░▄███████                                              |\n");
																						printf ("|                                                                                           |\n");
																						printf ("|___________________________________________________________________________________________|\n\n");

																						printf ("PARA TOMAR UM SUPLEMENTO E VOLTAR A BATALHA '1'                PARA FECHAR O JOGO APERTE '0'\n\n");
																						scanf ("%d", &fimgame);

																							if (fimgame == 1)
																							{
																							
																								printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																								continue;
																							

																							} else {

																									return 0;

																									}


																			} 

																		}
																	

																}


																	if (vidaprincesa <= 0)
																	{
																		printf ("VOCÊ GANHOOOUUUUU!!!!\n\n");
																		


																
																

																	printf("APÓS UM FEROZ COMBATE, VOCÊ MATA A PRINCESA E ARRANCA SUA CABEÇA\nVOCÊ, DESTRUIDO DA BATALHA, VÊ AO FUNDO DA SALA, CAIXOTES CHEIOS DE ESPLOSIVOS\nENTÃO OS JOGA EM ENCONTRO A PAREDE E ATIRA SUA LAMPARINA EM CIMA DELES\n\n!!!!!!!!!!  BUUUUMMMM  !!!!!!!!!!\n\nA EXPLOSÃO ESTOURA A PAREDE E TE DÁ ACESSO A FLORESTA, VOCÊ AMARRA A CABEÇA DA PRINCESA EM SEU CAVALO QUE\nAO SENTIR SEU CHEIRO VINDO DA EXPLOSÃO VEIO CORRENDO AO SEU RESGATE\n\nCHEGANDO NO REINO VOCÊ CONTA SUA HISTÓRIA AO REI QUE EXTREMAMENTE IRRITADO COM A MORTE DE SUA FILHA PAGA A VOCÊ O PROMETIDO MAS\nTE EXILA DO REINO DE WHITE SNOW POR AOS OLHOS DO REI, TER DEMORADO DEMAIS E POR ISSO NÃO TER CONSEGUIDO SALVAR A PRINCESA\n\n");

																	printf (",~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~,\n");
																	printf ("|                                                                                           |\n");
																	printf ("|                                                                                           |\n");
																	printf ("|        ▐▀▄       ▄▀▌   ▄▄▄▄▄▄▄                                                            |\n");
																	printf ("|        ▌▒▒▀▄▄▄▄▄▀▒▒▐▄▀▀▒██▒██▒▀▀▄                                                         |\n");
																	printf ("|       ▐▒▒▒▒▀▒▀▒▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▀▄                                                       |\n");
																	printf ("|       ▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▒▒▀▄         PARABÉÉÉÉÉÉNNNNSSS MEU CONSAGRADO!!!!       |\n");
																	printf ("|     ▀█▒▒▒█▌▒▒█▒▒▐█▒▒▒▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌                                                    |\n");
																	printf ("|     ▀▌▒▒▒▒▒▒▀▒▀▒▒▒▒▒▒▀▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐   ▄▄                                               |\n");
																	printf ("|     ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌▄█▒█                                               |\n");
																	printf ("|     ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒█▀     VOCÊ SAIU 'VITORIOSO' DESSA AVENTURA,      |\n");
																	printf ("|     ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▀                                                  |\n");
																	printf ("|     ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌                                                   |\n");
																	printf ("|      ▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐                                                    |\n");
																	printf ("|      ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌             AGORA, ESPERE ANSIOSO PELA             |\n");
																	printf ("|       ▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐                                                     |\n");
																	printf ("|       ▐▄▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▌                                                     |\n");
																	printf ("|         ▀▄▄▀▀▀▀▀▄▄▀▀▀▀▀▀▀▄▄▀▀▀▀▀▄▄▀                        PRÓXIMA ! ! !                  |\n");
																	printf ("|                                                                                           |\n");
																	printf ("|                                                                                           |\n");
																	printf ("|                                                                                           |\n");
																	printf ("|                                                                                           |\n");
																	printf ("'~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~'\n\n");

																	printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
																	scanf ("%d", &fimgame);

																		if (fimgame == 1)
																		{
																		
																			printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																			continue;
																		

																		} else {

																				return 0;

																				}

																} else 
																	{
																		printf (" ___________________________________________________________________________________________\n");
																		printf ("|                                                                                           |\n");     
																		printf ("|                                                                                           |\n");
																		printf ("|                  ████▀░░░░░░░░░░░░░░░░░▀████                                              |\n");
																		printf ("|                  ███│░░░░░░░░░░░░░░░░░░░│███                                              |\n");
																		printf ("|                  ██▌│░░░░░░░░░░░░░░░░░░░│▐██                                              |\n");
																		printf ("|                  ██░└┐░░░░░░░░░░░░░░░░░┌┘░██                                              |\n");
																		printf ("|                  ██░░└┐░░░░░░░░░░░░░░░┌┘░░██                                              |\n");
																		printf ("|                  ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██                VOCÊ                          |\n");
																		printf ("|                  ██▌░│██████▌░░░▐██████│░▐██                                              |\n");
																		printf ("|                  ███░│▐███▀▀░░▄░░▀▀███▌│░███                      MORREU!!!               |\n");
																		printf ("|                  ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██                                              |\n");
																		printf ("|                  ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██                                              |\n");
																		printf ("|                  ████▄─┘██▌░░░░░░░▐██└─▄████                                              |\n");
																		printf ("|                  █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████                  KKKKKKKKK                   |\n");
																		printf ("|                  ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████                                              |\n");
																		printf ("|                  █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████                                              |\n");
																		printf ("|                  ███████▄░░░░░░░░░░░▄███████                                              |\n");
																		printf ("|                                                                                           |\n");
																		printf ("|___________________________________________________________________________________________|\n\n");

																		printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
																		scanf ("%d", &fimgame);

																			if (fimgame == 1)
																			{
																			
																				printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																				continue;
																			

																			} else {

																					return 0;

																					}


																	}	


															} else
																{
																	printf ("\n\n\n\n\n\nMEU CONSAGRADO, POR GENTILEZA, SELECIONE SOMENTE UMA DAS OPÇÕES!!!\n\n\n\n\n");

																	printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
																	scanf ("%d", &fimgame);

																	if (fimgame == 1)
																	{
																			
																		printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																		continue;
																			

																	} else 
																		{

																		return 0;
																		}
																}

														}



												} else
													{
															printf (" ___________________________________________________________________________________________\n");
															printf ("|                                                                                           |\n");     
															printf ("|                                                                                           |\n");
															printf ("|                  ████▀░░░░░░░░░░░░░░░░░▀████                                              |\n");
															printf ("|                  ███│░░░░░░░░░░░░░░░░░░░│███                                              |\n");
															printf ("|                  ██▌│░░░░░░░░░░░░░░░░░░░│▐██                                              |\n");
															printf ("|                  ██░└┐░░░░░░░░░░░░░░░░░┌┘░██                                              |\n");
															printf ("|                  ██░░└┐░░░░░░░░░░░░░░░┌┘░░██                                              |\n");
															printf ("|                  ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██                VOCÊ                          |\n");
															printf ("|                  ██▌░│██████▌░░░▐██████│░▐██                                              |\n");
															printf ("|                  ███░│▐███▀▀░░▄░░▀▀███▌│░███                      MORREU!!!               |\n");
															printf ("|                  ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██                                              |\n");
															printf ("|                  ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██                                              |\n");
															printf ("|                  ████▄─┘██▌░░░░░░░▐██└─▄████                                              |\n");
															printf ("|                  █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████                  KKKKKKKKK                   |\n");
															printf ("|                  ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████                                              |\n");
															printf ("|                  █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████                                              |\n");
															printf ("|                  ███████▄░░░░░░░░░░░▄███████                                              |\n");
															printf ("|                                                                                           |\n");
															printf ("|___________________________________________________________________________________________|\n\n");

															printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
															scanf ("%d", &fimgame);

																if (fimgame == 1)
																{
																
																	printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																	continue;
																

																} else {

																		return 0;

																		}

													}

											
											} else 
												{	if (catacumba2 == 2) 
													{

														printf("CHEGANDO NO SAGUÃO VOCÊ SENTE UM CHEIRO HORRÍVEL VINDO DE UMA PORTA NO FUNDO ONDE É INDICADA UMA ÁREA DESCONHECIDA NO MAPA\nVOCÊ, CURIOSO COMO SEMPRE, RESOLVE DAR UMA ESPIADA PELA FRESTA DA PORTA\nCOLOCANDO SEU OLHO DIREITO NA FENDA VOCÊ VÊ UMA CRIATURA ENORME DEITADA EM CIMA DE UMA PILHA ENORME FEITA COM CORPOS DE AVENTUREIROS\nASSUSTADO, VOCÊ RAPIDAMENTE SE AFASTA DALÍ E SEGUE RUMO A PRINCESA QUE É SEU OBJETIVO PRINCIPAL\n\n");
														printf("CONFORME MOSTRA O MAPA, NO MEIO DO SAGUÃO EXISTEM VÁRIOS FUROS POR TODO O CHÃO DE ONDE SAEM ESPINHOS MORTAIS\nCOMO VOCÊ FOI PRECAVIDO E PEGOU O MAPA NO CASTELO REAL, VOCÊ SEGUE PELA DIREITA QUE É O ÚNICO CAMINHO SEGURO\n\n");
														printf("CHEGANDO NA PRÓXIMA SALA, A SUA ESQUERDA, VOCÊ VÊ DIVERSAS TENDAS UMAS EM CIMA DAS OUTRAS, TODAS ELAS SOMENTE COM FÊMEAS E FILHOTES\nVOCÊ PODE:\n\n1) USAR SUA LAMPARINA E ATEAR FOGO NAS TENTAS E NO ACAMPAMENTO\n2) IGNORA-LOS E SEGUIR PARA A PRINCESA\n\n");
														scanf ("%d", &catacumba3);

														if (catacumba3 == 1)
														{
															printf("COM ÓDIO E REPULSA PELAS CRIATURAS HORRENDAS NA SUA FRENTE, EM UMA ATITUDE DESPRESÍVEL, VOCÊ JOGA SUA LAMPARINA EM CIMA DOS PANOS QUE COMBRIAM AS TENDAS\nVOCÊ DÁ UM SUSPIRO DE ALÍVIO COMO SE TIVESSE LIVRADO O MUNDO DA FOME E DA SEDE ENQUANTO DESPOLUIA A ATMOSFERA\nAO SE VIRAR PARA IR FINALMENTE RESGATAR A PRINCESA, VOCÊ SE DEPARA COM UMA HORDA DE GOBLINS GUERREIROS, QUE ESTAVAM VOLTANDO DA ENTRDA DA CATACUMBA APÓS MATAR TODOS OS OUTROS AVENTUREIROS,\nVENDO A CENA, OS GOBLINS, TOMADOS POR ÓDIO E VINGANÇA, CERCAM VOCÊ E EM CONJUNTO ELES RÁPIDAMENTE TE DESARMAM E TE ESFOLAM ATÉ A MORTE\n\n");
													
															printf ("                       VC DEVIA SE ENVERGONHAR DE SUAS ESCOLHAS!\n\n");
															printf (" ___________________________________________________________________________________________\n");
															printf ("|                                                                                           |\n");     
															printf ("|                                                                                           |\n");
															printf ("|                  ████▀░░░░░░░░░░░░░░░░░▀████                                              |\n");
															printf ("|                  ███│░░░░░░░░░░░░░░░░░░░│███                                              |\n");
															printf ("|                  ██▌│░░░░░░░░░░░░░░░░░░░│▐██                                              |\n");
															printf ("|                  ██░└┐░░░░░░░░░░░░░░░░░┌┘░██                                              |\n");
															printf ("|                  ██░░└┐░░░░░░░░░░░░░░░┌┘░░██                                              |\n");
															printf ("|                  ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██                VOCÊ                          |\n");
															printf ("|                  ██▌░│██████▌░░░▐██████│░▐██                                              |\n");
															printf ("|                  ███░│▐███▀▀░░▄░░▀▀███▌│░███                      MORREU!!!               |\n");
															printf ("|                  ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██                                              |\n");
															printf ("|                  ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██                                              |\n");
															printf ("|                  ████▄─┘██▌░░░░░░░▐██└─▄████                                              |\n");
															printf ("|                  █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████                  KKKKKKKKK                   |\n");
															printf ("|                  ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████                                              |\n");
															printf ("|                  █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████                                              |\n");
															printf ("|                  ███████▄░░░░░░░░░░░▄███████                                              |\n");
															printf ("|                                                                                           |\n");
															printf ("|___________________________________________________________________________________________|\n\n");

															printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
															scanf ("%d", &fimgame);

																if (fimgame == 1)
																{
																
																	printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																	continue;
																

																} else {

																		return 0;

																		}

																	
														} else 
															{	if (catacumba3 == 2)
																{
																	
																	printf("VOCÊ, COM ESPERANÇA DE ENCONTRAR A PASSAGEM SECRETA, VAI TATEANDO A PAREDE DE BARRO ATÉ QUE VOCÊ ENCONTRA UMA ALAVANCA CAMUFLADA NA PAREDE\nVOCÊ PUXA ELA E SE ABRE NA PAREDE UMA FENDA QUE DÁ ACESSO PARA UM TIPO DE TÚNEL\nENTRANDO NO TÚNEL VOCÊ VÊ UM CORREDOR A ESQUERDA QUE LEVA PARA VÁRIAS SALAS FECHAS POR TELAS E JANELAS DE VIDRO\nDENTRO DE ALGUMAS DAS SALAS TÊM BANCADAS CHEIAS DE TUBOS DE ENSAIO COM UMA ESPŚCIE DE SOLUÇÃO VERDE, E MONITORES MOSTRANDO A MENSAGEM : 'MUTAGÊNICO COMPLETO'\n\n");

																	printf ("                                                                                     \n");
																	printf ("                       ____________________________                                  \n");
																	printf ("                      |]_________________________[|`.                                \n");
																	printf ("                      |!                         !|  ;                               \n");
																	printf ("                      |!    MUTAGÊNICO           !|  |                               \n");
																	printf ("                      |!                         !|  |                               \n");
																	printf ("                      |!          COMPLETO       !|  |                               \n");
																	printf ("                      |!                         !|  |                               \n");
																	printf ("                      |!                         !|  |                               \n");
																	printf ("                      |!                         !|  |                               \n");
																	printf ("                      |!    (/////100//////)     !|  /                               \n");
																	printf ("         ||           |!_________________________!| /                  ||            \n");
																	printf ("         ||           |___________________________|/          ||       ||            \n");
																	printf ("        (__)            ___//_______________//____            ||      (__)           \n");
																	printf ("                       /_________________________/           (__)  ||                \n");
																	printf ("                       ________________________                    ||                \n");
																	printf ("                      /oooo  oooo  oooo  oooo /                   (__)               \n");
																	printf ("                     /ooooooooooooooooooooooo/                                       \n");
																	printf ("                    /ooooooooooooooooooooooo/                                        \n");
																	printf ("                   /_______________________/                                         \n");
																	printf ("                                                                                     \n\n");

																	printf("AINDA APOIADO NA GRADE, TENTANDO VER O QUE MAIS TEM NESSAS SALAS MISTERIOSAS, VOCÊ COMEÇA A OUVIR PASSOS E DECIDE SE APRESSAR E IR DE UMA VEZ RESGATAR A PRINCESA\nCHEGANDO NA PORTA QUE DÁ ACESSO A CELA DA PRINCESA VOCÊ COMEÇA A OUVIR GRUNIDOS ENSURDECEDORES\nA PORTA APARENTA ESTAR EMPERREDA E VOCÊ COMEÇA A FORÇA-LA\nA CADA PANCADA SUA NA PORTA OS GRUNIDOS PARECEM CADA VEZ MAIS ASSUSTADORES\nVOCÊ FINALMENTE, EM UMA PANCADA, DERRUBA A PORTA\n\n");
																	printf("QUANDO A PORTA BATE NO CHÃO VOCÊ VÊ UMA CRIATURA, QUE MAIS PARECIA UM ALIEN DE CLÁSSICOS FILMES DE TERROR, DEVORANDO OS CORPOS DE VÁRIOS GUARDA E CIENTISTAS GOBLINS\nA CRIATURA SE VIRA E VOCÊ VÊ UMA TIARA DE BRILHANTES PENDURADA EM SEU BRAÇO, LOGO VOCÊ JUNTA OS FATOS:\nA PRINCESA FOI ULTILIZADA EM ESPERIENCIAS MUTAGÊNICAS DEVIDO AO ALTO POTẼNCIAL DO SEU SANGUE AZUL, PORÉM, AO QUE PARECE ELAS SAIRAM DE CONTROLE E VOCÊ CHEGOU BEM NA HORA\n");
																	
																	printf ("PRESSIONE QUALQUER BOTÃO E ENTER\n");
																	scanf (" %c", &aux);


																	printf ("                                                                                       \n");
																	printf ("                                                                                       \n");
																	printf ("             __.,,------..__                                                           \n");
																	printf ("          ,´´   _      _    `.                                                         \n");
																	printf ("         /.__, ._  -=- _``    Y                   GGRRRRRRRÃÃÃÃÃÃ                      \n");
																	printf ("        (.____.-.`      ´``   )                          !!!!!!!!!!!!!!!!!             \n");
																	printf ("         VvvvvvV`.Y,.    _.,-´       ,     ,     ,                                     \n");
																	printf ("            Y    ||,   ``          ,/    ,/    ./                                      \n");
																	printf ("            |   ,´  ,     `-,.,´_,´/___,´/   ,´/   ,                                   \n");
																	printf ("       .,  ,;,,`,-`` ,`  ,  .     `     ` ``` `--,/    ., .,                           \n");
																	printf ("     ,´. `.`---´     `, /  , Y -=-    ,´   ,   ,. .`-.,||_|| .,                        \n");
																	printf ("    ff| `. `._        /f ,´j j , ,` ,   , f , |=| Y    || ||`||_.,                     \n");
																	printf ("    l` |` `.`.``-.,,-´ j  /./ /, , / , / /l |   |=|l   || `´ || ||...                  \n");
																	printf ("     `  `   `-._ `-.,-/ ,´ /`´/-/-/-/-``````.`.  ``.|--``--.,``_`` || ,                \n");
																	printf ("                ´`-_,´,  ,´  f    ,   /      `._    ``._     ,  `-.``/|         ,      \n");
																	printf ("              ,-´´´ _.,-´    l_,-´_,,´          ´`-._ . ``. /|     `.´ |,       |      \n");
																	printf ("            ,´,.,-´´           =  ,`-.         ,    `-´._`.V |       | / ., . /j       \n");
																	printf ("            |f |               ´._  -.´`.     /|         `.| |        `.`-||-  /       \n");
																	printf ("            l` |`                 ``._   ´`--´ j          j´ j          `-`---`        \n");
																	printf ("             `  `                     ``,-  ,`/       ,-´´  /                          \n");
																	printf ("                                     ,``,__,-´       /,, ,-´                           \n");
																	printf ("                                     Vvv´            VVv´                              \n");
																	printf ("                                                                                       \n\n");

																	printf("A PRINCESA PERCEBE SUA PRESENÇA E VOCÊS COMEÇAM UM COMBATE\n\n");
																	


																	printf ("PRESSIONE QUALQUER BOTÃO E ENTER\n\n\n");
																	scanf (" %c", &aux);

																	printf("COMBATE PRINCESA\n");
																	

																while (defesa > 0 && vidaprincesa > 0)
																{	
																	printf ("\n\n\n\n\n\n\n\n");
																	printf (",~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~,\n");
																	printf ("|                                                                                               |\n");
																	printf ("|          VIDA DA PRINCESA : %d                                                                |\n", vidaprincesa);
																	printf ("|          ATK DA PRINCESA  : %d                                                                 |\n", ataqueprincesa);
																	printf ("|                                                                                               |\n");
																	printf ("|                                                                                               |\n");
																	printf ("|             __.,,------..__                                                                   |\n");
																	printf ("|          ,´´   _      _    `.                                                                 |\n");
																	printf ("|         /.__, ._  -=- _``    Y                                                                |\n");
																	printf ("|        (.____.-.`      ´``   )                                                                |\n");
																	printf ("|         VvvvvvV`.Y,.    _.,-´       ,     ,     ,                                             |\n");
																	printf ("|            Y    ||,   ``          ,/    ,/    ./                                              |\n");
																	printf ("|            |   ,´  ,     `-,.,´_,´/___,´/   ,´/   ,                                           |\n");
																	printf ("|       .,  ,;,,`,-`` ,`  ,  .     `     ` ``` `--,/    ., .,                                   |\n");
																	printf ("|     ,´. `.`---´     `, /  , Y -=-    ,´   ,   ,. .`-.,||_|| .,                                |\n");
																	printf ("|    ff| `. `._        /f ,´j j , ,` ,   , f , |=| Y    || ||`||_.,                             |\n");	
																	printf ("|    l` |` `.`.``-.,,-´ j  /./ /, , / , / /l |   |=|l   || `´ || ||...                          |\n");
																	printf ("|     `  `   `-._ `-.,-/ ,´ /`´/-/-/-/-``````.`.  ``.|--``--.,``_`` || ,                        |\n");	
																	printf ("|                ´`-_,´,  ,´  f    ,   /      `._    ``._     ,  `-.``/|         ,              |\n");
																	printf ("|              ,-´´´ _.,-´    j_,-´_,,´          ´`-._ . ``. /|     `.´ |,       |              |\n");
																	printf ("|            ,´,.,-´´           =  ,`-.         ,    `-´._`.V |       | / ., . /j               |\n");
																	printf ("|            |f |               ´._  -.´`.     /|         `.| |        `.`-||-  /               |\n");
																	printf ("|            l` |`                 ``._   ´`--´ j          j´ j          `-`---`                |\n");
																	printf ("|             `  `                     ``,-  ,`/       ,-´´  /                                  |\n");
																	printf ("|                                     ,``,__,-´       /,, ,-´                                   |\n");
																	printf ("|                                     Vvv´            VVv´                                      |\n");
																	printf ("|                                                                        VIDA     : %d           |\n", defesa);
																	printf ("|                                                                        ATK      : %d           |\n", ataque);
																	printf ("|                                                                        ESTAMINA : %d           |\n", estamina);
																	printf ("|                                                                                               |\n");
																	printf ("|                                                                                               |\n");
																	printf ("'~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~'\n\n");

																	printf ("DIGITE SUA AÇÃO:\n\n1) ATACAR\n2) TOMAR POÇÃO DE VIDA\n3) DESCANÇAR\n\n");
																	scanf ("%d", &acao);

																	if (acao == 1 && estamina > 0)
																	{
																		printf ("\n\n\n\n\n\n\nVOCÊ CAUSOU %d DE DANO\n\n", ataque);
																		vidaprincesa -= ataque;
																		defesa -= ataqueprincesa;
																		estamina --;
																	} else
																		{
																			if (acao == 2)
																			{
																				printf ("\n\n\n\n\n\n\nVOCÊ CORRE DE UM LADO PARA O OUTRO ENQUANTO ENFAIXA O BRAÇO\nCUROU '1' DE VIDA\n\n");
																				defesa ++;
																				estamina --;
																			} else
																				{
																					if (acao == 3)
																					{
																						printf ("\n\n\n\n\n\n\nVOCÊ SE ESCONDE ATRÁS DE UMA ARMÁRIO E RECUPERA '1' DE ESTAMINA\n\n");
																						estamina += 1;
																						defesa -= ataqueprincesa;

																					} else
																						{
																							printf ("\n\n\n\n\n\n\nOPÇÃO INVÁLIDA OU VOCÊ FICOU SEM ESTAMINA\n\n");
																							printf ("DESEJA TENTAR DE NOVO?\n\n1) SIM\n2) NÃO\n\n");
																							scanf ("%d", &morte);

																							if (morte == 1)
																							{

																									continue;
																							} else 
																								{
																									if (morte == 2)
																									{
																										
																										return 0;
																									} else
																										{
																											printf ("\n\n\n\n\n\n\nVAI FICAR ZUANDO, ENTÃO TCHAU DO MEU JOGO\n\n");
																											return 0;

																										}
																								}


																							continue;
																						}
																				}
																			if (estamina == 0)
																			{
																				printf ("VOCÊ FICOU SEM ESTAMINA E UM TIRO PERFUROU SEU CORAÇÃO\n\n");

																						printf (" ___________________________________________________________________________________________\n");
																						printf ("|                                                                                           |\n");     
																						printf ("|                                                                                           |\n");
																						printf ("|                  ████▀░░░░░░░░░░░░░░░░░▀████                                              |\n");
																						printf ("|                  ███│░░░░░░░░░░░░░░░░░░░│███                                              |\n");
																						printf ("|                  ██▌│░░░░░░░░░░░░░░░░░░░│▐██                                              |\n");
																						printf ("|                  ██░└┐░░░░░░░░░░░░░░░░░┌┘░██                                              |\n");
																						printf ("|                  ██░░└┐░░░░░░░░░░░░░░░┌┘░░██                                              |\n");
																						printf ("|                  ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██                VOCÊ                          |\n");
																						printf ("|                  ██▌░│██████▌░░░▐██████│░▐██                                              |\n");
																						printf ("|                  ███░│▐███▀▀░░▄░░▀▀███▌│░███                      MORREU!!!               |\n");
																						printf ("|                  ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██                                              |\n");
																						printf ("|                  ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██                                              |\n");
																						printf ("|                  ████▄─┘██▌░░░░░░░▐██└─▄████                                              |\n");
																						printf ("|                  █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████                  KKKKKKKKK                   |\n");
																						printf ("|                  ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████                                              |\n");
																						printf ("|                  █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████                                              |\n");
																						printf ("|                  ███████▄░░░░░░░░░░░▄███████                                              |\n");
																						printf ("|                                                                                           |\n");
																						printf ("|___________________________________________________________________________________________|\n\n");

																						printf ("PARA TOMAR UM SUPLEMENTO E VOLTAR A BATALHA '1'                PARA FECHAR O JOGO APERTE '0'\n\n");
																						scanf ("%d", &fimgame);

																							if (fimgame == 1)
																							{
																								estamina = 3;
																								printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																								continue;
																							

																							} else {

																									return 0;

																									}


																			} 

																		}
																	

																}


																	if (vidaprincesa <= 0)
																	{
																		printf ("VOCÊ GANHOOOUUUUU!!!!\n\n");






																		printf("APÓS UM FEROZ COMBATE, VOCÊ MATA A PRINCESA E ARRANCA SUA CABEÇA\nVOCÊ, DESTRUIDO DA BATALHA, VÊ AO FUNDO DA SALA, CAIXOTES CHEIOS DE EXPLOSIVOS\nENTÃO OS JOGA EM ENCONTRO A PAREDE E ATIRA SUA LAMPARINA EM CIMA DELES\n\n!!!!!!!!!!  BUUUUMMMM  !!!!!!!!!!\n\nA EXPLOSÃO ESTOURA A PAREDE E TE DÁ ACESSO A FLORESTA, VOCÊ AMARRA A CABEÇA DA PRINCESA EM SEU CAVALO QUE\nAO SENTIR SEU CHEIRO VINDO DA EXPLOSÃO VEIO CORRENDO AO SEU RESGATE\n\nCHEGANDO NO REINO VOCÊ CONTA SUA HISTÓRIA AO REI QUE EXTREMAMENTE IRRITADO COM A MORTE DE SUA FILHA PAGA A VOCÊ O PROMETIDO MAS\nTE EXILA DO REINO DE WHITE SNOW POR AOS OLHOS DO REI, TER DEMORADO DEMAIS E POR ISSO NÃO TER CONSEGUIDO SALVAR A PRINCESA\n\n");

																		printf (",~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~,\n");
																		printf ("|                                                                                           |\n");
																		printf ("|                                                                                           |\n");
																		printf ("|        ▐▀▄       ▄▀▌   ▄▄▄▄▄▄▄                                                            |\n");
																		printf ("|        ▌▒▒▀▄▄▄▄▄▀▒▒▐▄▀▀▒██▒██▒▀▀▄                                                         |\n");
																		printf ("|       ▐▒▒▒▒▀▒▀▒▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▀▄                                                       |\n");
																		printf ("|       ▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▒▒▀▄         PARABÉÉÉÉÉÉNNNNSSS MEU CONSAGRADO!!!!       |\n");
																		printf ("|     ▀█▒▒▒█▌▒▒█▒▒▐█▒▒▒▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌                                                    |\n");
																		printf ("|     ▀▌▒▒▒▒▒▒▀▒▀▒▒▒▒▒▒▀▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐   ▄▄                                               |\n");
																		printf ("|     ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌▄█▒█                                               |\n");
																		printf ("|     ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒█▀     VOCÊ SAIU 'VITORIOSO' DESSA AVENTURA,      |\n");
																		printf ("|     ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▀                                                  |\n");
																		printf ("|     ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌                                                   |\n");
																		printf ("|      ▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐                                                    |\n");
																		printf ("|      ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌             AGORA, ESPERE ANSIOSO PELA             |\n");
																		printf ("|       ▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐                                                     |\n");
																		printf ("|       ▐▄▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▌                                                     |\n");
																		printf ("|         ▀▄▄▀▀▀▀▀▄▄▀▀▀▀▀▀▀▄▄▀▀▀▀▀▄▄▀                        PRÓXIMA ! ! !                  |\n");
																		printf ("|                                                                                           |\n");
																		printf ("|                                                                                           |\n");
																		printf ("|                                                                                           |\n");
																		printf ("|                                                                                           |\n");
																		printf ("'~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~'\n\n");

																		printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
																		scanf ("%d", &fimgame);

																			if (fimgame == 1)
																			{
																			
																				printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																				continue;
																			

																			} else {

																					return 0;

																					}

																	} else 
																		{
																			printf (" ___________________________________________________________________________________________\n");
																			printf ("|                                                                                           |\n");     
																			printf ("|                                                                                           |\n");
																			printf ("|                  ████▀░░░░░░░░░░░░░░░░░▀████                                              |\n");
																			printf ("|                  ███│░░░░░░░░░░░░░░░░░░░│███                                              |\n");
																			printf ("|                  ██▌│░░░░░░░░░░░░░░░░░░░│▐██                                              |\n");
																			printf ("|                  ██░└┐░░░░░░░░░░░░░░░░░┌┘░██                                              |\n");
																			printf ("|                  ██░░└┐░░░░░░░░░░░░░░░┌┘░░██                                              |\n");
																			printf ("|                  ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██                VOCÊ                          |\n");
																			printf ("|                  ██▌░│██████▌░░░▐██████│░▐██                                              |\n");
																			printf ("|                  ███░│▐███▀▀░░▄░░▀▀███▌│░███                      MORREU!!!               |\n");
																			printf ("|                  ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██                                              |\n");
																			printf ("|                  ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██                                              |\n");
																			printf ("|                  ████▄─┘██▌░░░░░░░▐██└─▄████                                              |\n");
																			printf ("|                  █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████                  KKKKKKKKK                   |\n");
																			printf ("|                  ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████                                              |\n");
																			printf ("|                  █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████                                              |\n");
																			printf ("|                  ███████▄░░░░░░░░░░░▄███████                                              |\n");
																			printf ("|                                                                                           |\n");
																			printf ("|___________________________________________________________________________________________|\n\n");

																			printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
																			scanf ("%d", &fimgame);

																				if (fimgame == 1)
																				{
																				
																					printf ("\n\n\\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																					continue;
																				

																				} else {

																						return 0;

																						}


																		}



																} else
																	{
																		printf ("\n\n\n\n\n\n   MEU CONSAGRADO, POR GENTILEZA, SELECIONE SOMENTE UMA DAS OPÇÕES!!!\n\n\n\n\n");

																		printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
																		scanf ("%d", &fimgame);

																		if (fimgame == 1)
																		{
																			
																			printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																			continue;
																			

																		} else 
																			{

																				return 0;
																			}
																	}

															}

													} else 
														{

															printf ("\n\n\n\n\n\n   MEU CONSAGRADO, POR GENTILEZA, SELECIONE SOMENTE UMA DAS OPÇÕES!!!\n\n\n\n\n");

															printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
															scanf ("%d", &fimgame);

															if (fimgame == 1)
															{
																			
																printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																continue;
																				

															} else 
																{

																	return 0;
																}
														}
												}



										/*CATACUMBA1 = 2*/


										} else 
											{	if (catacumba1 == 2)
												{
													printf (" VOCÊ ENTÃO, SABIAMENTE, ESCOLHE O CAMINHO MAIS 'SEGURO' AO SEU VER, E SEGUE EM FRENTE\nVOCÊ SEGUE O CAMINHO ATÉ UM CORREDOR COMPRIDO E ESCURO VOCÊ VÊ, NAS PAREDES A SUA FRENTE, VÁRIOS FUROS ESPALHADOS ESCORRENDO UM LÍQUIDO VERDE DELAS\nVOCÊ, CORAJOSO COMO SEMPRE, SE ARRISCA TENTANDO ATRAVESAR O CORREDOR DESVIANDO DO QUE É LANÇADO PELOS FUROS\nE VOCÊ ...\n\n");

													/* SORTEAR DE 1 A 4 */


													if (morte_dardos == 1)
													{
														printf(" SAIU CORRENDO E DESVIOU DE MANEIRA ESPLÊNDIDA DE TODOS OS DARDOS\nVOCÊ OLHA PARA TRÁS E VÊ O CORREDOR, ANTES ESCURO, AGORA BRILHANDO EM VERDE FLORECENTE DEVIDO AO LÍQUIDO VERDE\n\nVOCÊ SEGUE O CORREDOR E CHEGA A ÁREA DAS CELAS, ONDE VOCÊ VÊ VÁRIAS CRIATURAS, TODAS DEFORMADAS E ENJAULADAS, SENDO ALIMENTADAS POR TUBOS\nVOCÊ SE ESPANTA COM A SITUAÇÃO, O QUE ANTES ERA UMA SIMPLES MISSÃO DE REGATAR UMA PRINCESA, ESTAVA SE TRANSFORMANDO NUMA MISSÃO NÍVEL DRAGÃO\nVOCÊ ATÉ TENTA ROMPER A CERCA QUE SEPARA A SALA DE CELAS, MAS NÃO CONSEGUE E ENTÃO RESOLVE SEGUIR EM DIREÇÃO A SALA EM QUE NA TEORIA SE ENCONTRA A PRINCESA\n\n");

														printf ("CHEGANDO NA PORTA QUE DÁ ACESSO A CELA DA PRINCESA VOCÊ COMEÇA A OUVIR GRUNIDOS ENSURDECEDORES\nA PORTA APARENTA ESTAR EMPERREDA E VOCÊ COMEÇA A FORÇA-LA\nA CADA PANCADA SUA NA PORTA OS GRUNIDOS PARECEM CADA VEZ MAIS ASSUSTADORES\nVOCÊ FINALMENTE, EM UMA PANCADA, DERRUBA A PORTA\n\n");
														printf ("QUANDO A PORTA BATE NO CHÃO VOCÊ VÊ UMA CRIATURA, QUE MAIS PARECIA UM ALIEN DE CLÁSSICOS FILMES DE TERROR, DEVORANDO OS CORPOS DE VÁRIOS GUARDA E CIENTISTAS GOBLINS\nA CRIATURA SE VIRA E VOCÊ VÊ UMA TIARA DE BRILHANTES PENDURADA EM SEU BRAÇO, LOGO VOCÊ JUNTA OS FATOS:\nA PRINCESA FOI ULTILIZADA EM ESPERIENCIAS MUTAGÊNICAS DEVIDO AO ALTO POTẼNCIAL DO SEU SANGUE AZUL, PORÉM, AO QUE PARECE ELAS SAIRAM DE CONTROLE E VOCÊ CHEGOU BEM NA HORA\n");


														printf ("                                                                                       \n");
														printf ("                                                                                       \n");
														printf ("             __.,,------..__                                                           \n");
														printf ("          ,´´   _      _    `.                                                         \n");
														printf ("         /.__, ._  -=- _``    Y                   GGRRRRRRRÃÃÃÃÃÃ                      \n");
														printf ("        (.____.-.`      ´``   )                          !!!!!!!!!!!!!!!!!             \n");
														printf ("         VvvvvvV`.Y,.    _.,-´       ,     ,     ,                                     \n");
														printf ("            Y    ||,   ``          ,/    ,/    ./                                      \n");
														printf ("            |   ,´  ,     `-,.,´_,´/___,´/   ,´/   ,                                   \n");
														printf ("       .,  ,;,,`,-`` ,`  ,  .     `     ` ``` `--,/    ., .,                           \n");
														printf ("     ,´. `.`---´     `, /  , Y -=-    ,´   ,   ,. .`-.,||_|| .,                        \n");
														printf ("    ff| `. `._        /f ,´j j , ,` ,   , f , |=| Y    || ||`||_.,                     \n");
														printf ("    l` |` `.`.``-.,,-´ j  /./ /, , / , / /l |   |=|l   || `´ || ||...                  \n");
														printf ("     `  `   `-._ `-.,-/ ,´ /`´/-/-/-/-``````.`.  ``.|--``--.,``_`` || ,                \n");
														printf ("                ´`-_,´,  ,´  f    ,   /      `._    ``._     ,  `-.``/|         ,      \n");
														printf ("              ,-´´´ _.,-´    l_,-´_,,´          ´`-._ . ``. /|     `.´ |,       |      \n");
														printf ("            ,´,.,-´´           =  ,`-.         ,    `-´._`.V |       | / ., . /j       \n");
														printf ("            |f |               ´._  -.´`.     /|         `.| |        `.`-||-  /       \n");
														printf ("            l` |`                 ``._   ´`--´ j          j´ j          `-`---`        \n");
														printf ("             `  `                     ``,-  ,`/       ,-´´  /                          \n");
														printf ("                                     ,``,__,-´       /,, ,-´                           \n");
														printf ("                                     Vvv´            VVv´                              \n");
														printf ("                                                                                       \n\n");

														printf("A PRINCESA PERCEBE SUA PRESENÇA E VOCÊS COMEÇAM UM COMBATE\n\n");
																
											

														printf ("PRESSIONE QUALQUER BOTÃO E ENTER\n\n\n");
														scanf (" %c", &aux);
			
														printf("COMBATE PRINCESA\n");



														while (defesa > 0 && vidaprincesa > 0)
															{	
																printf ("\n\n\n\n\n\n\n\n");
																printf (",~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~,\n");
																printf ("|                                                                                               |\n");
																printf ("|          VIDA DA PRINCESA : %d                                                                |\n", vidaprincesa);
																printf ("|          ATK DA PRINCESA  : %d                                                                 |\n", ataqueprincesa);
																printf ("|                                                                                               |\n");
																printf ("|                                                                                               |\n");
																printf ("|             __.,,------..__                                                                   |\n");
																printf ("|          ,´´   _      _    `.                                                                 |\n");
																printf ("|         /.__, ._  -=- _``    Y                                                                |\n");
																printf ("|        (.____.-.`      ´``   )                                                                |\n");
																printf ("|         VvvvvvV`.Y,.    _.,-´       ,     ,     ,                                             |\n");
																printf ("|            Y    ||,   ``          ,/    ,/    ./                                              |\n");
																printf ("|            |   ,´  ,     `-,.,´_,´/___,´/   ,´/   ,                                           |\n");
																printf ("|       .,  ,;,,`,-`` ,`  ,  .     `     ` ``` `--,/    ., .,                                   |\n");
																printf ("|     ,´. `.`---´     `, /  , Y -=-    ,´   ,   ,. .`-.,||_|| .,                                |\n");
																printf ("|    ff| `. `._        /f ,´j j , ,` ,   , f , |=| Y    || ||`||_.,                             |\n");	
																printf ("|    l` |` `.`.``-.,,-´ j  /./ /, , / , / /l |   |=|l   || `´ || ||...                          |\n");
																printf ("|     `  `   `-._ `-.,-/ ,´ /`´/-/-/-/-``````.`.  ``.|--``--.,``_`` || ,                        |\n");	
																printf ("|                ´`-_,´,  ,´  f    ,   /      `._    ``._     ,  `-.``/|         ,              |\n");
																printf ("|              ,-´´´ _.,-´    j_,-´_,,´          ´`-._ . ``. /|     `.´ |,       |              |\n");
																printf ("|            ,´,.,-´´           =  ,`-.         ,    `-´._`.V |       | / ., . /j               |\n");
																printf ("|            |f |               ´._  -.´`.     /|         `.| |        `.`-||-  /               |\n");
																printf ("|            l` |`                 ``._   ´`--´ j          j´ j          `-`---`                |\n");
																printf ("|             `  `                     ``,-  ,`/       ,-´´  /                                  |\n");
																printf ("|                                     ,``,__,-´       /,, ,-´                                   |\n");
																printf ("|                                     Vvv´            VVv´                                      |\n");
																printf ("|                                                                        VIDA     : %d           |\n", defesa);
																printf ("|                                                                        ATK      : %d           |\n", ataque);
																printf ("|                                                                        ESTAMINA : %d           |\n", estamina);
																printf ("|                                                                                               |\n");
																printf ("|                                                                                               |\n");
																printf ("'~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~'\n\n");

																printf ("DIGITE SUA AÇÃO:\n\n1) ATACAR\n2) TOMAR POÇÃO DE VIDA\n3) DESCANÇAR\n\n");
																scanf ("%d", &acao);

																if (acao == 1 && estamina > 0)
																{
																	printf ("\n\n\n\n\n\n\nVOCÊ CAUSOU %d DE DANO\n\n", ataque);
																	vidaprincesa -= ataque;
																	defesa -= ataqueprincesa;
																	estamina --;
																} else
																	{
																		if (acao == 2)
																		{
																			printf ("\n\n\n\n\n\n\nVOCÊ CORRE DE UM LADO PARA O OUTRO ENQUANTO ENFAIXA O BRAÇO\nCUROU '1' DE VIDA\n\n");
																			defesa ++;
																			estamina --;
																		} else
																			{
																				if (acao == 3)
																				{
																					printf ("\n\n\n\n\n\n\nVOCÊ SE ESCONDE ATRÁS DE UMA ARMÁRIO E RECUPERA '1' DE ESTAMINA\n\n");
																					estamina += 1;
																					defesa -= ataqueprincesa;

																				} else
																					{
																						printf ("\n\n\n\n\n\n\nOPÇÃO INVÁLIDA OU VOCÊ FICOU SEM ESTAMINA\n\n");
																						printf ("DESEJA TENTAR DE NOVO?\n\n1) SIM\n2) NÃO\n\n");
																						scanf ("%d", &morte);

																						if (morte == 1)
																						{

																								continue;
																						} else 
																							{
																								if (morte == 2)
																								{
																									
																									return 0;
																								} else
																									{
																										printf ("\n\n\n\n\n\n\nVAI FICAR ZUANDO, ENTÃO TCHAU DO MEU JOGO\n\n");
																										return 0;

																									}
																							}


																						continue;
																					}
																			}
																		if (estamina == 0)
																		{
																			printf ("VOCÊ FICOU SEM ESTAMINA E UM TIRO PERFUROU SEU CORAÇÃO\n\n");

																			printf (" ___________________________________________________________________________________________\n");
																			printf ("|                                                                                           |\n");     
																			printf ("|                                                                                           |\n");
																			printf ("|                  ████▀░░░░░░░░░░░░░░░░░▀████                                              |\n");
																			printf ("|                  ███│░░░░░░░░░░░░░░░░░░░│███                                              |\n");
																			printf ("|                  ██▌│░░░░░░░░░░░░░░░░░░░│▐██                                              |\n");
																			printf ("|                  ██░└┐░░░░░░░░░░░░░░░░░┌┘░██                                              |\n");
																			printf ("|                  ██░░└┐░░░░░░░░░░░░░░░┌┘░░██                                              |\n");
																			printf ("|                  ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██                VOCÊ                          |\n");
																			printf ("|                  ██▌░│██████▌░░░▐██████│░▐██                                              |\n");
																			printf ("|                  ███░│▐███▀▀░░▄░░▀▀███▌│░███                      MORREU!!!               |\n");
																			printf ("|                  ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██                                              |\n");
																			printf ("|                  ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██                                              |\n");
																			printf ("|                  ████▄─┘██▌░░░░░░░▐██└─▄████                                              |\n");
																			printf ("|                  █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████                  KKKKKKKKK                   |\n");
																			printf ("|                  ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████                                              |\n");
																			printf ("|                  █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████                                              |\n");
																			printf ("|                  ███████▄░░░░░░░░░░░▄███████                                              |\n");
																			printf ("|                                                                                           |\n");
																			printf ("|___________________________________________________________________________________________|\n\n");

																			printf ("      PARA VOLTAR AO INÍCIO APERTE '1'                PARA FECHAR O JOGO APERTE '0'\n\n");
																			scanf ("%d", &fimgame);

																				if (fimgame == 1)
																				{
																					estamina = 3;
																					defesa = defesainicial;
																					printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																					continue;
																				

																				} else {

																						return 0;

																						}


																		} 

																	}
																

															}


														if (vidaprincesa <= 0)
														{
															printf ("VOCÊ GANHOOOUUUUU!!!!\n\n");



															printf("APÓS UM FEROZ COMBATE, VOCÊ MATA A PRINCESA E ARRANCA SUA CABEÇA\nVOCÊ, DESTRUIDO DA BATALHA VÊ, AO FUNDO DA SALA, CAIXOTES CHEIOS DE EXPLOSIVOS\nENTÃO OS JOGA EM ENCONTRO A PAREDE E ATIRA SUA LAMPARINA EM CIMA DELES\n\n!!!!!!!!!!  BUUUUMMMM  !!!!!!!!!!\n\nA EXPLOSÃO ESTOURA A PAREDE E TE DÁ ACESSO A FLORESTA, VOCÊ AMARRA A CABEÇA DA PRINCESA EM SEU CAVALO QUE\nAO SENTIR SEU CHEIRO VINDO DA EXPLOSÃO VEIO CORRENDO AO SEU RESGATE\n\nCHEGANDO NO REINO VOCÊ CONTA SUA HISTÓRIA AO REI QUE EXTREMAMENTE IRRITADO COM A MORTE DE SUA FILHA PAGA A VOCÊ O PROMETIDO MAS\nTE EXILA DO REINO DE WHITE SNOW POR AOS OLHOS DO REI, TER DEMORADO DEMAIS E POR ISSO NÃO TER CONSEGUIDO SALVAR A PRINCESA\n\n");

															printf (",~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~,\n");
															printf ("|                                                                                           |\n");
															printf ("|                                                                                           |\n");
															printf ("|        ▐▀▄       ▄▀▌   ▄▄▄▄▄▄▄                                                            |\n");
															printf ("|        ▌▒▒▀▄▄▄▄▄▀▒▒▐▄▀▀▒██▒██▒▀▀▄                                                         |\n");
															printf ("|       ▐▒▒▒▒▀▒▀▒▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▀▄                                                       |\n");
															printf ("|       ▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▒▒▀▄         PARABÉÉÉÉÉÉNNNNSSS MEU CONSAGRADO!!!!       |\n");
															printf ("|     ▀█▒▒▒█▌▒▒█▒▒▐█▒▒▒▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌                                                    |\n");
															printf ("|     ▀▌▒▒▒▒▒▒▀▒▀▒▒▒▒▒▒▀▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐   ▄▄                                               |\n");
															printf ("|     ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌▄█▒█                                               |\n");
															printf ("|     ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒█▀     VOCÊ SAIU 'VITORIOSO' DESSA AVENTURA,      |\n");
															printf ("|     ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▀                                                  |\n");
															printf ("|     ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌                                                   |\n");
															printf ("|      ▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐                                                    |\n");
															printf ("|      ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌             AGORA, ESPERE ANSIOSO PELA             |\n");
															printf ("|       ▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐                                                     |\n");
															printf ("|       ▐▄▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▌                                                     |\n");
															printf ("|         ▀▄▄▀▀▀▀▀▄▄▀▀▀▀▀▀▀▄▄▀▀▀▀▀▄▄▀                        PRÓXIMA ! ! !                  |\n");
															printf ("|                                                                                           |\n");
															printf ("|                                                                                           |\n");
															printf ("|                                                                                           |\n");
															printf ("|                                                                                           |\n");
															printf ("'~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~'\n\n");

															printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
															scanf ("%d", &fimgame);

																if (fimgame == 1)
																{
																
																	printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																	continue;
																

																} else {

																		return 0;

																		}

														} else 
															{
																printf (" ___________________________________________________________________________________________\n");
																printf ("|                                                                                           |\n");     
																printf ("|                                                                                           |\n");
																printf ("|                  ████▀░░░░░░░░░░░░░░░░░▀████                                              |\n");
																printf ("|                  ███│░░░░░░░░░░░░░░░░░░░│███                                              |\n");
																printf ("|                  ██▌│░░░░░░░░░░░░░░░░░░░│▐██                                              |\n");
																printf ("|                  ██░└┐░░░░░░░░░░░░░░░░░┌┘░██                                              |\n");
																printf ("|                  ██░░└┐░░░░░░░░░░░░░░░┌┘░░██                                              |\n");
																printf ("|                  ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██                VOCÊ                          |\n");
																printf ("|                  ██▌░│██████▌░░░▐██████│░▐██                                              |\n");
																printf ("|                  ███░│▐███▀▀░░▄░░▀▀███▌│░███                      MORREU!!!               |\n");
																printf ("|                  ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██                                              |\n");
																printf ("|                  ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██                                              |\n");
																printf ("|                  ████▄─┘██▌░░░░░░░▐██└─▄████                                              |\n");
																printf ("|                  █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████                  KKKKKKKKK                   |\n");
																printf ("|                  ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████                                              |\n");
																printf ("|                  █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████                                              |\n");
																printf ("|                  ███████▄░░░░░░░░░░░▄███████                                              |\n");
																printf ("|                                                                                           |\n");
																printf ("|___________________________________________________________________________________________|\n\n");

																printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
																scanf ("%d", &fimgame);

																	if (fimgame == 1)
																	{
																				
																		printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																		continue;
																				

																	} else 
																		{

																			return 0;

																		}

															}		

													

													} else
														{
															printf(" SAIU CORRENDO E DESVIOU DE MANEIRA ESPLÊNDIDA DOS TRÊS PRIMEIROS DARDOS, PORÉM, NO ÚLTIMO,\nVOCÊ NÃO CONSEGUIU SE ABAIXAR A TEMPO E INFELIZMENTE ...\n\n");

															printf (" ___________________________________________________________________________________________\n");
															printf ("|                                                                                           |\n");
															printf ("|                                                                                           |\n");
															printf ("|                  ████▀░░░░░░░░░░░░░░░░░▀████                                              |\n");
															printf ("|                  ███│░░░░░░░░░░░░░░░░░░░│███                                              |\n");
															printf ("|                  ██▌│░░░░░░░░░░░░░░░░░░░│▐██                                              |\n");
															printf ("|                  ██░└┐░░░░░░░░░░░░░░░░░┌┘░██                                              |\n");
															printf ("|                  ██░░└┐░░░░░░░░░░░░░░░┌┘░░██                                              |\n");
															printf ("|                  ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██                VOCÊ                          |\n");
															printf ("|                  ██▌░│██████▌░░░▐██████│░▐██                                              |\n");
															printf ("|                  ███░│▐███▀▀░░▄░░▀▀███▌│░███                      MORREU!!!               |\n");
															printf ("|                  ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██                                              |\n");
															printf ("|                  ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██                                              |\n");
															printf ("|                  ████▄─┘██▌░░░░░░░▐██└─▄████                                              |\n");
															printf ("|                  █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████                  KKKKKKKKK                   |\n");
															printf ("|                  ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████                                              |\n");
															printf ("|                  █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████                                              |\n");
															printf ("|                  ███████▄░░░░░░░░░░░▄███████                                              |\n");
															printf ("|                                                                                           |\n");
															printf ("|___________________________________________________________________________________________|\n\n");

															printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
															scanf ("%d", &fimgame);

																if (fimgame == 1)
																{
																				
																	printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																	continue;
																				

																} else 
																	{

																		return 0;
																	}
														}


												} else 
													{ 
														printf ("\n\n\n\n\n\nMEU CONSAGRADO, POR GENTILEZA, SELECIONE SOMENTE UMA DAS OPÇÕES!!!\n\n\n\n\n");

														printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
														scanf ("%d", &fimgame);

														if (fimgame == 1)
														{
																			
															printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
															continue;
																			

														} else 
															{

																return 0;
															}
													}

											}
									


									/*TP = 2*/

									} else
										{	if (teletransporte == 2)
											{

												printf ("QUANDO A NUVEM SE DESFAZ, VOCÊ SE VÊ SOZINHO EM FRENTE A UMA PORTA DENTRO DA PAREDE DE UMA MONTANHA\nCUIDADOSAMENTE, VOCÊ ABRE A PORTA E SE ESGUEIRA PARA DENTRO DA PASSAGEM ESCURA\n");
												printf ("VOCÊ ASCENDE SUA LAMPARINA ENXERGA DOIS CAMINHOS POSSÍVEIS:\n\n1) ENTRAR NO PRIMEIRO CORREDOR A ESQUERDA\n2) OU SEGUIR PELO CORREDOR CENTRAL\n");
												scanf ("%d", &catacumba1);

												if (catacumba1 == 1) 
												{

													printf("VOCÊ ENTÃO, SABIAMENTE, ESCOLHE O CAMINHO PELA ESQUERDA\nVOCÊ CHEGA EM UMA ESQUINA ONDE SE ENCONTRA UMA PORTA DE MADEIRA TAMPADA POR UM PANO\n");
													printf("AGORA VOCÊ PODE:\n\n1) ENTRAR NA SALA E TENTAR ELIMINAR O QUE ESTIVER LÁ DENTRO ANTES MESMO DE TER A CHANCE DE TE VER\n2) OU SEGUIR STEALTH EM DIREÇÃO AO SAGUÃO QUE EXIXTE A FRENTE E DEIXAR PARA O SEU EU DO FUTURO RESOLVER COMO VOLTAR PARA A SAÍDA\n\n");
													scanf ("%d", &catacumba2);

													if (catacumba2 == 1) 
													{
														printf("VOCÊ LEVANTA O PANO E SE DEPARA COM UMA SALA CHEIA DE EQUIPAMENTOS FUTURISTAS, DIGNOS DE UM CENÁRIO DE STAR TREK\nASSUSTADO AINDA, VOCÊ VÊ AO FUNDO DA SALA UM GOBLIN ANCIÃO MECHENDO NUMA ESPÉCIE DE COMPUTADOR\nPERCEBENDO SUA PRESENÇA O GOBLIN SACA UMA PISTOLA LASER, DÁ UM GRUNIDO E VOCÊS COMEÇAM UM COMBATE\n");
														



														printf("\n\n\n\n\n\n\n\n\nCOMBATE XAMÃ\n");

														ataqueinicial = ataque;
														defesainicial = defesa;

														
														while (defesa > 0 && vidaxama > 0)
														{	
															printf ("\n\n\n\n\n\n\n\n");
															printf (" ___________________________________________________________________________________________\n");
															printf ("|                                                                                           |\n");
															printf ("|                                                                                           |\n");
															printf ("|       VIDA DO XAMÃ : %d                                                                    |\n", vidaxama);
															printf ("|       DANO DA PISTOLA : %d                                                                 |\n", ataquexama);
															printf ("|          DO XAMÃ                                                                          |\n");
															printf ("|                                                                                           |\n");
															printf ("|                                                                                           |\n");
															printf ("|                     o                                                                     |\n");
															printf ("|                 ___/|                                                                     |\n");
															printf ("|                //   |                                                                     |\n");
															printf ("|               //    |                                                                     |\n");
															printf ("|               @---@-3                                                                     |\n");
															printf ("|               ###...'                                                                     |\n");	
															printf ("|                # |___                                                                     |\n");
															printf ("|                 /|  /                                                                     |\n");
															printf ("|                / |                                                                        |\n");
															printf ("|                 /|                                                                        |\n");
															printf ("|                / |                                                     VIDA     : %d       |\n", defesa);
															printf ("|              o/  |o                                                    ATK      : %d       |\n", ataque);
															printf ("|                                                                        ESTAMINA : %d       |\n", estamina);
															printf ("|                                                                                           |\n");
															printf ("|___________________________________________________________________________________________|\n\n");

															printf ("DIGITE SUA AÇÃO:\n\n1) ATACAR\n2) TOMAR POÇÃO DE VIDA\n3) DESCANÇAR\n\n");
															scanf ("%d", &acao);

															if (acao == 1 && estamina > 0)
															{
																printf ("\n\n\n\n\n\n\nVOCÊ CAUSOU %d DE DANO\n\n", ataque);
																vidaxama -= ataque;
																defesa -= ataquexama;
																estamina --;
															} else
																{
																	if (acao == 2)
																	{
																		printf ("\n\n\n\n\n\n\nVOCÊ CORRE DE UM LADO PARA O OUTRO ENQUANTO ENFAIXA O BRAÇO\nCUROU '1' DE VIDA\n\n");
																		defesa ++;
																		estamina --;
																	} else
																		{
																			if (acao == 3)
																			{
																				printf ("\n\n\n\n\n\n\nVOCÊ SE ESCONDE ATRÁS DE UMA ARMÁRIO E RECUPERA '1' DE ESTAMINA\n\n");
																				estamina += 1;
																				defesa -= ataquexama;

																			} else
																				{
																					printf ("\n\n\n\n\n\n\nOPÇÃO INVÁLIDA OU VOCÊ FICOU SEM ESTAMINA\n\n");
																					printf ("DESEJA TENTAR DE NOVO?\n\n1) SIM\n2) NÃO\n\n");
																					scanf ("%d", &morte);

																					if (morte == 1)
																					{

													 									continue;
																					} else 
																						{
																							if (morte == 2)
																							{
																								
																								return 0;
																							} else
																								{
																									printf ("\n\n\n\n\n\n\nVAI FICAR ZUANDO, ENTÃO TCHAU DO MEU JOGO\n\n");
																									return 0;

																								}
																						}


																					continue;
																				}
																		}
																	if (estamina == 0)
																	{
																		printf ("VOCÊ FICOU SEM ESTAMINA E UM TIRO PERFUROU SEU CORAÇÃO\n\n");

																				printf (" ___________________________________________________________________________________________\n");
																				printf ("|                                                                                           |\n");     
																				printf ("|                                                                                           |\n");
																				printf ("|                  ████▀░░░░░░░░░░░░░░░░░▀████                                              |\n");
																				printf ("|                  ███│░░░░░░░░░░░░░░░░░░░│███                                              |\n");
																				printf ("|                  ██▌│░░░░░░░░░░░░░░░░░░░│▐██                                              |\n");
																				printf ("|                  ██░└┐░░░░░░░░░░░░░░░░░┌┘░██                                              |\n");
																				printf ("|                  ██░░└┐░░░░░░░░░░░░░░░┌┘░░██                                              |\n");
																				printf ("|                  ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██                VOCÊ                          |\n");
																				printf ("|                  ██▌░│██████▌░░░▐██████│░▐██                                              |\n");
																				printf ("|                  ███░│▐███▀▀░░▄░░▀▀███▌│░███                      MORREU!!!               |\n");
																				printf ("|                  ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██                                              |\n");
																				printf ("|                  ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██                                              |\n");
																				printf ("|                  ████▄─┘██▌░░░░░░░▐██└─▄████                                              |\n");
																				printf ("|                  █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████                  KKKKKKKKK                   |\n");
																				printf ("|                  ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████                                              |\n");
																				printf ("|                  █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████                                              |\n");
																				printf ("|                  ███████▄░░░░░░░░░░░▄███████                                              |\n");
																				printf ("|                                                                                           |\n");
																				printf ("|___________________________________________________________________________________________|\n\n");

																				printf ("PARA TOMAR UM SUPLEMENTO E VOLTAR A BATALHA '1'                PARA FECHAR O JOGO APERTE '0'\n\n");
																				scanf ("%d", &fimgame);

																					if (fimgame == 1)
																					{
																						estamina = 3;
																						printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																						continue;
																					

																					} else {

																							return 0;

																							}


																	} 

																}
															

														}


															if (vidaxama <= 0)
															{
																printf ("VOCÊ GANHOOOUUUUU!!!!\n\n");
																life += 1;
																ataque = ataqueinicial;
																defesa = defesainicial;

															} 






														if (life >= 1)
														{
															printf ("APÓS UMA ÁRDUA BATALHA, VOCÊ SAÍ VITORIOSO\nCOMO RECOMPENSA, VOCÊ PEGA A PISTOLA LASER E UM TIPO DE CAPACETE QUE ELE ESTAVA USANDO, E SAÍ DA SALA RUMO AO SAGUÃO\n\n");


															if (equipamento == 2)
															{	

																printf ("                                   ######## LEVEL UP! ########\n");
																printf ("                     ***** +%d DE DEFESA ******  ****** +%d DE ATAQUE ******\n\n", equipamento, equipamento);

																ataque += 2;
																defesa += 2;
																printf("AGORA SEU ATAQUE É: %d, E SUA DEFESA É: %d\n\n", ataque, defesa);
															
															}


															printf("CHEGANDO NO SAGUÃO VOCÊ SENTE UM CHEIRO HORRÍVEL VINDO DE UMA PORTA NO FUNDO\nVOCÊ, CURIOSO COMO SEMPRE, RESOLVE DAR UMA ESPIADA PELA FRESTA DA PORTA\nCOLOCANDO SEU OLHO DIREITO NA FENDA VOCÊ VÊ UMA CRIATURA ENORME DEITADA EM CIMA DE UMA PILHA ENORME FEITA COM CORPOS DE AVENTUREIROS\nASSUSTADO, VOCÊ RAPIDAMENTE SE AFASTA DALÍ E SEGUE PROCURANDO A PRINCESA QUE É SEU OBJETIVO PRINCIPAL\n\n");
															printf("NO MEIO DO SAGUÃO EXISTEM VÁRIOS FUROS POR TODO O CHÃO DE ONDE SAEM ESPINHOS MORTAIS\nVOCÊ PODE ARRISCAR IR\n1) PELA ESQUERDE\n2) PELO MEIO\n3) PELA DIREITA\n\n");
															scanf ("%d", &catacumba4);


															if (catacumba4 == 1 || catacumba4 == 2)
															{
																printf ("VOCÊ DÁ UM SALTO MUITO CONFIANTE VISANDO ATRAVESSAR O MAIS RÁPIDO POSSÍVEL, PORÉM, NA METADE DO CAMINHO,\nAINDA NO AR VOCÊ VÊ OS ESPINHOS SUBINDO EM SUA DIREÇÃO\n\n");
																
																printf (" ___________________________________________________________________________________________\n");
																printf ("|                                                                                           |\n");     
																printf ("|                                                                                           |\n");
																printf ("|                  ████▀░░░░░░░░░░░░░░░░░▀████                                              |\n");
																printf ("|                  ███│░░░░░░░░░░░░░░░░░░░│███                                              |\n");
																printf ("|                  ██▌│░░░░░░░░░░░░░░░░░░░│▐██                                              |\n");
																printf ("|                  ██░└┐░░░░░░░░░░░░░░░░░┌┘░██                                              |\n");
																printf ("|                  ██░░└┐░░░░░░░░░░░░░░░┌┘░░██                                              |\n");
																printf ("|                  ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██                VOCÊ                          |\n");
																printf ("|                  ██▌░│██████▌░░░▐██████│░▐██                                              |\n");
																printf ("|                  ███░│▐███▀▀░░▄░░▀▀███▌│░███                      MORREU!!!               |\n");
																printf ("|                  ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██                                              |\n");
																printf ("|                  ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██                                              |\n");
																printf ("|                  ████▄─┘██▌░░░░░░░▐██└─▄████                                              |\n");
																printf ("|                  █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████                  KKKKKKKKK                   |\n");
																printf ("|                  ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████                                              |\n");
																printf ("|                  █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████                                              |\n");
																printf ("|                  ███████▄░░░░░░░░░░░▄███████                                              |\n");
																printf ("|                                                                                           |\n");
																printf ("|___________________________________________________________________________________________|\n\n");

																printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
																scanf ("%d", &fimgame);

																	if (fimgame == 1)
																	{
																	
																		printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																		continue;
																	

																	} else 
																		{

																			return 0;

																		}

															} else
																{
																	if (catacumba4 == 3)
																	{



																		printf("CHEGANDO NA PRÓXIMA SALA, A SUA ESQUERDA, VOCÊ VÊ DIVERSAS TENDAS UMAS EM CIMA DAS OUTRAS, TODAS ELAS SOMENTE COM FÊMEAS E FILHOTES\nVOCÊ PODE:\n\n1) USAR SUA LAMPARINA E ATEAR FOGO NAS TENTAS E NO ACAMPAMENTO\n2) IGNORA-LOS E SEGUIR PARA A PRINCESA\n\n");
																		scanf ("%d", &catacumba3);



																		if (catacumba3 == 1)
																		{
																			printf("COM ÓDIO E REPULSA PELAS CRIATURAS HORRENDAS NA SUA FRENTE, EM UMA ATITUDE DESPRESÍVEL, VOCÊ JOGA SUA LAMPARINA EM CIMA DOS PANOS QUE COMBRIAM AS TENDAS\nVOCÊ DÁ UM SUSPIRO DE ALÍVIO COMO SE TIVESSE LIVRADO O MUNDO DA FOME E DA SEDE ENQUANTO DESPOLUIA A ATMOSFERA\nAO SE VIRAR PARA IR FINALMENTE RESGATAR A PRINCESA, VOCÊ SE DEPARA COM UMA HORDA DE GOBLINS GUERREIROS, QUE ESTAVAM VOLTANDO DA ENTRDA DA CATACUMBA APÓS MATAR TODOS OS OUTROS AVENTUREIROS,\nVENDO A CENA, OS GOBLINS, TOMADOS POR ÓDIO E VINGANÇA, CERCAM VOCÊ E EM CONJUNTO ELES RÁPIDAMENTE TE DESARMAM E TE ESFOLAM ATÉ A MORTE\n\n");
																		
																			printf ("                       VC DEVIA SE ENVERGONHAR DE SUAS ESCOLHAS!\n\n");
																			printf (" ___________________________________________________________________________________________\n");
																			printf ("|                                                                                           |\n");     
																			printf ("|                                                                                           |\n");
																			printf ("|                  ████▀░░░░░░░░░░░░░░░░░▀████                                              |\n");
																			printf ("|                  ███│░░░░░░░░░░░░░░░░░░░│███                                              |\n");
																			printf ("|                  ██▌│░░░░░░░░░░░░░░░░░░░│▐██                                              |\n");
																			printf ("|                  ██░└┐░░░░░░░░░░░░░░░░░┌┘░██                                              |\n");
																			printf ("|                  ██░░└┐░░░░░░░░░░░░░░░┌┘░░██                                              |\n");
																			printf ("|                  ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██                VOCÊ                          |\n");
																			printf ("|                  ██▌░│██████▌░░░▐██████│░▐██                                              |\n");
																			printf ("|                  ███░│▐███▀▀░░▄░░▀▀███▌│░███                      MORREU!!!               |\n");
																			printf ("|                  ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██                                              |\n");
																			printf ("|                  ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██                                              |\n");
																			printf ("|                  ████▄─┘██▌░░░░░░░▐██└─▄████                                              |\n");
																			printf ("|                  █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████                  KKKKKKKKK                   |\n");
																			printf ("|                  ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████                                              |\n");
																			printf ("|                  █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████                                              |\n");
																			printf ("|                  ███████▄░░░░░░░░░░░▄███████                                              |\n");
																			printf ("|                                                                                           |\n");
																			printf ("|___________________________________________________________________________________________|\n\n");

																			printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
																			scanf ("%d", &fimgame);

																				if (fimgame == 1)
																				{
																				
																					printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																					continue;
																				

																				} else 
																					{

																						return 0;
																					}

																					
																		} else 
																			{	if (catacumba3 == 2)
																				{
																					printf("VOCÊ, COM ESPERANÇA DE ENCONTRAR UMA PASSAGEM SECRETA, VAI TATEANDO A PAREDE DE BARRO ATÉ QUE VOCÊ ENCONTRA UMA ALAVANCA CAMUFLADA NA PAREDE\nVOCÊ PUXA ELA E SE ABRE NA PAREDE UMA FENDA QUE DÁ ACESSO PARA UM TIPO DE TÚNEL\nENTRANDO NELE VOCÊ VÊ UM CORREDOR A ESQUERDA QUE LEVA PARA VÁRIAS SALAS FECHADAS POR TELAS E JANELAS DE VIDRO\nDENTRO DE ALGUMAS DAS SALAS TÊM BANCADAS CHEIAS DE TUBOS DE ENSAIO COM UMA ESPŚCIE DE SOLUÇÃO VERDE, E MONITORES MOSTRANDO A MENSAGEM : 'MUTAGÊNICO COMPLETO'\n\n");

																					printf ("                                                                                     \n");
																					printf ("                       ____________________________                                  \n");
																					printf ("                      |]_________________________[|`.                                \n");
																					printf ("                      |!                         !|  ;                               \n");
																					printf ("                      |!    MUTAGÊNICO           !|  |                               \n");
																					printf ("                      |!                         !|  |                               \n");
																					printf ("                      |!          COMPLETO       !|  |                               \n");
																					printf ("                      |!                         !|  |                               \n");
																					printf ("                      |!                         !|  |                               \n");
																					printf ("                      |!                         !|  |                               \n");
																					printf ("                      |!    (/////100//////)     !|  /                               \n");
																					printf ("         ||           |!_________________________!| /                  ||            \n");
																					printf ("         ||           |___________________________|/          ||       ||            \n");
																					printf ("        (__)            ___//_______________//____            ||      (__)           \n");
																					printf ("                       /_________________________/           (__)  ||                \n");
																					printf ("                       ________________________                    ||                \n");
																					printf ("                      /oooo  oooo  oooo  oooo /                   (__)               \n");
																					printf ("                     /ooooooooooooooooooooooo/                                       \n");
																					printf ("                    /ooooooooooooooooooooooo/                                        \n");
																					printf ("                   /_______________________/                                         \n");
																					printf ("                                                                                     \n\n");

																					printf("AINDA APOIADO NA GRADE, TENTANDO VER O QUE MAIS TEM NESSAS SALAS MISTERIOSAS, VOCÊ COMEÇA A OUVIR PASSOS E DECIDE SE APRESSAR E IR DE UMA VEZ RESGATAR A PRINCESA\nCHEGANDO NA PORTA QUE DÁ ACESSO A CELA DA PRINCESA VOCÊ COMEÇA A OUVIR GRUNIDOS ENSURDECEDORES\nA PORTA APARENTA ESTAR EMPERREDA E VOCÊ COMEÇA A FORÇA-LA\nA CADA PANCADA SUA NA PORTA OS GRUNIDOS PARECEM CADA VEZ MAIS ASSUSTADORES\nVOCÊ FINALMENTE, EM UMA PANCADA, DERRUBA A PORTA\n\n");
																					printf("QUANDO A PORTA BATE NO CHÃO VOCÊ VÊ UMA CRIATURA, QUE MAIS PARECIA UM ALIEN DE CLÁSSICOS FILMES DE TERROR, DEVORANDO OS CORPOS DE VÁRIOS GUARDA E CIENTISTAS GOBLINS\nA CRIATURA SE VIRA E VOCÊ VÊ UMA TIARA DE BRILHANTES PENDURADA EM SEU BRAÇO, LOGO VOCÊ JUNTA OS FATOS:\nA PRINCESA FOI ULTILIZADA EM ESPERIENCIAS MUTAGÊNICAS DEVIDO AO ALTO POTẼNCIAL DO SEU SANGUE AZUL, PORÉM, AO QUE PARECE ELAS SAIRAM DE CONTROLE E VOCÊ CHEGOU BEM NA HORA\n");

																					printf ("PRESSIONE QUALQUER BOTÃO E ENTER\n");
																					scanf (" %c", &aux);


																					printf ("                                                                                       \n");
																					printf ("                                                                                       \n");
																					printf ("             __.,,------..__                                                           \n");
																					printf ("          ,´´   _      _    `.                                                         \n");
																					printf ("         /.__, ._  -=- _``    Y                   GGRRRRRRRÃÃÃÃÃÃ                      \n");
																					printf ("        (.____.-.`      ´``   )                          !!!!!!!!!!!!!!!!!             \n");
																					printf ("         VvvvvvV`.Y,.    _.,-´       ,     ,     ,                                     \n");
																					printf ("            Y    ||,   ``          ,/    ,/    ./                                      \n");
																					printf ("            |   ,´  ,     `-,.,´_,´/___,´/   ,´/   ,                                   \n");
																					printf ("       .,  ,;,,`,-`` ,`  ,  .     `     ` ``` `--,/    ., .,                           \n");
																					printf ("     ,´. `.`---´     `, /  , Y -=-    ,´   ,   ,. .`-.,||_|| .,                        \n");
																					printf ("    ff| `. `._        /f ,´j j , ,` ,   , f , |=| Y    || ||`||_.,                     \n");
																					printf ("    l` |` `.`.``-.,,-´ j  /./ /, , / , / /l |   |=|l   || `´ || ||...                  \n");
																					printf ("     `  `   `-._ `-.,-/ ,´ /`´/-/-/-/-``````.`.  ``.|--``--.,``_`` || ,                \n");
																					printf ("                ´`-_,´,  ,´  f    ,   /      `._    ``._     ,  `-.``/|         ,      \n");
																					printf ("              ,-´´´ _.,-´    l_,-´_,,´          ´`-._ . ``. /|     `.´ |,       |      \n");
																					printf ("            ,´,.,-´´           =  ,`-.         ,    `-´._`.V |       | / ., . /j       \n");
																					printf ("            |f |               ´._  -.´`.     /|         `.| |        `.`-||-  /       \n");
																					printf ("            l` |`                 ``._   ´`--´ j          j´ j          `-`---`        \n");
																					printf ("             `  `                     ``,-  ,`/       ,-´´  /                          \n");
																					printf ("                                     ,``,__,-´       /,, ,-´                           \n");
																					printf ("                                     Vvv´            VVv´                              \n");
																					printf ("                                                                                       \n\n");

																					printf("A PRINCESA PERCEBE SUA PRESENÇA E VOCÊS COMEÇAM UM COMBATE\n\n");
																					

																					printf ("PRESSIONE QUALQUER BOTÃO E ENTER\n");
																					scanf (" %c", &aux);
	

																					printf("COMBATE PRINCESA\n");

																					while (defesa > 0 && vidaprincesa > 0)
																					{	
																						printf ("\n\n\n\n\n\n\n\n");
																						printf (",~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~,\n");
																						printf ("|                                                                                               |\n");
																						printf ("|          VIDA DA PRINCESA : %d                                                                |\n", vidaprincesa);
																						printf ("|          ATK DA PRINCESA  : %d                                                                 |\n", ataqueprincesa);
																						printf ("|                                                                                               |\n");
																						printf ("|                                                                                               |\n");
																						printf ("|             __.,,------..__                                                                   |\n");
																						printf ("|          ,´´   _      _    `.                                                                 |\n");
																						printf ("|         /.__, ._  -=- _``    Y                                                                |\n");
																						printf ("|        (.____.-.`      ´``   )                                                                |\n");
																						printf ("|         VvvvvvV`.Y,.    _.,-´       ,     ,     ,                                             |\n");
																						printf ("|            Y    ||,   ``          ,/    ,/    ./                                              |\n");
																						printf ("|            |   ,´  ,     `-,.,´_,´/___,´/   ,´/   ,                                           |\n");
																						printf ("|       .,  ,;,,`,-`` ,`  ,  .     `     ` ``` `--,/    ., .,                                   |\n");
																						printf ("|     ,´. `.`---´     `, /  , Y -=-    ,´   ,   ,. .`-.,||_|| .,                                |\n");
																						printf ("|    ff| `. `._        /f ,´j j , ,` ,   , f , |=| Y    || ||`||_.,                             |\n");	
																						printf ("|    l` |` `.`.``-.,,-´ j  /./ /, , / , / /l |   |=|l   || `´ || ||...                          |\n");
																						printf ("|     `  `   `-._ `-.,-/ ,´ /`´/-/-/-/-``````.`.  ``.|--``--.,``_`` || ,                        |\n");	
																						printf ("|                ´`-_,´,  ,´  f    ,   /      `._    ``._     ,  `-.``/|         ,              |\n");
																						printf ("|              ,-´´´ _.,-´    j_,-´_,,´          ´`-._ . ``. /|     `.´ |,       |              |\n");
																						printf ("|            ,´,.,-´´           =  ,`-.         ,    `-´._`.V |       | / ., . /j               |\n");
																						printf ("|            |f |               ´._  -.´`.     /|         `.| |        `.`-||-  /               |\n");
																						printf ("|            l` |`                 ``._   ´`--´ j          j´ j          `-`---`                |\n");
																						printf ("|             `  `                     ``,-  ,`/       ,-´´  /                                  |\n");
																						printf ("|                                     ,``,__,-´       /,, ,-´                                   |\n");
																						printf ("|                                     Vvv´            VVv´                                      |\n");
																						printf ("|                                                                        VIDA     : %d           |\n", defesa);
																						printf ("|                                                                        ATK      : %d           |\n", ataque);
																						printf ("|                                                                        ESTAMINA : %d           |\n", estamina);
																						printf ("|                                                                                               |\n");
																						printf ("|                                                                                               |\n");
																						printf ("'~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~'\n\n");

																						printf ("DIGITE SUA AÇÃO:\n\n1) ATACAR\n2) TOMAR POÇÃO DE VIDA\n3) DESCANÇAR\n\n");
																						scanf ("%d", &acao);

																						if (acao == 1 && estamina > 0)
																						{
																							printf ("\n\n\n\n\n\n\nVOCÊ CAUSOU %d DE DANO\n\n", ataque);
																							vidaprincesa -= ataque;
																							defesa -= ataqueprincesa;
																							estamina --;
																						} else
																							{
																								if (acao == 2)
																								{
																									printf ("\n\n\n\n\n\n\nVOCÊ CORRE DE UM LADO PARA O OUTRO ENQUANTO ENFAIXA O BRAÇO\nCUROU '1' DE VIDA\n\n");
																									defesa ++;
																									estamina --;
																								} else
																									{
																										if (acao == 3)
																										{
																											printf ("\n\n\n\n\n\n\nVOCÊ SE ESCONDE ATRÁS DE UMA ARMÁRIO E RECUPERA '1' DE ESTAMINA\n\n");
																											estamina += 1;
																											defesa -= ataqueprincesa;

																										} else
																											{
																												printf ("\n\n\n\n\n\n\nOPÇÃO INVÁLIDA OU VOCÊ FICOU SEM ESTAMINA\n\n");
																												printf ("DESEJA TENTAR DE NOVO?\n\n1) SIM\n2) NÃO\n\n");
																												scanf ("%d", &morte);

																												if (morte == 1)
																												{

																														continue;
																												} else 
																													{
																														if (morte == 2)
																														{
																															
																															return 0;
																														} else
																															{
																																printf ("\n\n\n\n\n\n\nVAI FICAR ZUANDO, ENTÃO TCHAU DO MEU JOGO\n\n");
																																return 0;

																															}
																													}


																												continue;
																											}
																									}
																								if (estamina == 0)
																								{
																									printf ("VOCÊ FICOU SEM ESTAMINA E UM TIRO PERFUROU SEU CORAÇÃO\n\n");

																									printf (" ___________________________________________________________________________________________\n");
																									printf ("|                                                                                           |\n");     
																									printf ("|                                                                                           |\n");
																									printf ("|                  ████▀░░░░░░░░░░░░░░░░░▀████                                              |\n");
																									printf ("|                  ███│░░░░░░░░░░░░░░░░░░░│███                                              |\n");
																									printf ("|                  ██▌│░░░░░░░░░░░░░░░░░░░│▐██                                              |\n");
																									printf ("|                  ██░└┐░░░░░░░░░░░░░░░░░┌┘░██                                              |\n");
																									printf ("|                  ██░░└┐░░░░░░░░░░░░░░░┌┘░░██                                              |\n");
																									printf ("|                  ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██                VOCÊ                          |\n");
																									printf ("|                  ██▌░│██████▌░░░▐██████│░▐██                                              |\n");
																									printf ("|                  ███░│▐███▀▀░░▄░░▀▀███▌│░███                      MORREU!!!               |\n");
																									printf ("|                  ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██                                              |\n");
																									printf ("|                  ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██                                              |\n");
																									printf ("|                  ████▄─┘██▌░░░░░░░▐██└─▄████                                              |\n");
																									printf ("|                  █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████                  KKKKKKKKK                   |\n");
																									printf ("|                  ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████                                              |\n");
																									printf ("|                  █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████                                              |\n");
																									printf ("|                  ███████▄░░░░░░░░░░░▄███████                                              |\n");
																									printf ("|                                                                                           |\n");
																									printf ("|___________________________________________________________________________________________|\n\n");

																									printf ("PARA TOMAR UM SUPLEMENTO E VOLTAR A BATALHA '1'                PARA FECHAR O JOGO APERTE '0'\n\n");
																									scanf ("%d", &fimgame);

																										if (fimgame == 1)
																										{
																											estamina = 3;
																											printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																											continue;
																										

																										} else {

																												return 0;

																												}


																								} 

																							}
																						

																					}


																					if (vidaprincesa <= 0)
																					{
																						printf ("VOCÊ GANHOOOUUUUU!!!!\n\n");


																						printf("APÓS UM FEROZ COMBATE, VOCÊ MATA A PRINCESA E ARRANCA SUA CABEÇA\nVOCÊ, DESTRUIDO DA BATALHA, VÊ AO FUNDO DA SALA, CAIXOTES CHEIOS DE ESPLOSIVOS\nENTÃO OS JOGA EM ENCONTRO A PAREDE E ATIRA SUA LAMPARINA EM CIMA DELES\n\n!!!!!!!!!!  BUUUUMMMM  !!!!!!!!!!\n\nA EXPLOSÃO ESTOURA A PAREDE E TE DÁ ACESSO A FLORESTA, VOCÊ AMARRA A CABEÇA DA PRINCESA EM SEU CAVALO QUE\nAO SENTIR SEU CHEIRO VINDO DA EXPLOSÃO VEIO CORRENDO AO SEU RESGATE\n\nCHEGANDO NO REINO VOCÊ CONTA SUA HISTÓRIA AO REI QUE EXTREMAMENTE IRRITADO COM A MORTE DE SUA FILHA PAGA A VOCÊ O PROMETIDO MAS\nTE EXILA DO REINO DE WHITE SNOW POR AOS OLHOS DO REI, TER DEMORADO DEMAIS E POR ISSO NÃO TER CONSEGUIDO SALVAR A PRINCESA\n\n");

																						printf (",~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~,\n");
																						printf ("|                                                                                           |\n");
																						printf ("|                                                                                           |\n");
																						printf ("|        ▐▀▄       ▄▀▌   ▄▄▄▄▄▄▄                                                            |\n");
																						printf ("|        ▌▒▒▀▄▄▄▄▄▀▒▒▐▄▀▀▒██▒██▒▀▀▄                                                         |\n");
																						printf ("|       ▐▒▒▒▒▀▒▀▒▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▀▄                                                       |\n");
																						printf ("|       ▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▒▒▀▄         PARABÉÉÉÉÉÉNNNNSSS MEU CONSAGRADO!!!!       |\n");
																						printf ("|     ▀█▒▒▒█▌▒▒█▒▒▐█▒▒▒▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌                                                    |\n");
																						printf ("|     ▀▌▒▒▒▒▒▒▀▒▀▒▒▒▒▒▒▀▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐   ▄▄                                               |\n");
																						printf ("|     ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌▄█▒█                                               |\n");
																						printf ("|     ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒█▀     VOCÊ SAIU 'VITORIOSO' DESSA AVENTURA,      |\n");
																						printf ("|     ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▀                                                  |\n");
																						printf ("|     ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌                                                   |\n");
																						printf ("|      ▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐                                                    |\n");
																						printf ("|      ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌             AGORA, ESPERE ANSIOSO PELA             |\n");
																						printf ("|       ▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐                                                     |\n");
																						printf ("|       ▐▄▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▌                                                     |\n");
																						printf ("|         ▀▄▄▀▀▀▀▀▄▄▀▀▀▀▀▀▀▄▄▀▀▀▀▀▄▄▀                        PRÓXIMA ! ! !                  |\n");
																						printf ("|                                                                                           |\n");
																						printf ("|                                                                                           |\n");
																						printf ("|                                                                                           |\n");
																						printf ("|                                                                                           |\n");
																						printf ("'~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~'\n\n");

																						printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
																						scanf ("%d", &fimgame);

																							if (fimgame == 1)
																							{
																							
																								printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																								continue;
																							

																							} else {

																									return 0;

																									}

																					} else 
																						{
																							printf (" ___________________________________________________________________________________________\n");
																							printf ("|                                                                                           |\n");     
																							printf ("|                                                                                           |\n");
																							printf ("|                  ████▀░░░░░░░░░░░░░░░░░▀████                                              |\n");
																							printf ("|                  ███│░░░░░░░░░░░░░░░░░░░│███                                              |\n");
																							printf ("|                  ██▌│░░░░░░░░░░░░░░░░░░░│▐██                                              |\n");
																							printf ("|                  ██░└┐░░░░░░░░░░░░░░░░░┌┘░██                                              |\n");
																							printf ("|                  ██░░└┐░░░░░░░░░░░░░░░┌┘░░██                                              |\n");
																							printf ("|                  ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██                VOCÊ                          |\n");
																							printf ("|                  ██▌░│██████▌░░░▐██████│░▐██                                              |\n");
																							printf ("|                  ███░│▐███▀▀░░▄░░▀▀███▌│░███                      MORREU!!!               |\n");
																							printf ("|                  ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██                                              |\n");
																							printf ("|                  ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██                                              |\n");
																							printf ("|                  ████▄─┘██▌░░░░░░░▐██└─▄████                                              |\n");
																							printf ("|                  █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████                  KKKKKKKKK                   |\n");
																							printf ("|                  ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████                                              |\n");
																							printf ("|                  █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████                                              |\n");
																							printf ("|                  ███████▄░░░░░░░░░░░▄███████                                              |\n");
																							printf ("|                                                                                           |\n");
																							printf ("|___________________________________________________________________________________________|\n\n");

																							printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
																							scanf ("%d", &fimgame);

																								if (fimgame == 1)
																								{
																								
																									printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																									continue;
																								

																								} else {

																										return 0;

																										}


																						}	


																				} else
																					{
																						printf ("\n\n\n\n\n\n   MEU CONSAGRADO, POR GENTILEZA, SELECIONE SOMENTE UMA DAS OPÇÕES!!!\n\n\n\n\n");

																						printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
																						scanf ("%d", &fimgame);

																						if (fimgame == 1)
																						{
																								
																							printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																							continue;
																								

																						} else 
																							{

																							return 0;
																							}
																					}

																			}



																	} else
																		{
																			printf ("\n\n\n\n\n\n   MEU CONSAGRADO, POR GENTILEZA, SELECIONE SOMENTE UMA DAS OPÇÕES!!!\n\n\n\n\n");

																			printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
																			scanf ("%d", &fimgame);

																			if (fimgame == 1)
																			{
																								
																				printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																				continue;
																								

																			} else 
																				{

																					return 0;
																				}
																		}






																}

														}




													
													} else 
														{	
															if (catacumba2 == 2) 
															{

																printf("CHEGANDO NO SAGUÃO VOCÊ SENTE UM CHEIRO HORRÍVEL VINDO DE UMA PORTA NO FUNDO\nVOCÊ, CURIOSO COMO SEMPRE, RESOLVE DAR UMA ESPIADA PELA FRESTA DA PORTA\nCOLOCANDO SEU OLHO DIREITO NA FENDA VOCÊ VÊ UMA CRIATURA ENORME DEITADA EM CIMA DE UMA PILHA ENORME FEITA COM CORPOS DE AVENTUREIROS\nASSUSTADO, VOCÊ RAPIDAMENTE SE AFASTA DALÍ E SEGUE RUMO A PRINCESA QUE É SEU OBJETIVO PRINCIPAL\n\n");
																printf("NO MEIO DO SAGUÃO EXISTEM VÁRIOS FUROS POR TODO O CHÃO DE ONDE SAEM ESPINHOS MORTAIS\nVOCÊ PODE ARRISCAR IR\n1) PELA ESQUERDE\n2) PELO MEIO\n3) PELA DIREITA\n\n");
																scanf ("%d", &catacumba4);


																if (catacumba4 == 1 || catacumba4 == 2)
																{
																	printf ("VOCÊ DÁ UM SALTO MUITO CONFIANTE VISANDO ATRAVESSAR O MAIS RÁPIDO POSSÍVEL, PORÉM, NA METADE DO CAMINHO,\nAINDA NO AR VOCÊ VÊ OS ESPINHOS SUBINDO EM SUA DIREÇÃO\n\n");
																	
																	printf (" ___________________________________________________________________________________________\n");
																	printf ("|                                                                                           |\n");     
																	printf ("|                                                                                           |\n");
																	printf ("|                  ████▀░░░░░░░░░░░░░░░░░▀████                                              |\n");
																	printf ("|                  ███│░░░░░░░░░░░░░░░░░░░│███                                              |\n");
																	printf ("|                  ██▌│░░░░░░░░░░░░░░░░░░░│▐██                                              |\n");
																	printf ("|                  ██░└┐░░░░░░░░░░░░░░░░░┌┘░██                                              |\n");
																	printf ("|                  ██░░└┐░░░░░░░░░░░░░░░┌┘░░██                                              |\n");
																	printf ("|                  ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██                VOCÊ                          |\n");
																	printf ("|                  ██▌░│██████▌░░░▐██████│░▐██                                              |\n");
																	printf ("|                  ███░│▐███▀▀░░▄░░▀▀███▌│░███                      MORREU!!!               |\n");
																	printf ("|                  ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██                                              |\n");
																	printf ("|                  ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██                                              |\n");
																	printf ("|                  ████▄─┘██▌░░░░░░░▐██└─▄████                                              |\n");
																	printf ("|                  █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████                  KKKKKKKKK                   |\n");
																	printf ("|                  ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████                                              |\n");
																	printf ("|                  █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████                                              |\n");
																	printf ("|                  ███████▄░░░░░░░░░░░▄███████                                              |\n");
																	printf ("|                                                                                           |\n");
																	printf ("|___________________________________________________________________________________________|\n\n");

																	printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
																	scanf ("%d", &fimgame);

																		if (fimgame == 1)
																		{
																		
																			printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																			continue;
																		

																		} else {

																				return 0;

																				}

																} else
																	{
																		if (catacumba4 == 3)
																		{


																			printf("CHEGANDO NA PRÓXIMA SALA, A SUA ESQUERDA, VOCÊ VÊ DIVERSAS TENDAS UMAS EM CIMA DAS OUTRAS, TODAS ELAS SOMENTE COM FÊMEAS E FILHOTES\nVOCÊ PODE:\n\n1) USAR SUA LAMPARINA E ATEAR FOGO NAS TENTAS E NO ACAMPAMENTO\n2) IGNORA-LOS E SEGUIR PARA A PRINCESA\n\n");
																			scanf ("%d", &catacumba3);

																			if (catacumba3 == 1)
																			{
																				printf("COM ÓDIO E REPULSA PELAS CRIATURAS HORRENDAS NA SUA FRENTE, EM UMA ATITUDE DESPRESÍVEL, VOCÊ JOGA SUA LAMPARINA EM CIMA DOS PANOS QUE COMBRIAM AS TENDAS\nVOCÊ DÁ UM SUSPIRO DE ALÍVIO COMO SE TIVESSE LIVRADO O MUNDO DA FOME E DA SEDE ENQUANTO DESPOLUIA A ATMOSFERA\nAO SE VIRAR PARA IR FINALMENTE RESGATAR A PRINCESA, VOCÊ SE DEPARA COM UMA HORDA DE GOBLINS GUERREIROS, QUE ESTAVAM VOLTANDO DA ENTRDA DA CATACUMBA APÓS MATAR TODOS OS OUTROS AVENTUREIROS,\nVENDO A CENA, OS GOBLINS, TOMADOS POR ÓDIO E VINGANÇA, CERCAM VOCÊ E EM CONJUNTO ELES RÁPIDAMENTE TE DESARMAM E TE ESFOLAM ATÉ A MORTE\n\n");
																	
																				printf ("                       VC DEVIA SE ENVERGONHAR DE SUAS ESCOLHAS!\n\n");
																				printf (" ___________________________________________________________________________________________\n");
																				printf ("|                                                                                           |\n");     
																				printf ("|                                                                                           |\n");
																				printf ("|                  ████▀░░░░░░░░░░░░░░░░░▀████                                              |\n");
																				printf ("|                  ███│░░░░░░░░░░░░░░░░░░░│███                                              |\n");
																				printf ("|                  ██▌│░░░░░░░░░░░░░░░░░░░│▐██                                              |\n");
																				printf ("|                  ██░└┐░░░░░░░░░░░░░░░░░┌┘░██                                              |\n");
																				printf ("|                  ██░░└┐░░░░░░░░░░░░░░░┌┘░░██                                              |\n");
																				printf ("|                  ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██                VOCÊ                          |\n");
																				printf ("|                  ██▌░│██████▌░░░▐██████│░▐██                                              |\n");
																				printf ("|                  ███░│▐███▀▀░░▄░░▀▀███▌│░███                      MORREU!!!               |\n");
																				printf ("|                  ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██                                              |\n");
																				printf ("|                  ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██                                              |\n");
																				printf ("|                  ████▄─┘██▌░░░░░░░▐██└─▄████                                              |\n");
																				printf ("|                  █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████                  KKKKKKKKK                   |\n");
																				printf ("|                  ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████                                              |\n");
																				printf ("|                  █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████                                              |\n");
																				printf ("|                  ███████▄░░░░░░░░░░░▄███████                                              |\n");
																				printf ("|                                                                                           |\n");
																				printf ("|___________________________________________________________________________________________|\n\n");

																				printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
																				scanf ("%d", &fimgame);

																					if (fimgame == 1)
																					{
																					
																						printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																						continue;
																					

																					} else 
																						{

																							return 0;
																						}

																				
																			} else 
																				{	if (catacumba3 == 2)
																					{
																				
																						printf("VOCÊ, COM ESPERANÇA DE ENCONTRAR A PASSAGEM SECRETA, VAI TATEANDO A PAREDE DE BARRO ATÉ QUE VOCÊ ENCONTRA UMA ALAVANCA CAMUFLADA NA PAREDE\nVOCÊ PUXA ELA E SE ABRE NA PAREDE UMA FENDA QUE DÁ ACESSO PARA UM TIPO DE TÚNEL\nENTRANDO NO TÚNEL VOCÊ VÊ UM CORREDOR A ESQUERDA QUE LEVA PARA VÁRIAS SALAS FECHAS POR TELAS E JANELAS DE VIDRO\nDENTRO DE ALGUMAS DAS SALAS TÊM BANCADAS CHEIAS DE TUBOS DE ENSAIO COM UMA ESPŚCIE DE SOLUÇÃO VERDE, E MONITORES MOSTRANDO A MENSAGEM : 'MUTAGÊNICO COMPLETO'\n\n");

																						printf ("                                                                                     \n");
																						printf ("                       ____________________________                                  \n");
																						printf ("                      |]_________________________[|`.                                \n");
																						printf ("                      |!                         !|  ;                               \n");
																						printf ("                      |!    MUTAGÊNICO           !|  |                               \n");
																						printf ("                      |!                         !|  |                               \n");
																						printf ("                      |!          COMPLETO       !|  |                               \n");
																						printf ("                      |!                         !|  |                               \n");
																						printf ("                      |!                         !|  |                               \n");
																						printf ("                      |!                         !|  |                               \n");
																						printf ("                      |!    (/////100//////)     !|  /                               \n");
																						printf ("         ||           |!_________________________!| /                  ||            \n");
																						printf ("         ||           |___________________________|/          ||       ||            \n");
																						printf ("        (__)            ___//_______________//____            ||      (__)           \n");
																			 			printf ("                       /_________________________/           (__)  ||                \n");
																						printf ("                       ________________________                    ||                \n");
																						printf ("                      /oooo  oooo  oooo  oooo /                   (__)               \n");
																						printf ("                     /ooooooooooooooooooooooo/                                       \n");
																						printf ("                    /ooooooooooooooooooooooo/                                        \n");
																						printf ("                   /_______________________/                                         \n");
																						printf ("                                                                                     \n\n");

																						printf("AINDA APOIADO NA GRADE, TENTANDO VER O QUE MAIS TEM NESSAS SALAS MISTERIOSAS, VOCÊ COMEÇA A OUVIR PASSOS E DECIDE SE APRESSAR E IR DE UMA VEZ RESGATAR A PRINCESA\nCHEGANDO NA PORTA QUE DÁ ACESSO A CELA DA PRINCESA VOCÊ COMEÇA A OUVIR GRUNIDOS ENSURDECEDORES\nA PORTA APARENTA ESTAR EMPERREDA E VOCÊ COMEÇA A FORÇA-LA\nA CADA PANCADA SUA NA PORTA OS GRUNIDOS PARECEM CADA VEZ MAIS ASSUSTADORES\nVOCÊ FINALMENTE, EM UMA PANCADA, DERRUBA A PORTA\n\n");
																						printf("QUANDO A PORTA BATE NO CHÃO VOCÊ VÊ UMA CRIATURA, QUE MAIS PARECIA UM ALIEN DE CLÁSSICOS FILMES DE TERROR, DEVORANDO OS CORPOS DE VÁRIOS GUARDA E CIENTISTAS GOBLINS\nA CRIATURA SE VIRA E VOCÊ VÊ UMA TIARA DE BRILHANTES PENDURADA EM SEU BRAÇO, LOGO VOCÊ JUNTA OS FATOS:\nA PRINCESA FOI ULTILIZADA EM ESPERIENCIAS MUTAGÊNICAS DEVIDO AO ALTO POTẼNCIAL DO SEU SANGUE AZUL, PORÉM, AO QUE PARECE ELAS SAIRAM DE CONTROLE E VOCÊ CHEGOU BEM NA HORA\n");

																						printf ("PRESSIONE QUALQUER BOTÃO E ENTER\n");
																						scanf (" %c", &aux);


																						printf ("                                                                                       \n");
																						printf ("                                                                                       \n");
																						printf ("             __.,,------..__                                                           \n");
																						printf ("          ,´´   _      _    `.                                                         \n");
																						printf ("         /.__, ._  -=- _``    Y                   GGRRRRRRRÃÃÃÃÃÃ                      \n");
																						printf ("        (.____.-.`      ´``   )                          !!!!!!!!!!!!!!!!!             \n");
																						printf ("         VvvvvvV`.Y,.    _.,-´       ,     ,     ,                                     \n");
																						printf ("            Y    ||,   ``          ,/    ,/    ./                                      \n");
																						printf ("            |   ,´  ,     `-,.,´_,´/___,´/   ,´/   ,                                   \n");
																						printf ("       .,  ,;,,`,-`` ,`  ,  .     `     ` ``` `--,/    ., .,                           \n");
																						printf ("     ,´. `.`---´     `, /  , Y -=-    ,´   ,   ,. .`-.,||_|| .,                        \n");
																						printf ("    ff| `. `._        /f ,´j j , ,` ,   , f , |=| Y    || ||`||_.,                     \n");
																						printf ("    l` |` `.`.``-.,,-´ j  /./ /, , / , / /l |   |=|l   || `´ || ||...                  \n");
																						printf ("     `  `   `-._ `-.,-/ ,´ /`´/-/-/-/-``````.`.  ``.|--``--.,``_`` || ,                \n");
																						printf ("                ´`-_,´,  ,´  f    ,   /      `._    ``._     ,  `-.``/|         ,      \n");
																						printf ("              ,-´´´ _.,-´    l_,-´_,,´          ´`-._ . ``. /|     `.´ |,       |      \n");
																						printf ("            ,´,.,-´´           =  ,`-.         ,    `-´._`.V |       | / ., . /j       \n");
																						printf ("            |f |               ´._  -.´`.     /|         `.| |        `.`-||-  /       \n");
																						printf ("            l` |`                 ``._   ´`--´ j          j´ j          `-`---`        \n");
																						printf ("             `  `                     ``,-  ,`/       ,-´´  /                          \n");
																						printf ("                                     ,``,__,-´       /,, ,-´                           \n");
																						printf ("                                     Vvv´            VVv´                              \n");
																						printf ("                                                                                       \n\n");

																						printf("A PRINCESA PERCEBE SUA PRESENÇA E VOCÊS COMEÇAM UM COMBATE\n\n");
																						
																						printf ("PRESSIONE QUALQUER BOTÃO E ENTER\n\n\n\n");
																						scanf (" %c", &aux);

																						

																						printf("COMBATE PRINCESA\n");

																						while (defesa > 0 && vidaprincesa > 0)
																						{	
																							printf ("\n\n\n\n\n\n\n\n");
																							printf (",~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~,\n");
																							printf ("|                                                                                               |\n");
																							printf ("|          VIDA DA PRINCESA : %d                                                                |\n", vidaprincesa);
																							printf ("|          ATK DA PRINCESA  : %d                                                                 |\n", ataqueprincesa);
																							printf ("|                                                                                               |\n");
																							printf ("|                                                                                               |\n");
																							printf ("|             __.,,------..__                                                                   |\n");
																							printf ("|          ,´´   _      _    `.                                                                 |\n");
																							printf ("|         /.__, ._  -=- _``    Y                                                                |\n");
																							printf ("|        (.____.-.`      ´``   )                                                                |\n");
																							printf ("|         VvvvvvV`.Y,.    _.,-´       ,     ,     ,                                             |\n");
																							printf ("|            Y    ||,   ``          ,/    ,/    ./                                              |\n");
																							printf ("|            |   ,´  ,     `-,.,´_,´/___,´/   ,´/   ,                                           |\n");
																							printf ("|       .,  ,;,,`,-`` ,`  ,  .     `     ` ``` `--,/    ., .,                                   |\n");
																							printf ("|     ,´. `.`---´     `, /  , Y -=-    ,´   ,   ,. .`-.,||_|| .,                                |\n");
																							printf ("|    ff| `. `._        /f ,´j j , ,` ,   , f , |=| Y    || ||`||_.,                             |\n");	
																							printf ("|    l` |` `.`.``-.,,-´ j  /./ /, , / , / /l |   |=|l   || `´ || ||...                          |\n");
																							printf ("|     `  `   `-._ `-.,-/ ,´ /`´/-/-/-/-``````.`.  ``.|--``--.,``_`` || ,                        |\n");	
																							printf ("|                ´`-_,´,  ,´  f    ,   /      `._    ``._     ,  `-.``/|         ,              |\n");
																							printf ("|              ,-´´´ _.,-´    j_,-´_,,´          ´`-._ . ``. /|     `.´ |,       |              |\n");
																							printf ("|            ,´,.,-´´           =  ,`-.         ,    `-´._`.V |       | / ., . /j               |\n");
																							printf ("|            |f |               ´._  -.´`.     /|         `.| |        `.`-||-  /               |\n");
																							printf ("|            l` |`                 ``._   ´`--´ j          j´ j          `-`---`                |\n");
																							printf ("|             `  `                     ``,-  ,`/       ,-´´  /                                  |\n");
																							printf ("|                                     ,``,__,-´       /,, ,-´                                   |\n");
																							printf ("|                                     Vvv´            VVv´                                      |\n");
																							printf ("|                                                                        VIDA     : %d           |\n", defesa);
																							printf ("|                                                                        ATK      : %d           |\n", ataque);
																							printf ("|                                                                        ESTAMINA : %d           |\n", estamina);
																							printf ("|                                                                                               |\n");
																							printf ("|                                                                                               |\n");
																							printf ("'~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~'\n\n");

																							printf ("DIGITE SUA AÇÃO:\n\n1) ATACAR\n2) TOMAR POÇÃO DE VIDA\n3) DESCANÇAR\n\n");
																							scanf ("%d", &acao);

																							if (acao == 1 && estamina > 0)
																							{
																								printf ("\n\n\n\n\n\n\nVOCÊ CAUSOU %d DE DANO\n\n", ataque);
																								vidaprincesa -= ataque;
																								defesa -= ataqueprincesa;
																								estamina --;
																							} else
																								{
																									if (acao == 2)
																									{
																										printf ("\n\n\n\n\n\n\nVOCÊ CORRE DE UM LADO PARA O OUTRO ENQUANTO ENFAIXA O BRAÇO\nCUROU '1' DE VIDA\n\n");
																										defesa ++;
																										estamina --;
																									} else
																										{
																											if (acao == 3)
																											{
																												printf ("\n\n\n\n\n\n\nVOCÊ SE ESCONDE ATRÁS DE UMA ARMÁRIO E RECUPERA '1' DE ESTAMINA\n\n");
																												estamina += 1;
																												defesa -= ataqueprincesa;

																											} else
																												{
																													printf ("\n\n\n\n\n\n\nOPÇÃO INVÁLIDA OU VOCÊ FICOU SEM ESTAMINA\n\n");
																													printf ("DESEJA TENTAR DE NOVO?\n\n1) SIM\n2) NÃO\n\n");
																													scanf ("%d", &morte);

																													if (morte == 1)
																													{

																															continue;
																													} else 
																														{
																															if (morte == 2)
																															{
																																
																																return 0;
																															} else
																																{
																																	printf ("\n\n\n\n\n\n\nVAI FICAR ZUANDO, ENTÃO TCHAU DO MEU JOGO\n\n");
																																	return 0;

																																}
																														}


																													continue;
																												}
																										}
																									if (estamina == 0)
																									{
																										printf ("VOCÊ FICOU SEM ESTAMINA E UM TIRO PERFUROU SEU CORAÇÃO\n\n");

																												printf (" ___________________________________________________________________________________________\n");
																												printf ("|                                                                                           |\n");     
																												printf ("|                                                                                           |\n");
																												printf ("|                  ████▀░░░░░░░░░░░░░░░░░▀████                                              |\n");
																												printf ("|                  ███│░░░░░░░░░░░░░░░░░░░│███                                              |\n");
																												printf ("|                  ██▌│░░░░░░░░░░░░░░░░░░░│▐██                                              |\n");
																												printf ("|                  ██░└┐░░░░░░░░░░░░░░░░░┌┘░██                                              |\n");
																												printf ("|                  ██░░└┐░░░░░░░░░░░░░░░┌┘░░██                                              |\n");
																												printf ("|                  ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██                VOCÊ                          |\n");
																												printf ("|                  ██▌░│██████▌░░░▐██████│░▐██                                              |\n");
																												printf ("|                  ███░│▐███▀▀░░▄░░▀▀███▌│░███                      MORREU!!!               |\n");
																												printf ("|                  ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██                                              |\n");
																												printf ("|                  ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██                                              |\n");
																												printf ("|                  ████▄─┘██▌░░░░░░░▐██└─▄████                                              |\n");
																												printf ("|                  █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████                  KKKKKKKKK                   |\n");
																												printf ("|                  ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████                                              |\n");
																												printf ("|                  █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████                                              |\n");
																												printf ("|                  ███████▄░░░░░░░░░░░▄███████                                              |\n");
																												printf ("|                                                                                           |\n");
																												printf ("|___________________________________________________________________________________________|\n\n");

																												printf ("PARA TOMAR UM SUPLEMENTO E VOLTAR A BATALHA '1'                PARA FECHAR O JOGO APERTE '0'\n\n");
																												scanf ("%d", &fimgame);

																													if (fimgame == 1)
																													{
																														estamina = 3;
																														printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																														continue;
																													

																													} else {

																															return 0;

																															}


																									} 

																								}
																							

																						}


																						if (vidaprincesa <= 0)
																						{
																							printf ("VOCÊ GANHOOOUUUUU!!!!\n\n");


																							printf("APÓS UM FEROZ COMBATE, VOCÊ MATA A PRINCESA E ARRANCA SUA CABEÇA\nVOCÊ, DESTRUIDO DA BATALHA, VÊ AO FUNDO DA SALA, CAIXOTES CHEIOS DE EXPLOSIVOS\nENTÃO OS JOGA EM ENCONTRO A PAREDE E ATIRA SUA LAMPARINA EM CIMA DELES\n\n!!!!!!!!!!  BUUUUMMMM  !!!!!!!!!!\n\nA EXPLOSÃO ESTOURA A PAREDE E TE DÁ ACESSO A FLORESTA, VOCÊ AMARRA A CABEÇA DA PRINCESA EM SEU CAVALO QUE\nAO SENTIR SEU CHEIRO VINDO DA EXPLOSÃO VEIO CORRENDO AO SEU RESGATE\n\nCHEGANDO NO REINO VOCÊ CONTA SUA HISTÓRIA AO REI QUE EXTREMAMENTE IRRITADO COM A MORTE DE SUA FILHA PAGA A VOCÊ O PROMETIDO MAS\nTE EXILA DO REINO DE WHITE SNOW POR AOS OLHOS DO REI, TER DEMORADO DEMAIS E POR ISSO NÃO TER CONSEGUIDO SALVAR A PRINCESA\n\n");

																							printf (",~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~,\n");
																							printf ("|                                                                                           |\n");
																							printf ("|                                                                                           |\n");
																							printf ("|        ▐▀▄       ▄▀▌   ▄▄▄▄▄▄▄                                                            |\n");
																							printf ("|        ▌▒▒▀▄▄▄▄▄▀▒▒▐▄▀▀▒██▒██▒▀▀▄                                                         |\n");
																							printf ("|       ▐▒▒▒▒▀▒▀▒▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▀▄                                                       |\n");
																							printf ("|       ▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▒▒▀▄         PARABÉÉÉÉÉÉNNNNSSS MEU CONSAGRADO!!!!       |\n");
																							printf ("|     ▀█▒▒▒█▌▒▒█▒▒▐█▒▒▒▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌                                                    |\n");
																							printf ("|     ▀▌▒▒▒▒▒▒▀▒▀▒▒▒▒▒▒▀▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐   ▄▄                                               |\n");
																							printf ("|     ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌▄█▒█                                               |\n");
																							printf ("|     ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒█▀     VOCÊ SAIU 'VITORIOSO' DESSA AVENTURA,      |\n");
																							printf ("|     ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▀                                                  |\n");
																							printf ("|     ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌                                                   |\n");
																							printf ("|      ▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐                                                    |\n");
																							printf ("|      ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌             AGORA, ESPERE ANSIOSO PELA             |\n");
																							printf ("|       ▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐                                                     |\n");
																							printf ("|       ▐▄▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▌                                                     |\n");
																							printf ("|         ▀▄▄▀▀▀▀▀▄▄▀▀▀▀▀▀▀▄▄▀▀▀▀▀▄▄▀                        PRÓXIMA ! ! !                  |\n");
																							printf ("|                                                                                           |\n");
																							printf ("|                                                                                           |\n");
																							printf ("|                                                                                           |\n");
																							printf ("|                                                                                           |\n");
																							printf ("'~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~'\n\n");

																							printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
																							scanf ("%d", &fimgame);

																								if (fimgame == 1)
																								{
																								
																									printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																									continue;
																								

																								} else {

																										return 0;

																										}

																						} else 
																							{
																								printf (" ___________________________________________________________________________________________\n");
																								printf ("|                                                                                           |\n");     
																								printf ("|                                                                                           |\n");
																								printf ("|                  ████▀░░░░░░░░░░░░░░░░░▀████                                              |\n");
																								printf ("|                  ███│░░░░░░░░░░░░░░░░░░░│███                                              |\n");
																								printf ("|                  ██▌│░░░░░░░░░░░░░░░░░░░│▐██                                              |\n");
																								printf ("|                  ██░└┐░░░░░░░░░░░░░░░░░┌┘░██                                              |\n");
																								printf ("|                  ██░░└┐░░░░░░░░░░░░░░░┌┘░░██                                              |\n");
																								printf ("|                  ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██                VOCÊ                          |\n");
																								printf ("|                  ██▌░│██████▌░░░▐██████│░▐██                                              |\n");
																								printf ("|                  ███░│▐███▀▀░░▄░░▀▀███▌│░███                      MORREU!!!               |\n");
																								printf ("|                  ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██                                              |\n");
																								printf ("|                  ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██                                              |\n");
																								printf ("|                  ████▄─┘██▌░░░░░░░▐██└─▄████                                              |\n");
																								printf ("|                  █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████                  KKKKKKKKK                   |\n");
																								printf ("|                  ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████                                              |\n");
																								printf ("|                  █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████                                              |\n");
																								printf ("|                  ███████▄░░░░░░░░░░░▄███████                                              |\n");
																								printf ("|                                                                                           |\n");
																								printf ("|___________________________________________________________________________________________|\n\n");

																								printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
																								scanf ("%d", &fimgame);

																									if (fimgame == 1)
																									{
																									
																										printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																										continue;
																									

																									} else 
																										{

																											return 0;

																										}


																							}



																					} else
																						{
																							printf ("\n\n\n\n\n\n    MEU CONSAGRADO, POR GENTILEZA, SELECIONE SOMENTE UMA DAS OPÇÕES!!!\n\n\n\n\n");

																							printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
																							scanf ("%d", &fimgame);

																							if (fimgame == 1)
																							{
																								
																								printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																								continue;
																								

																							} else 
																								{

																									return 0;
																								}
																						}

																				}

																		} else 
																			{

																				printf ("\n\n\n\n\n\n    MEU CONSAGRADO, POR GENTILEZA, SELECIONE SOMENTE UMA DAS OPÇÕES!!!\n\n\n\n\n");

																				printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
																				scanf ("%d", &fimgame);

																				if (fimgame == 1)
																				{
																								
																					printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																					continue;
																									

																				} else 
																					{

																						return 0;
																					}
																			}
																	}
															}
												

														}
										

												} else 
													{	
														/*CATACUMBA1 = 2*/

														if (catacumba1 == 2)
														{
															printf (" VOCÊ ENTÃO, SABIAMENTE, ESCOLHE O CAMINHO MAIS 'SEGURO' AO SEU VER, E SEGUE EM FRENTE\nVOCÊ SEGUE O CAMINHO ATÉ UM CORREDOR COMPRIDO E ESCURO VOCÊ VÊ, NAS PAREDES A SUA FRENTE, VÁRIOS FUROS ESPALHADOS ESCORRENDO UM LÍQUIDO VERDE DELAS\nVOCÊ, CORAJOSO COMO SEMPRE, SE ARRISCA TENTANDO ATRAVESAR O CORREDOR DESVIANDO DO QUE É LANÇADO PELOS FUROS\nE VOCÊ ...\n\n");

															/* SORTEAR DE 1 A 4 */


															
																printf(" SAIU CORRENDO E DESVIOU DE MANEIRA ESPLÊNDIDA DE TODOS OS DARDOS\nVOCÊ OLHA PARA TRÁS E VÊ O CORREDOR, ANTES ESCURO, AGORA BRILHANDO EM VERDE FLORECENTE DEVIDO AO LÍQUIDO VERDE\n\nVOCÊ SEGUE O CORREDOR E CHEGA A ÁREA DAS CELAS, ONDE VOCÊ VÊ VÁRIAS CRIATURAS, TODAS DEFORMADAS E ENJAULADAS, SENDO ALIMENTADAS POR TUBOS\nVOCÊ SE ESPANTA COM A SITUAÇÃO, O QUE ANTES ERA UMA SIMPLES MISSÃO DE REGATAR UMA PRINCESA, ESTAVA SE TRANSFORMANDO NUMA MISSÃO NÍVEL DRAGÃO\nVOCÊ ATÉ TENTA ROMPER A CERCA QUE SEPARA A SALA DE CELAS, MAS NÃO CONSEGUE E ENTÃO RESOLVE SEGUIR EM DIREÇÃO A SALA EM QUE NA TEORIA SE ENCONTRA A PRINCESA\n\n");

																printf ("CHEGANDO NA PORTA QUE DÁ ACESSO A CELA DA PRINCESA VOCÊ COMEÇA A OUVIR GRUNIDOS ENSURDECEDORES\nA PORTA APARENTA ESTAR EMPERREDA E VOCÊ COMEÇA A FORÇA-LA\nA CADA PANCADA SUA NA PORTA OS GRUNIDOS PARECEM CADA VEZ MAIS ASSUSTADORES\nVOCÊ FINALMENTE, EM UMA PANCADA, DERRUBA A PORTA\n\n");
																printf ("QUANDO A PORTA BATE NO CHÃO VOCÊ VÊ UMA CRIATURA, QUE MAIS PARECIA UM ALIEN DE CLÁSSICOS FILMES DE TERROR, DEVORANDO OS CORPOS DE VÁRIOS GUARDA E CIENTISTAS GOBLINS\nA CRIATURA SE VIRA E VOCÊ VÊ UMA TIARA DE BRILHANTES PENDURADA EM SEU BRAÇO, LOGO VOCÊ JUNTA OS FATOS:\nA PRINCESA FOI ULTILIZADA EM ESPERIENCIAS MUTAGÊNICAS DEVIDO AO ALTO POTẼNCIAL DO SEU SANGUE AZUL, PORÉM, AO QUE PARECE ELAS SAIRAM DE CONTROLE E VOCÊ CHEGOU BEM NA HORA\n");


																printf ("                                                                                       \n");
																printf ("                                                                                       \n");
																printf ("             __.,,------..__                                                           \n");
																printf ("          ,´´   _      _    `.                                                         \n");
																printf ("         /.__, ._  -=- _``    Y                   GGRRRRRRRÃÃÃÃÃÃ                      \n");
																printf ("        (.____.-.`      ´``   )                          !!!!!!!!!!!!!!!!!             \n");
																printf ("         VvvvvvV`.Y,.    _.,-´       ,     ,     ,                                     \n");
																printf ("            Y    ||,   ``          ,/    ,/    ./                                      \n");
																printf ("            |   ,´  ,     `-,.,´_,´/___,´/   ,´/   ,                                   \n");
																printf ("       .,  ,;,,`,-`` ,`  ,  .     `     ` ``` `--,/    ., .,                           \n");
																printf ("     ,´. `.`---´     `, /  , Y -=-    ,´   ,   ,. .`-.,||_|| .,                        \n");
																printf ("    ff| `. `._        /f ,´j j , ,` ,   , f , |=| Y    || ||`||_.,                     \n");
																printf ("    l` |` `.`.``-.,,-´ j  /./ /, , / , / /l |   |=|l   || `´ || ||...                  \n");
																printf ("     `  `   `-._ `-.,-/ ,´ /`´/-/-/-/-``````.`.  ``.|--``--.,``_`` || ,                \n");
																printf ("                ´`-_,´,  ,´  f    ,   /      `._    ``._     ,  `-.``/|         ,      \n");
																printf ("              ,-´´´ _.,-´    l_,-´_,,´          ´`-._ . ``. /|     `.´ |,       |      \n");
																printf ("            ,´,.,-´´           =  ,`-.         ,    `-´._`.V |       | / ., . /j       \n");
																printf ("            |f |               ´._  -.´`.     /|         `.| |        `.`-||-  /       \n");
																printf ("            l` |`                 ``._   ´`--´ j          j´ j          `-`---`        \n");
																printf ("             `  `                     ``,-  ,`/       ,-´´  /                          \n");
																printf ("                                     ,``,__,-´       /,, ,-´                           \n");
																printf ("                                     Vvv´            VVv´                              \n");
																printf ("                                                                                       \n\n");

																printf("A PRINCESA PERCEBE SUA PRESENÇA E VOCÊS COMEÇAM UM COMBATE\n\n");

																printf ("PRESSIONE QUALQUER BOTÃO E ENTER\n\n\n\n");
																scanf (" %c", &aux);

																printf("COMBATE PRINCESA\n");

																defesainicial = defesa;

																while (defesa > 0 && vidaprincesa > 0)
																{


																	printf ("\n\n\n\n\n\n\n\n");
																	printf (",~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~,\n");
																	printf ("|                                                                                               |\n");
																	printf ("|          VIDA DA PRINCESA : %d                                                                |\n", vidaprincesa);
																	printf ("|          ATK DA PRINCESA  : %d                                                                 |\n", ataqueprincesa);
																	printf ("|                                                                                               |\n");
																	printf ("|                                                                                               |\n");
																	printf ("|             __.,,------..__                                                                   |\n");
																	printf ("|          ,´´   _      _    `.                                                                 |\n");
																	printf ("|         /.__, ._  -=- _``    Y                                                                |\n");
																	printf ("|        (.____.-.`      ´``   )                                                                |\n");
																	printf ("|         VvvvvvV`.Y,.    _.,-´       ,     ,     ,                                             |\n");
																	printf ("|            Y    ||,   ``          ,/    ,/    ./                                              |\n");
																	printf ("|            |   ,´  ,     `-,.,´_,´/___,´/   ,´/   ,                                           |\n");
																	printf ("|       .,  ,;,,`,-`` ,`  ,  .     `     ` ``` `--,/    ., .,                                   |\n");
																	printf ("|     ,´. `.`---´     `, /  , Y -=-    ,´   ,   ,. .`-.,||_|| .,                                |\n");
																	printf ("|    ff| `. `._        /f ,´j j , ,` ,   , f , |=| Y    || ||`||_.,                             |\n");	
																	printf ("|    l` |` `.`.``-.,,-´ j  /./ /, , / , / /l |   |=|l   || `´ || ||...                          |\n");
																	printf ("|     `  `   `-._ `-.,-/ ,´ /`´/-/-/-/-``````.`.  ``.|--``--.,``_`` || ,                        |\n");	
																	printf ("|                ´`-_,´,  ,´  f    ,   /      `._    ``._     ,  `-.``/|         ,              |\n");
																	printf ("|              ,-´´´ _.,-´    j_,-´_,,´          ´`-._ . ``. /|     `.´ |,       |              |\n");
																	printf ("|            ,´,.,-´´           =  ,`-.         ,    `-´._`.V |       | / ., . /j               |\n");
																	printf ("|            |f |               ´._  -.´`.     /|         `.| |        `.`-||-  /               |\n");
																	printf ("|            l` |`                 ``._   ´`--´ j          j´ j          `-`---`                |\n");
																	printf ("|             `  `                     ``,-  ,`/       ,-´´  /                                  |\n");
																	printf ("|                                     ,``,__,-´       /,, ,-´                                   |\n");
																	printf ("|                                     Vvv´            VVv´                                      |\n");
																	printf ("|                                                                        VIDA     : %d           |\n", defesa);
																	printf ("|                                                                        ATK      : %d           |\n", ataque);
																	printf ("|                                                                        ESTAMINA : %d           |\n", estamina);
																	printf ("|                                                                                               |\n");
																	printf ("|                                                                                               |\n");
																	printf ("'~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~'\n\n");

																	printf ("DIGITE SUA AÇÃO:\n\n1) ATACAR\n2) TOMAR POÇÃO DE VIDA\n3) DESCANÇAR\n\n");
																	scanf (" %d", &acao);

																	if (acao == 1 && estamina > 0)
																	{
																		printf ("\n\n\n\n\n\n\nVOCÊ CAUSOU %d DE DANO\n\n", ataque);
																		vidaprincesa -= ataque;
																		defesa -= ataqueprincesa;
																		estamina --;
																	} else
																		{
																			if (acao == 2)
																			{
																				printf ("\n\n\n\n\n\n\nVOCÊ CORRE DE UM LADO PARA O OUTRO ENQUANTO ENFAIXA O BRAÇO\nCUROU '1' DE VIDA\n\n");
																				defesa ++;
																				estamina --;
																			} else
																				{
																					if (acao == 3)
																					{
																						printf ("\n\n\n\n\n\n\nVOCÊ SE ESCONDE ATRÁS DE UMA ARMÁRIO E RECUPERA '1' DE ESTAMINA, MAS AO SAIR, VOCÊ LEVA UM TAPA DA PRINCESA\n\n");
																						estamina += 1;
																						defesa -= ataqueprincesa;

																					} else
																						{

																							printf ("\n\n\n\n\n\n\nOPÇÃO INVÁLIDA\n\n");
																							printf ("DESEJA TENTAR DE NOVO?\n\n1) SIM\n2) NÃO\n\n");
																							scanf ("%d", &morte);

																							if (morte == 1)
																							{

																									continue;
																							} else 
																								{
																									if (morte == 2)
																									{
																										
																										return 0;
																									} else
																										{
																											printf ("\n\n\n\n\n\n\nVAI FICAR ZUANDO, ENTÃO TCHAU DO MEU JOGO\n\n");
																											return 0;

																										}
																								}

																						}
																				}

																		}

																			if (estamina == 0)
																			{
																				printf ("VOCÊ FICOU SEM ESTAMINA E UM TIRO PERFUROU SEU CORAÇÃO\n\n");

																				printf (" ___________________________________________________________________________________________\n");
																				printf ("|                                                                                           |\n");     
																				printf ("|                                                                                           |\n");
																				printf ("|                  ████▀░░░░░░░░░░░░░░░░░▀████                                              |\n");
																				printf ("|                  ███│░░░░░░░░░░░░░░░░░░░│███                                              |\n");
																				printf ("|                  ██▌│░░░░░░░░░░░░░░░░░░░│▐██                                              |\n");
																				printf ("|                  ██░└┐░░░░░░░░░░░░░░░░░┌┘░██                                              |\n");
																				printf ("|                  ██░░└┐░░░░░░░░░░░░░░░┌┘░░██                                              |\n");
																				printf ("|                  ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██                VOCÊ                          |\n");
																				printf ("|                  ██▌░│██████▌░░░▐██████│░▐██                                              |\n");
																				printf ("|                  ███░│▐███▀▀░░▄░░▀▀███▌│░███                      MORREU!!!               |\n");
																				printf ("|                  ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██                                              |\n");
																				printf ("|                  ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██                                              |\n");
																				printf ("|                  ████▄─┘██▌░░░░░░░▐██└─▄████                                              |\n");
																				printf ("|                  █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████                  KKKKKKKKK                   |\n");
																				printf ("|                  ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████                                              |\n");
																				printf ("|                  █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████                                              |\n");
																				printf ("|                  ███████▄░░░░░░░░░░░▄███████                                              |\n");
																				printf ("|                                                                                           |\n");
																				printf ("|___________________________________________________________________________________________|\n\n");

																				printf ("PARA TOMAR UM SUPLEMENTO E VOLTAR A BATALHA '1'                PARA FECHAR O JOGO APERTE '0'\n\n");
																				scanf ("%d", &fimgame);

																					if (fimgame == 1)
																					{
																						estamina = 3;
																						defesa = defesainicial;

																						printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																						continue;
																					

																					} else {

																							return 0;

																							}


																			} 

																		
																	

																		


																if (vidaprincesa <= 0)
																{
																	printf ("VOCÊ GANHOOOUUUUU!!!!\n\n\n\n\n\n\n");


																	printf("APÓS UM FEROZ COMBATE, VOCÊ MATA A PRINCESA E ARRANCA SUA CABEÇA\nVOCÊ, DESTRUIDO DA BATALHA VÊ, AO FUNDO DA SALA, CAIXOTES CHEIOS DE EXPLOSIVOS\nENTÃO OS JOGA EM ENCONTRO A PAREDE E ATIRA SUA LAMPARINA EM CIMA DELES\n\n!!!!!!!!!!  BUUUUMMMM  !!!!!!!!!!\n\nA EXPLOSÃO ESTOURA A PAREDE E TE DÁ ACESSO A FLORESTA, VOCÊ AMARRA A CABEÇA DA PRINCESA EM SEU CAVALO QUE\nAO SENTIR SEU CHEIRO VINDO DA EXPLOSÃO VEIO CORRENDO AO SEU RESGATE\n\nCHEGANDO NO REINO VOCÊ CONTA SUA HISTÓRIA AO REI QUE EXTREMAMENTE IRRITADO COM A MORTE DE SUA FILHA PAGA A VOCÊ O PROMETIDO MAS\nTE EXILA DO REINO DE WHITE SNOW POR AOS OLHOS DO REI, TER DEMORADO DEMAIS E POR ISSO NÃO TER CONSEGUIDO SALVAR A PRINCESA\n\n");

																	printf (",~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~,\n");
																	printf ("|                                                                                           |\n");
																	printf ("|                                                                                           |\n");
																	printf ("|        ▐▀▄       ▄▀▌   ▄▄▄▄▄▄▄                                                            |\n");
																	printf ("|        ▌▒▒▀▄▄▄▄▄▀▒▒▐▄▀▀▒██▒██▒▀▀▄                                                         |\n");
																	printf ("|       ▐▒▒▒▒▀▒▀▒▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▀▄                                                       |\n");
																	printf ("|       ▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▒▒▒▒▒▒▒▒▒▒▒▒▀▄         PARABÉÉÉÉÉÉNNNNSSS MEU CONSAGRADO!!!!       |\n");
																	printf ("|     ▀█▒▒▒█▌▒▒█▒▒▐█▒▒▒▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌                                                    |\n");
																	printf ("|     ▀▌▒▒▒▒▒▒▀▒▀▒▒▒▒▒▒▀▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐   ▄▄                                               |\n");
																	printf ("|     ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌▄█▒█                                               |\n");
																	printf ("|     ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▒█▀     VOCÊ SAIU 'VITORIOSO' DESSA AVENTURA,      |\n");
																	printf ("|     ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒█▀                                                  |\n");
																	printf ("|     ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌                                                   |\n");
																	printf ("|      ▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐                                                    |\n");
																	printf ("|      ▐▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▌             AGORA, ESPERE ANSIOSO PELA             |\n");
																	printf ("|       ▌▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▐                                                     |\n");
																	printf ("|       ▐▄▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▄▌                                                     |\n");
																	printf ("|         ▀▄▄▀▀▀▀▀▄▄▀▀▀▀▀▀▀▄▄▀▀▀▀▀▄▄▀                        PRÓXIMA ! ! !                  |\n");
																	printf ("|                                                                                           |\n");
																	printf ("|                                                                                           |\n");
																	printf ("|                                                                                           |\n");
																	printf ("|                                                                                           |\n");
																	printf ("'~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~'\n\n");

																	printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
																	scanf ("%d", &fimgame);

																		if (fimgame == 1)
																		{
																		
																			printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																			continue;
																		

																		} else {

																				return 0;

																				}

																} else 
																	{
																		if (defesa <= 0)
																		{
																			printf (" ___________________________________________________________________________________________\n");
																			printf ("|                                                                                           |\n");     
																			printf ("|                                                                                           |\n");
																			printf ("|                  ████▀░░░░░░░░░░░░░░░░░▀████                                              |\n");
																			printf ("|                  ███│░░░░░░░░░░░░░░░░░░░│███                                              |\n");
																			printf ("|                  ██▌│░░░░░░░░░░░░░░░░░░░│▐██                                              |\n");
																			printf ("|                  ██░└┐░░░░░░░░░░░░░░░░░┌┘░██                                              |\n");
																			printf ("|                  ██░░└┐░░░░░░░░░░░░░░░┌┘░░██                                              |\n");
																			printf ("|                  ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██                VOCÊ                          |\n");
																			printf ("|                  ██▌░│██████▌░░░▐██████│░▐██                                              |\n");
																			printf ("|                  ███░│▐███▀▀░░▄░░▀▀███▌│░███                      MORREU!!!               |\n");
																			printf ("|                  ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██                                              |\n");
																			printf ("|                  ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██                                              |\n");
																			printf ("|                  ████▄─┘██▌░░░░░░░▐██└─▄████                                              |\n");
																			printf ("|                  █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████                  KKKKKKKKK                   |\n");
																			printf ("|                  ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████                                              |\n");
																			printf ("|                  █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████                                              |\n");
																			printf ("|                  ███████▄░░░░░░░░░░░▄███████                                              |\n");
																			printf ("|                                                                                           |\n");
																			printf ("|___________________________________________________________________________________________|\n\n");

																			printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
																			scanf ("%d", &fimgame);

																				if (fimgame == 1)
																				{
																							
																					printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																					continue;

																							

																				} else 
																					{

																						return 0;

																					}

																		}			

																	}		

															

															
																}


														} else 
															{ 
																printf ("\n\n\n\n\n\n   MEU CONSAGRADO, POR GENTILEZA, SELECIONE SOMENTE UMA DAS OPÇÕES!!!\n\n\n\n\n");

																printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
																scanf ("%d", &fimgame);

																if (fimgame == 1)
																{
																					
																	printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
																	continue;
																					

																} else 
																	{

																		return 0;
																	}
															}

													}
						
											


											} else 
												{
													printf ("\n\n\n\n\n\n   MEU CONSAGRADO, POR GENTILEZA, SELECIONE SOMENTE UMA DAS OPÇÕES!!!\n\n\n\n\n");

													printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
													scanf ("%d", &fimgame);

													if (fimgame == 1)
													{
											
														printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
														continue;
																		

													} else 
														{

															return 0;
														}
												}
										}


				} else 
					{						

						printf ("\n\n\n\n\n\n   MEU CONSAGRADO, POR GENTILEZA, SELECIONE SOMENTE UMA DAS OPÇÕES!!!\n\n\n\n\n");

						printf ("   PARA VOLTAR AO INÍCIO APERTE 1                            PARA FECHAR O JOGO APERTE 0\n\n");
						scanf ("%d", &fimgame);

						if (fimgame == 1)
						{
									
						printf ("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
						continue;
									

						} else 
							{

							return 0;
							}
									
					}
			}			


	return 0;

	}

	return 0;
}


/*	
printf ("\n");
scanf ("%", &);
*/




