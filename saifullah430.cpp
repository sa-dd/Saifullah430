#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int gri[4][4] = {{0, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0}};

void randomGenerator(){
    int row, col;
    srand(time(0));
    row = ((rand() % 3) + 1);
    col = ((rand() % 3) + 1);
    if(gri[row][col] == 0)  gri[row][col] = ((rand() % 2) + 1);
    
}
void newGame(){
    int gri[4][4] = {{0, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0}};
    int row, col;
    srand(time(0));
    for(int i = 0; i < 2; i++){
        row = (rand() % 4);
        col = (rand() % 4);
        while(gri[row][col] != 0){
            row = (rand() % 4);
            col = (rand() % 4);
        }
        gri[row][col] = ((rand() % 2) + 1);
    }
     for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << gri[i][j];
            if(j == 3){
                cout << endl;
            }
            
        }
     }
}

void move(){
    int i ;
    cin >> i;
}

int main(){
//    randomGenerator();
   while(true){
   newGame();
   move();
   }
   system("pause");
}