// Tema 3 - Jogo de Corrida.
#include <iostream>
using namespace std;

// Identificador da função 'imprimir_espaços'.
void imprimir_espacos(int total);

int main()
{
	// Quantidade Total de Espaços.
	int total_espacos = 10;

	
	int rodada = 0;
	while (rodada < total_espacos)
	{
		// Mostra em tela o Letreiro do Jogo.
		cout << "Jogo de Corrida" << endl;
		// Mostra em tela o cartaz de fim de pista. 
		
		imprimir_espacos(total_espacos);
		cout << "|CHEGADA|" << endl;
		imprimir_espacos(rodada);
		cout << "  _  " << endl;
		imprimir_espacos(rodada);
		cout << "-o-o>" << endl;

		// Limpa a tela para mostrar a próxima rodada.
		system("cls");
		
		// Passa para a próxima rodada do laço.
		rodada++;
	}

	return 0;
	
}

void imprimir_espacos(int total)
{
	for (int qntd_atual = 0; qntd_atual < total; qntd_atual++)
	{
		cout << " ";
	}
}
