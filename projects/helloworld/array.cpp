#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

//FUNÇÃO PARA RETORNAR ARRAY
/*std::array<int, 2> f(int x, int y){
    return {x,y};
}
int main(){
    //array <int, 2> xs_cpp = {1,2};
    //array <int, 2> ys_cpp = xs_cpp;
    
    std::array<int,2> xs_cpp = f(1,2);
    std::array<int,2> ys_cpp = xs_cpp;
    cout << xs_cpp.size() << endl;
    cout << xs_cpp[0] << " " << xs_cpp[1] << endl;
    cout << ys_cpp[0] << " " << ys_cpp[1] << endl;


    return 0;

}*/

//FUNÇÃO DE VECTOR
/*int main(){
    std::vector<int> xs = {7,5,16,8};
    xs.pop_back();
    cout << xs.back()<< endl;
    xs.push_back(13);
    xs.push_back(10);
    for (int n : xs){
        cout << n << " ";
    }
    return 0;
}
*/

//VECTOR DE PESSOAS
/*struct Pessoa{
    string nome;
    int idade;
    string cpf;
};

int main(){
    struct std::vector<Pessoa> pessoas;
    pessoas.push_back({"Ana", 18, "1291839921"});
    pessoas.push_back({"Rafael", 19, "12560152614"});
    cout<< pessoas[0].nome << " " << pessoas[0].idade << " " << pessoas[0].cpf <<  endl;
    cout << pessoas[1].nome << " " << pessoas[1].idade << " " << pessoas[1].cpf << endl;
    return 0;
}*/

//FUNÇÃO DE LIST
int main(){
    std::list<int> xs = {7,5,16,8};

    xs.push_back(10);
    xs.push_front(13);

    for(auto it=xs.begin();it!=xs.end();it++){
        cout << *it << endl;
    }
    cout << endl;
    for(auto it = xs.rbegin(); it != xs.rend(); it++){
        cout << *it << endl;
    } 
    cout << endl;
    //para pesquisar um elemento
    std::list<int>::iterator e;
    for (auto it = xs.begin(); it!=xs.end();it++){
        if(*it==5){
            cout<<"5 está presente na lista"<<endl;
            break;
        }
    }
    cout<<endl;
    //pesquisar usando a biblioteca de algoritmos - pode usar essa lógica para imprimir um valor que quiser de dentro da lista
    e = std::find(xs.begin(), xs.end(), 9);
    if(e!=xs.end()){
        cout << "encontrado:" << *e << endl;
    } else{
        cout << "não encontrado" << endl;
    }
    return 0;
}