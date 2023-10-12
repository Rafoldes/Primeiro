#include <iostream>
#include <sstream>
#include <string>

#include "aluno.hpp"
struct Aluno{
    std::string nome;
    std::string matricula;
};

using namespace std;

int main(){
    std::string linha;
    while (getline(cin, linha)){
        if (linha == "sair") break;
    std::string nome;
    std::string matricula;
    istringstream stream(linha);
    stream >> nome >> matricula;//pega o nome e a matricula do aluno, separando por espaços
    struct Aluno aluno = {nome, matricula};
    }
    
    return 0;
}
