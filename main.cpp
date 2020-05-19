#include <bits/stdc++.h>

using namespace std;

int main()
{
    int QuantCompra, AtrasoPagamento;
    double ValorCompra;
    char TipoCompra;
    cout << "SISTEMA DE PERFIL DE CLIENTE" << endl;
    cout << "--------------------------------" <<endl;
    cout << "INFORME OS DADOS DO ULTIMO ANO" <<endl;
    cout << endl;
    cout << "Quantas compras o cliente fez no ultimo ano? ";
    cin >> QuantCompra;
    cout << "Qual o ticket medio? ";
    cin >> ValorCompra;
    cout << endl;
    cout << "Quantas vezes o cliente atrasou o pagamento? ";
    cin >> AtrasoPagamento;
    cout << "A maioria das compras foi em dinheiro, cartao, ou boleto (D/C/B)? ";
    cin >> TipoCompra;
    cout << endl;
    cout << "Score de volume de compras ="<<endl;
    cout << endl;
    cout << "Score de inadimplencia ="<<endl;
    cout << "Score de forma de pagamento ="<<endl;
    cout << endl;
    cout << "Classificação final =" << endl;


    return 0;
}
