#include <iostream>
#include <set>
#include <map>
#include <string>
#include <list>
using namespace std;

//containeres associativos
//FUNÇÕES DE SET
/*int main() {
    std::set<int> s;
    for (int i = 10; i >= 1; i--) {
        s.insert(i);
    }
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << endl;
    }
    cout << endl;
    for (auto &e : s) {
        cout << e << endl;
    }
    std::pair<std::set<int>::iterator, bool> p = s.insert(7);
    cout << *p.first << ": new? " << p.second << endl;
    
    auto e2 = s.find(5);
    if(e2!=s.end()){
        cout << "encontrado: " << *e2 << endl;
    }
    return 0;
}
*/

//FUNÇÕES DE MAP
/*int main(){
    std::map<unsigned, string> alunos;
    alunos.insert({1, "Carlos"});
    alunos.insert({2, "Maria"});
    for (auto it = alunos.begin();it!=alunos.end();it++){
        cout << it->first << ": " << it->second << endl;
    }
    return 0;
}*/

/*int main(){
    std::map<string, string> Dictionary;
    Dictionary.insert({"Apple"," A Maçã"});
    Dictionary.insert(pair<string, string>("Computer","O Computador"));
    Dictionary.insert(pair<string, string>("Banana","A Banana"));
    Dictionary["Tower"] = "A torre";
    for(auto it = Dictionary.begin();it!=Dictionary.end();it++){
        cout<<it->first<<" - "<<it->second<<endl;
    }
    cout << Dictionary.size() << endl;
}*/

//SET 2 
/*int main(){
    std::set<int>s;
    for(int i=10;i>=1;i--){
        s.insert(i);
    }
    s.insert(7);//não faz nada
    for(int i=2;i<=10;i+=2){
        s.erase(i);
    }
    cout<<"(" << s.size() << ")" << endl;
    cout << endl;
    for (int e : s){
        cout<< e << endl;
    }
}*/

//VERIFICAR SE UM ITEM ESTÁ PRESENTE EM UM SET
/*int main(){
    std::set<int> s ={1,3,5,7,9};
    if(s.find(6)!=s.end()){
        cout << "elemento encontrado" << endl;
    } else {
        s.insert(6);
    }
    for (int e : s){
        cout << e << endl;
}
}*/


//SET DE CONJUNTO DE PESSOAS impromidas com base na IDADE
/*struct pessoa{
    string nome;
    int idade;
};
struct compara_pessoa{
    bool operator()(const struct pessoa& a , const struct pessoa &b){
        return a.idade < b.idade; //retorna true se o primeiro elemento é menor que o segundo
    }; //função que define como os elementos são comparados para ordem
};
int main(){
    std::set<struct pessoa,  struct compara_pessoa> pessoas;
    pessoas.insert({"Slomas", 22});
    pessoas.insert({"Slomas", 29});
    pessoas.insert({"Slomas", 21});
    for(pessoa e : pessoas){
        cout << e.nome << " - " << e.idade << endl;//ordem foi dada pela IDADE
    }
}*/


//SET DE CONJUNTO DE PESSOAS imprimidas com base no NOME
/*struct pessoa{
    string nome;
    int idade;
};
struct compara_pessoa{
    bool operator()(const struct pessoa& a , const struct pessoa &b){
        return a.nome < b.nome; //retorna true se o primeiro elemento é menor que o segundo
    }; //função que define como os elementos são comparados para ordem
};
int main(){
    std::set<struct pessoa,  struct compara_pessoa> pessoas;
    pessoas.insert({"Glomas", 22});
    pessoas.insert({"Tomas", 29});
    pessoas.insert({"Vomas", 21});
    pessoas.insert({"Vomas", 27});
    
    for(pessoa e : pessoas){
        cout << e.nome << " - " << e.idade << endl;//ordem foi dada pelo NOME
    }
}*/

//MAP2
/*int main(){
    std::map<int, string> m;
    m.insert(std::pair<int, string>(1234566, "João"));
    m[1223456]= "Maria";
    m[1234564]= "Jasin";
    for (auto it = m.begin();it!=m.end();it++){
        cout<< it->first << ": "<< it->second<<endl;//ordem foi dada pelo INT
    }
    return 0;
}*/

//list
struct TAD{
    int x;
};
int main(){
    std::list<TAD> lista_ref;
    std::list<TAD*> lista_ptr;
    struct TAD t1;
    t1.x = 10;
    lista_ref.push_back(t1);
    TAD* t2 = new TAD();
    t2->x=20;
    lista_ptr.push_back(t2);
    t1.x = 99;
    t2->x= 99;
    cout << lista_ref.front().x << endl;//imprime 10
    cout << lista_ptr.front()->x << endl;//imprime 99
    for(TAD *t : lista_ptr){
        delete t;
    }
    return 0;
}