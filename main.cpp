#include <iostream>
#include "lib.h"

using namespace std;
int main(){
      char a[10][20];
    char b[1][20];
    for (int i = 0; i < 10; ++i) {                        
        for (int j = 0; j < 20; ++j) {
            a[i][j]=' ';
            b[0][j]=' ';
        }
    }

    for (int i = 0; i < 10; ++i) {
        cin >> a[i];
    }

    cin >> b[0];

    if(nome(a,b)==-1){
        cout<< "non presente";
    }else{
        cout << nome(a,b);
    }
  return 0;
}
