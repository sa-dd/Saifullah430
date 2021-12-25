#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

int gri[4][4] = {{0, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0}};

void randomGenerator(){
    int row, col;
    srand(time(0));
    row = (rand() % 4);
            col = (rand() % 4);
            while(gri[row][col] != 0 ){
                row = (rand() % 4);
                col = (rand() % 4);
            }
            gri[row][col] = ((rand() % 2) + 1);
    
}
void shuffle(){
    int row, col;
        srand(time(0));
        for(int i = 0; i < 2; i++){
            row = (rand() % 4);
            col = (rand() % 4);
            while(gri[row][col] != 0 ){
                row = (rand() % 4);
                col = (rand() % 4);
            }
            gri[row][col] = ((rand() % 2) + 1);
        }
}
void newGame(){
    int row, col,count = 9;
    for(int i = 0; i < 7; i++) cout << endl;
     for(int i = 0; i < 9; i++){
         cout << setw(32) << ' ';
         if(i % 2 != 0){
        for(int j = 0; j < 4; j++){
            cout << setw(8) << gri[i-(count-(9-i))][j];
            if(j == 3){
                cout << endl<<endl;
            }
        }
        count--;}
        else cout  <<setw(36)<<"-----------------------------\n\n";
     }
}
void right(){
    int temp = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 3; j >= 0; j--){
            if(j != 3){
            if(gri[i][j] != 0 && gri[i][j+1] == 0){
                temp = gri[i][j];
                gri[i][j] = 0;
                for(int k = j; k < 4; k++){
                    if(k != 3){
                    if(gri[i][k+1] == 0){
                        gri[i][k+1] = temp;
                        gri[i][k] = 0;

                    }
                    }
                }                
            }
            }

        }
    }
}
void down(){
    int temp = 0;
    for(int i = 3; i >= 0; i--){
        for(int j = 0; j < 4; j++){
            if(i != 3){
            if(gri[i][j] != 0 && gri[i+1][j] == 0){
                temp = gri[i][j];
                gri[i][j] = 0;
                for(int k = i; k < 4; k++){
                    if(k != 3){
                    if(gri[k+1][j] == 0){
                        gri[k+1][j] = temp;
                        gri[k][j] = 0;

                    }
                    }
                }                
            }
            }

        }
    }
}
void left(){
     int temp = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j <= 3; j++){
            if(j != 0){
            if(gri[i][j] != 0 && gri[i][j-1] == 0){
                temp = gri[i][j];
                gri[i][j] = 0;
                for(int k = j; k >= 0; k--){
                    if(k != 0){
                    if(gri[i][k-1] == 0){
                        gri[i][k-1] = temp;
                        gri[i][k] = 0;

                    }
                    }
                }                
            }
            }

        }
    }
}
void up(){
     int temp = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j <= 3; j++){
            if(i != 0){
            if(gri[i][j] != 0 && gri[i-1][j] == 0){
                temp = gri[i][j];
                gri[i][j] = 0;
                for(int k = i; k >= 0; k--){
                    if(k != 0){
                    if(gri[k-1][j] == 0){
                        gri[k-1][j] = temp;
                        gri[k][j] = 0;

                    }
                    }
                }                
            }
            }

        }
    }
}
void move(){
    char i ;
    cout << "\n\nSelect Move: \n";
    cin >> i;
    switch (i)
    {
    case 'd':
        right();
        break;
    case 'a':
         left();
         break;
    case 'w':
         up();
         break;
    case 's':
         down();
         break;

    default:
    cout << "pspu";
        break;
    }
}


int main(){
    shuffle();

   while(true){
       cout <<"\n\n";
       cout <<setw(60)<< "Saifullah 430 \n";
       newGame();
       move();
       randomGenerator();
       system("cls");
   }
   system("pause");
}
