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

}

void mostrarAlunos(aluno alunos[],int alunoo){
    for (int i = 0; i < alunoo; i++)
    {
        cout << "nome: " << alunos[i].nome << endl;
        cout << "idade: " << alunos[i].idade << endl;
        cout << "nota: " << alunos[i].nota << endl;
    }
    

}


int main(){

    int alunoo = 0;
    aluno maxAlunos[20];
    int escolha;
    cin >> escolha;


    do
    {

    cout << "1.adicionar alunos" << endl;
    cout << "2.mostrar alunos" << endl;
    

    switch (escolha)
    {
    case 1:
        adicionarAluno(maxAlunos, alunoo);

        break;
    case 2: 
        mostrarAlunos(maxAlunos, alunoo);

        break;
    
    default:
        cout << "escolha outra opcao" << endl;
        break;
    }


} while (escolha != 2);


}
