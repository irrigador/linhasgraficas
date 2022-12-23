#include <iostream>
using namespace std;

int main()
{
    int op;

    cout << "[0] LIMPAR TELA" << endl;
    cout << "[1] ALGORITMO RETA: EQUACAO GERAL" << endl;
    cout << "[2] ALGORITMO RETA: EQUACAO DIFERENCIAL" << endl;
    cout << "[3] ALGORITMO RETA: BRESENHAN" << endl;
    cout << "[4] SAIR";
    cin >> op;

    switch(op)
    {
        case 1:
            cout << "Abrir arquivo referente a questão"<<endl;
        case 2:
            cout << "Abrir arquivo referente a questão"<<endl;
        case 3:
            cout << "Abrir arquivo referente a questão"<<endl;
        case 4:
            cout << "Sair do programa"<<endl;
        default:
            cout << "Opção inválida"<<endl;
    }


    return 0;
}
