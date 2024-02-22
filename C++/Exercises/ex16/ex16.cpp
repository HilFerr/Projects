#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

struct fAluno {
    int numeroAluno;
    string nomeAluno;
    int anosAluno;
} fichaAlunos, fichaAlunos2;

struct fNota {
    string disciplina;
    string modulo;
    int notaModulo;
};

int main() {

    fichaAlunos.numeroAluno = 14467;
    fichaAlunos.nomeAluno = "Hilario Ferreira";
    fichaAlunos.anosAluno = 15;

    cout << "Aluno: " << fichaAlunos.nomeAluno;
    cout << ", tem o numero: " << fichaAlunos.numeroAluno;
    cout << " e tem " << fichaAlunos.anosAluno;


    fichaAlunos2.numeroAluno = 16000;
    fichaAlunos2.nomeAluno = "Luis Santos";
    fichaAlunos2.anosAluno = 47;

    cout << "\n\nProfessor: " << fichaAlunos2.nomeAluno;
    cout << ", tem o numero: " << fichaAlunos2.numeroAluno;
    cout << " e tem " << fichaAlunos2.anosAluno;

    fNota notaAluno1Disciplina1;
    notaAluno1Disciplina1.disciplina = "Programacao";
    notaAluno1Disciplina1.modulo = "C++ Iniciacao";
    notaAluno1Disciplina1.notaModulo = 0;

    return 0;
}
