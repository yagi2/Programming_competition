#include<iostream>
#include<string>

using namespace std;

int main(void){
  int a,b;
  string op;

  while(1){
    cin >> a >> op >> b;

    if(op=="?"){
      break;
    }else if(op=="+"){
      cout << a+b << endl;
    }else if(op=="-"){
      cout << a-b << endl;
    }else if(op=="*"){
      cout << a*b << endl;
    }else if(op=="/"){
      cout << a/b << endl;
    }
  }

  return 0;
}
