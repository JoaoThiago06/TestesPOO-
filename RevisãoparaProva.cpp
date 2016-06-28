// Tema 3 - Jogo de Corrida.
#include <iostream>
#include <string>
using namespace std;

// Identificador da fun��o 'imprimir_espa�os'.
void imprimir_espacos(int total);

int main()
{
	// Quantidade Total de Espa�os.
	int total_espacos = 50;
	
	string nome_jogador1, nome_jogador2;
	
	//Armazenar o nome do Jogadores
	cout << "Digite o nome do jogador 1" << endl;
	cin >> nome_jogador1;
	
	cout << "Digite o nome do jogador 2" << endl;
	cin >> nome_jogador2;
	/*
	*	La�o para as rodadas do jogo. 
	*	A cada rodada o carro do jogador anda 1 (um) espa�o.
	*
	*	Rodada		Carro
	*	0			 s
	*   1			  s
	*   2			   s
	*   3			    s
	*	...			...
	*   9			          s
	*
	*/
	int rodada = 0;
	while (rodada < total_espacos)
	{
		cout << nome_jogador1 << nome_jogador2 << endl;
		// Mostra em tela o Letreiro do Jogo.
		cout << "Jogo de Corrida" << endl;
		// Mostra em tela o cartaz de fim de pista. 
		imprimir_espacos(total_espacos);
		cout << "|CHEGADA|" << endl;

		// Jogador 1: 
		cout << nome_jogador1 << endl;
		imprimir_espacos(rodada);
		cout << "  _  " << endl;
		imprimir_espacos(rodada);
		cout << "-o-o>" << endl;
		
		//Faixa dividindo as pistas
		for (int cont = 0; cont < total_espacos; cont++) cout << "_" ;
		cout << endl;
		
		//Jogador 2:
		cout << nome_jogador2 << endl;
		imprimir_espacos(rodada);
		cout << "  _  " << endl;
		imprimir_espacos(rodada);
		cout << "-o-o>" << endl;

		// Limpa a tela para mostrar a pr�xima rodada.
		system("pause");
		system("cls");
		
		// Passa para a pr�xima rodada do la�o.
		rodada++;
	}

	return 0;
}

/*
*	A fun��o serve pra mostrar espa�os em branco na tela.
*	
*	int total : Quantidade de espa�os que ser�o mostrados.
*
*/
void imprimir_espacos(int total)
{
	// Imprime espa�os de 'qntd_atual' at� 'total'.
	for (int quantidade_atual = 0; quantidade_atual < total; quantidade_atual++)
	{
		cout << " ";
	}
}