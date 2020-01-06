#include <iostream>
#include <cstdlib>
using namespace std;

char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row,column;
 bool draw=false;
char turn='X';
string a,b;
void display()
{
    system("cls");
    cout<<"       *************************************"<<endl;
    cout<<"       *         TIC-TAC-TOE  BY AYUSH     *"<<endl;
    cout<<"       *************************************"<<endl<<endl;
    cout<<endl;
    cout<<"    "<<a<<" [X]"<<endl;
    cout<<"    "<<b<<" [O]"<<endl<<endl;
    cout<<"            "<<"        |         |        "<<endl;
    cout<<"            "<<"  "<<board[0][0]<<"     |   "<<board[0][1]<<"     |   "<<board[0][2]<<"      "<<endl;
    cout<<"            "<<"________|_________|________"<<endl;
    cout<<"            "<<"        |         |        "<<endl;
    cout<<"            "<<"  "<<board[1][0]<<"     |   "<<board[1][1]<<"     |   "<<board[1][2]<<"    "<<endl;
    cout<<"            "<<"________|_________|________"<<endl;
    cout<<"            "<<"        |         |        "<<endl;
    cout<<"            "<<"  "<<board[2][0]<<"     |   "<<board[2][1]<<"     |   "<<board[2][2]<<"      "<<endl;
    cout<<"            "<<"        |         |        "<<endl;
}

void player_turn()
{
   int choice;

   if(turn=='X')
    cout<<a<<" [X] turn :- ";
   if(turn=='O')
    cout<<b<<" [O] turn :- ";

    cin>>choice;

    switch(choice)
    {
        case 1: row=0; column=0; break;
        case 2: row=0; column=1; break;
        case 3: row=0; column=2; break;
        case 4: row=1; column=0; break;
        case 5: row=1; column=1; break;
        case 6: row=1; column=2; break;
        case 7: row=2; column=0; break;
        case 8: row=2; column=1; break;
        case 9: row=2; column=2; break;

        default:
            cout<<"  invalid choice ";
            break;

    }
    if(turn=='X' && board[row][column]!='X' && board[row][column]!='O')
    {
        board[row][column]='X';
        turn='O';
    }
    else if(turn=='O' && board[row][column]!='X' && board[row][column]!='O')
    {
        board[row][column]='O';
        turn='X';
    }
    display();
}
bool gameover()
{

for(int i=0; i<3; i++)

    if(board[i][0]==board[i][1] && board[i][1]==board[i][2] || board[0][i]==board[1][i] && board[1][i]==board[2][i] )
        return false;

        if(board[0][0] == board[1][1] && board[1][1]==board[2][2] || board[0][2] == board[1][1] && board[1][1]==board[2][0])
            return false;

    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
        if ( board[i][j] != 'X' && board[i][j] != 'O')
        return true;

        draw=true;
        return false;

}
int main()
{
    cout<<endl<<"    enter player 1 name :-> ";
    cin>>a;
    cout<<"    enter player 2 name :-> ";
    cin>>b;
    while(gameover())
    {
    display();
    player_turn();
    gameover();
    }
    cout<<endl;
    if(turn == 'X' && draw==false)
        cout<<b<<" wins the game "<<endl;
    else if(turn == 'O' && draw==false)
        cout<<a<<" wins the game "<<endl;
        else
            cout<<" the game is draw between "<<a<<" & "<<b<<endl;
}
