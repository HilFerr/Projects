#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h> // printf, scanf, puts, NULL

using namespace std;
/** função de inicialização do programa **/

//Estrutura que contém os atributos do carro
struct fCarros {
    string marca;
    string modelo;
    string versao;
    string matricula;
    int ano;
    string proprietarios;
};

string darIdadeMedia(float mediaIdadeCalculada) {
    float anos, meses, dias, diasMeses;

    meses = -1;
    dias =  -1;

    diasMeses = 365.0/12.0;

    anos = mediaIdadeCalculada;
    meses = (mediaIdadeCalculada - anos) * 365.00 / diasMeses;

    float oquefalta = meses * diasMeses;

    cout << anos << endl;
    cout << meses << endl;
    cout << dias << endl;

}

int main() {

    //criar variaveis para as médias
    float media, mediaIdade;
    float idade;

    //Cria 4 carros
    fCarros carro1, carro2, carro3, carro4;

    //Define os atributos do carro 1
    carro1.marca = "Renault";
    carro1.modelo = "Cleo";
    carro1.versao = "2.0";
    carro1.matricula = "S369X0";
    carro1.ano = 1994;
    carro1.proprietarios = "Pedro João";

    //Define os atributos do carro 2
    carro2.marca = "Ferrari";
    carro2.modelo = "TearDrop";
    carro2.versao = "Pa190";
    carro2.matricula = "CH10R7";
    carro2.ano = 2020;
    carro2.proprietarios = "Roberto";

    //Define os atributos do carro 3
    carro3.marca = "Porche";
    carro3.modelo = "RichBaby";
    carro3.versao = "Money90";
    carro3.matricula = "GU1Tl0";
    carro3.ano = 2007;
    carro3.proprietarios = "Travis Scott";

    //Define os atributos do carro 4
    carro4.marca = "Pagani";
    carro4.modelo = "PoorAdult";
    carro4.versao = "More18";
    carro4.matricula = "LC2P0I";
    carro4.ano = 2024;
    carro4.proprietarios = "Luis Santos";


    //Define a idade e a média dos anos e da idade dos 4 carros
    media = float(carro1.ano + carro2.ano + carro3.ano + carro4.ano) / 4;
    idade = (2024 - media);
    mediaIdade = float(idade) / 4;


    //Escreve a média dos anos e da idade dos 4 carros
    cout << "A media dos anos de todos os carros e : " << media << endl << endl;
    cout << "A media da idade dos carros e : " << mediaIdade << endl << endl;
    cout << "A media da idade dos carros e : " << endl << darIdadeMedia(mediaIdade);

    return 0;

}
