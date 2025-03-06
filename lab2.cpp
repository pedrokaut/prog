#include<iostream>
using namespace std;
struct grupo{
    char nome[20];
    int idade;
    float media;
};
int main(){
    grupo alunos[3];
    int i;
    for(i=1;i<4;i++){
    cout << "digite o nome do aluno: "<< i << endl;
    cin >> alunos[i].nome;
    cout << "digite a idade do aluno: "<< i << endl;
    cin >> alunos[i].idade;
    cout << "digite a media do aluno: "<< i << endl;
    cin >> alunos[i].media;
    cout << "nome: " << alunos[i].nome << endl;
    cout << "idade: " << alunos[i].idade << endl;
    cout << "media: " << alunos[i].media << endl;
    }
    


return 0;
}