#include <bits/stdc++.h>

using namespace std;

int main()
{
    int QuantCompra, AtrasoPagamento, ScoreVolume, ScoreInadimplencia, ScoreFormaPagamento, ScoreFinal;
    double ValorCompra;
    char TipoCompra, Classificacao;
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
    if (QuantCompra <= 2 && ValorCompra <=3000){
        ScoreVolume = 20;
    }
    else if (QuantCompra > 2 && ValorCompra <= 3000){
        ScoreVolume = 40;
    }
    else if (ValorCompra > 3000){
        ScoreVolume =  60;
    }
    else{
       ScoreVolume= 0 ;
    }
    cout << "Score de volume de compras = " << ScoreVolume << endl ;
    cout << endl;
    if (AtrasoPagamento == 1 || QuantCompra > 0 ){
        ScoreInadimplencia = 15;
    }
    else if (AtrasoPagamento == 0 && QuantCompra > 0){
        ScoreInadimplencia = 30;
    }
    else{
        ScoreInadimplencia = 0;
    }
    cout << "Score de inadimplencia = "<< ScoreInadimplencia << endl;
    if (TipoCompra == 'C' || TipoCompra == 'B'){
        ScoreFormaPagamento = 10;
    }
    else {
        ScoreFormaPagamento = 5;
    }
    cout << "Score de forma de pagamento = "<< ScoreFormaPagamento <<endl;
    cout << endl;
    ScoreFinal = ScoreFormaPagamento + ScoreInadimplencia + ScoreVolume;
    if (ScoreFinal<=25){
        cout << "Classificação final = " << "CLIENTE BRONZE" << endl;
    }
    else if (ScoreFinal>25 && ScoreFinal <= 75){
        cout << "Classificação final = " << "CLIENTE PRATA"<< endl;
    }
    else{
        cout << "Classificação final = " << "CLIENTE OURO"<< endl;
    }


    return 0;
}
