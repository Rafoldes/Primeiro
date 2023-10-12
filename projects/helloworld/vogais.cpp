#include <iostream>
using namespace std;
void by_value(int x) {
  x = x + 1;
}
void by_reference(int &x) {
  x = x + 1;
}

int main(){
  int v = 10; //1

  int *pont = nullptr; //2

  int vet[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; //3

  cout << &v << endl; //4

  cout << v << endl; //5

  cout << &pont << endl; //6

  cout << pont << endl; //7

  cout << vet << endl; //8

  cout << &vet[0] << endl; //9

  cout << vet[0] << endl; //10

  pont = &v; //11

  cout << *pont << endl; //12

  cout << v << endl; //13

  cout << (&v == pont); //14

  *pont = 5; //15

  cout << v << endl; //16

  pont = vet; //17

  cout << pont << endl; //18

  cout << *pont << endl; //19

  pont = &vet[0]; //20

  cout << pont << endl; //21

  cout << pont << endl; //22

  for (int i = 0; i<10;i++){
    if (vet[i]!=0){
    cout << vet[i] << " ";
    } else{
        cout << vet[i] << endl;
    }
  } //23

  for (int i = 0; i<10;i++){
    if (*(vet + i)!=0){
    cout << *(vet + i) << " ";
    } else{
        cout << vet[i] << endl;
    } //24
  cout << endl;
int v2=v;
  by_value(v2); //26
  
  cout << v2 << endl; //27

  by_reference(v); //29
  
  cout << v << endl;


    return 0;

}
}
