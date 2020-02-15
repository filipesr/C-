// Arquivo header
// Fun��es de matrizes

const int tam = 16; // Tamanho da Matriz do Jogo
const int ship = 30; // N�meros de Navios do Jogo

// Nome da fun��o: zeratabela
//						A fun��o preenche com 0 todas as posi��es de uma camada numa matriz
// Par�metros:
//			int mt[2][tam][tam] = matriz vazia, que ser� preenchida com 0
//			int cam = camada da matriz que ser� preenchida com 0
// Retorno da fun��o: void
void zeratabela(int mt[2][tam][tam], int cam);

// Nome da fun��o: geratabela
//						A fun��o preenche com 1 um determinado numero de posi��es
// Par�metros:
//			int mt[2][tam][tam] = matriz, j� inicializado, que ser� preenchida com 1
//			int cam = camada da matriz que ser� preenchida com 1
//			int tipo = define se existe intera��o do usu�rio na escolha da posi��o onde:
// 			 tipo = 1, solicita uma posi��o do usuario
// 			 tipo = 0, gera uma posi��o v�lida aleat�ria
// Retorno da fun��o: void
void geratabela(int mt[2][tam][tam], int cam, int tipo);

// Nome da fun��o: mostratabela
//						A fun��o que mostra, ao usu�rio, os elementos de uma matriz
// Par�metros:
//			int mt[2][tam][tam] = matriz que ser� mostrada
//			int cam = camada da matriz que ser� mostrada
// Retorno da fun��o: void
void mostratabela(int mt[2][tam][tam], int cam);

// Nome da fun��o: checatiro
//						A fun��o verifica se uma posi��o numa matriz �, ou n�o, zero
// Par�metros:
//			int mt[2][tam][tam] = matriz quer ser� verificada a posi��o
//			int col = primeira coordenada, referente � coluna
//			int lin = segunda coordenada, referente a linha
// Retorno da fun��o:
//				Retorna 0 se o valor for igual a zero e -1 se for diferente de zero
int checatiro(int mt[2][tam][tam], int col, int lin);

// Nome da fun��o: tiro
//						A fun��o que adiciona o valor 1 ou -1 na tabela de tiros do jogador
// Par�metros:
//			int mt[2][tam][tam] = matriz de tiros do jogador
//			int mt2[2][tam][tam] = matriz de navios do advers�rio
//			int col = primeira coordenada, referente � coluna
//			int lin = segunda coordenada, referente a linha
//			int tipo = define se existe intera��o do usu�rio na escolha da posi��o onde:
// 			 tipo = 1, solicita uma posi��o do usuario
// 			 tipo = 0, gera uma posi��o v�lida aleat�ria
// Retorno da fun��o:
//				Retorna 1, se o tiro acertar, e 0, se errar
int tiro(int mt[2][tam][tam], int mt2[2][tam][tam], int tipo);

