#include <iostream>

using namespace std;

struct aluno
{
    string nome;
    int idade;
    float nota;
};

void adicionarAluno(aluno alunos[], int& alunoo){

    cout << "Nome do aluno: ";
    cin >> alunos[alunoo].nome;
    cout << "Idade: ";
    cin >> alunos[alunoo].idade;
    cout << "Nota: ";
    cin >> alunos[alunoo].nota;
    alunoo++;

}

void mostrarAlunos(aluno alunos[],int alunoo){
    for (int i = 0; i < alunoo; i++)
    {
        cout << "nome: " << alunos[i].nome << endl;
        cout << "idade: " << alunos[i].idade << endl;
        cout << "nota: " << alunos[i].nota << endl;
    }
    

}


int main() {
    int alunoo = 0;
    aluno maxAlunos[20];
    int escolha;

    do {
        cout << "Menu de Opções:" << endl;
        cout << "1. Adicionar aluno" << endl;
        cout << "2. Mostrar alunos" << endl;
        cout << "3. Sair" << endl;
        cin >> escolha;

        switch (escolha) {
            case 1:
                adicionarAluno(maxAlunos, alunoo);
                break;
            case 2:
                mostrarAlunos(maxAlunos, alunoo);
                break;
            case 3:
                cout << "Saindo do programa..." << endl;
                break;
            default:
                cout << "Opção inválida! Tente novamente." << endl;
        }
    } while (escolha != 3);

    return 0;
}
