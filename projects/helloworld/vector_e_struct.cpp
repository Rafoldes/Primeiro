#include <iostream>
#include <vector>
#include <map>

using namespace std;
  /*struct pessoa{
    string nome;
    unsigned int idade;
  };
  

int main(){
  std::vector<pessoa> pessoas;
  pessoas.push_back({"ana", 18}); // coloca o ana, 18 na posição 0 do vector
  pessoas.push_back({"pedro", 19}); // coloca o pedro, 19 na posição 1 do vector
  cout << pessoas[0].nome <<" " << pessoas[0].idade << endl;
  cout << pessoas[1].nome <<" " << pessoas[1].idade << endl;
  pessoas[0]={"jao", 19};
  pessoas[1]={"nome", 80};
  cout << pessoas[0].nome << endl;
  cout << pessoas[1].nome << endl;

  return 0;
}*/
int main(){
std::map<int,string> m;
m[1]= "Jao";
m[2]= "Ma";
m[3]= "An";
m[5]= "Pan";
m[4]= "Mn";
for (auto e: m){
  cout<<e.first<<" "<<e.second<<endl;
}
cout << endl;
for (auto it = m.begin(); it != m.end(); it++){
  cout<<it->first<<" "<<it->second<<endl;
}
}