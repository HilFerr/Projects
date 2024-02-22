#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

int idade[3];
double mediaIdade, mediaAno;

string darIdadeDaMedia (double UmAno, mediaDe1Mes) {
    UmAno = (mediaIdade / mediaIdade);
    mediaDe1Mes = (ano1 / 12) // 30,41
}

struct carro {
    string marca;
    string modelo;
    string versao;
    string matricula;
    int ano;
    string proprietario;
} Audi, Fiat, Mercedes, Tesla;

int main() {

    Audi.marca = "Audi";
    Audi.modelo = "A4";
    Audi.versao = "V4";
    Audi.matricula = "05QN81";
    Audi.ano = 2015;
    Audi.proprietario = "Hilário Ferreira";

    Fiat.marca = "Fiat";
    Fiat.modelo = "Punto";
    Fiat.versao = "V2";
    Fiat.matricula = "96SX69";
    Fiat.ano = 2009;
    Fiat.proprietario = "Doutora Brinquedos";

    Mercedes.marca = "Mercedes";
    Mercedes.modelo = "Benz";
    Mercedes.versao = "V1";
    Mercedes.matricula = "89ZK03";
    Mercedes.ano = 2013;
    Mercedes.proprietario = "Kanye West";

    Tesla.marca = "Tesla";
    Tesla.modelo = "Model X";
    Tesla.versao = "V1";
    Tesla.matricula = "00AA00";
    Tesla.ano = 2020;
    Tesla.proprietario = "Elon Musk";

    // IDADE DE TODOS OS CARROS
    idade[0] = (2024 - Audi.ano);
    idade[1] = (2024 - Fiat.ano);
    idade[2] = (2024 - Mercedes.ano);
    idade[3] = (2024 - Tesla.ano);

    // MEDIAS
    mediaAno = (Audi.ano + Fiat.ano + Mercedes.ano + Tesla.ano) / 4;
    mediaIdade = (idade[0] + idade[1] + idade[2] + idade[3]) / 4;

    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    cout << "A media do ano dos carros e: " << mediaAno << " anos." << endl;
    cout << "A media da idade dos carros e: " << mediaIdade << " anos." << endl;

    return 0;
}
