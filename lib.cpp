#include "lib.h"
int nome( char a[10][20], char b[1][20]){
     for(int i= 0; i< 10; i++) {
          if (b[0][0] == a[i][0]) {
             for (int j= 0; j < 20; j++) {
                 if (b[0][j] != a[i][j]) {
                     break;
                 }
                 if(j==19){
                     return i;
                 }
             }
         }
     }
     return -1;
}
