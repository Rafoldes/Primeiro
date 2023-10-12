#include <iostream>
#include <vector>
#include <list>
  
using namespace std;
int main(){
  std::list<int> xs = {7, 5, 16,8};
  xs.push_back(13); //coloca 13 no começo
  xs.push_front(1); //coloca 1 no final

  for (auto it = xs.begin(); it !=xs.end(); it = std::next(it)){
    cout << it << endl;
  }



}