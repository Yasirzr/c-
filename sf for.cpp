#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  int nilai;
  cout << "nilai = ";
  cin >> nilai;
  if(nilai> 78) {
    cout<<"Lulus"<<endl;
    }  else if (nilai == 78)
    { cout<<"Lulus KKM"<<endl;
    }  else {
      cout<< "Tidak Lulus" <<endl;
    }
    return 0;
  }