#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<dos.h>
#include<time.h>
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
COORD coord={0,0};
void gotoxy(int x,int y);//Goto x y function
void play_turn(int column, int row, int hit,int arr[column][row],int turn);//Assigning value to array that player entered
void board (int column, int row, int x, int y,int k[column][row],int first);//Board of Game (Updated board every time user enter number)
char win_checker (int row, int column, int arr[row][column],int turn,int mode);//Check all the possible ways to win

int main ()
{
    /*Some Variables (Integers and Characters are introduce) You will know where they are used with program*/
    int x=25, y=2,size_of_row,size_of_column,i,j, array_values,mode, max_tries,hit,turn,streak1=0,streak2=0,streak3=0,draw=0,first;
    char n='Y',check;
    intro();
    srand(time(NULL));//Seed value
    system("cls");
    while(n=='Y'||n=='y'){//Condition to check weather player wants to play again or not!!! its default value is Yes
    gotoxy(x,y);
    delay(50);
    printf("In which mode you want to paly ?");
    gotoxy(x,y+1);
    delay(50);
    printf("Enter ");
    gotoxy(x,y+2);
    delay(50);
    printf("1 : Player vs Player");
    gotoxy(x,y+3);
    delay(50);
    printf("2 : Player vs Computer");
    gotoxy(x,y+4);
    delay(50);
    printf("Whats your mood ? : ");
    scanf("%d",&mode);//Player will select the Game mode
    gotoxy(x,y+5);
    delay(50);
    printf("Enter the size of Matrix : ");
    scanf("%d",&size_of_row);//Player wull enter the size of Matrix
    size_of_column=size_of_row;
    int k[size_of_row][size_of_column];//Initialization of 2-D array
    max_tries=size_of_column*size_of_row;//Maximum tries both players have
    array_values=1;//Assigning values to Array
    for (i=0;i<size_of_column;i++){
            for (j=0;j<size_of_row;j++){
                k[i][j] = array_values;
                array_values++;
            }
    }
    first=1;//This variable is used to restrict board animation to first time it is called
    system("cls");
    gotoxy(35,10);
    delay(500);
    printf(".");
    delay(500);
    printf(".");
    delay(500);
    printf(".");
    printf("Loading");
    delay(1000);
    printf(".");
    delay(500);
    printf(".");
    delay(500);
    system("cls");
    gotoxy(27,10);
    printf(".");
    delay(500);
    printf(".");
    delay(500);
    printf(".");
    delay(500);
    printf("We are making Board for You");
    delay(500);
    printf(".");
    delay(500);
    printf(".");
    delay(500);
    printf(".");
    delay(500);
    system("cls");
    board(size_of_column,size_of_row,x,y,k,first);//Creating Board
    first=2;//Now its value is 2. Animation will not appear next time...
    for(turn=1; turn <= max_tries; turn++){//MAin work
        if(turn%2==1){//Condition for the turn of player 1
            if(size_of_column>5)
                gotoxy(x,28);
            else
                gotoxy(x,18);
            printf("Player 1 : Enter your Number : ");
            scanf("%d",&hit);//Getting number from user
            play_turn(size_of_column,size_of_row,hit,k,turn);//Assigning new value
            system("cls");//Clear screen and after that we will see the updated board
            board(size_of_column,size_of_row,x,y,k,first);
            check = win_checker(size_of_row,size_of_column,k,turn,mode);//It will check all possible ways to win
            if (check=='T'){//if returned value is true it will break loop
                printf("Player 1 Wins\n");
                streak1++;
                break;
            }
        }
        else if (turn%2==0){//Condition for second turn
            if (mode==1){//If mode is Player Vs Player
            if(size_of_column>5)
                gotoxy(x,28);
            else
                gotoxy(x,18);
                printf("Player 2 : Enter your Number : ");
                scanf("%d",&hit);
            }
            else if (mode==2){//Generating random number if mode is Player vs Computer
            if(size_of_column>5)
                gotoxy(x,28);
            else
                gotoxy(x,18);
                printf("Computer : Generating a number : ");
                delay(1000);
                hit = 1 + rand() %max_tries;
                printf("%d",hit);
                delay(1000);
            }
            play_turn(size_of_column,size_of_row,hit,k,turn);
            system("cls");
            board(size_of_column,size_of_row,x,y,k,first);
            check = win_checker(size_of_row,size_of_column,k,turn,mode);
            if (check=='T'){
                if(mode==2){
                    streak3++;
                    printf("Computer Wins !!!");
                }
                else if(mode=1){
                    streak2++;
                    printf("Player 2 Wins !!!");
                }
                break;
            }
        }

    }
            if (check!='T'){
            printf("\nGame Drawn\n");
            draw++;
        }
    printf("\nDo You want to Play again ?\nY : Yes\nN : No;");//Asking
    scanf(" %c",&n);
    system("cls");
    }//To show Game statistics if user do not want to play again
    printf("Thank You For Playing Tik Tak Toe :\nYour games Statistics are :\nwins Streaks : \nPlayer 1\tPlayer 2\tComputer\tDrawn\n%d\t\t%d\t\t%d\t\t%d\n",streak1,streak2,streak3,draw);
    system("pause");
    return 0;
}
void gotoxy(int x,int y)//goto x y function copied from Internet
 {
   coord.X=x;
 coord.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
void board (int column, int row, int x, int y,int arr[column][row],int first)
{
    int i,j;//Board animation function
    for (i=0;i+1<=row;i++){
        for(j=0;j+1<=column;j++){
            gotoxy(25,1);
            if (first==1)
                delay(15);
            printf("...Welcome to Tik Tak Toe...");
            gotoxy(x,y);
            printf(" ___ \n");
            if (first==1)
                delay(15);
            gotoxy(x,y+1);
            if (arr[i][j]==88||arr[i][j]==79){
                printf("| %c |\n",arr[i][j]);
            }
            else if (arr[i][j]>9){
                printf("| %d|\n",arr[i][j]);
            }
            else{
                printf("| %d |\n",arr[i][j]);
            }
            if (first==1)
                delay(15);
            gotoxy(x,y+2);
            printf("|___|\n");
            x=x+5;
            if (first==1)
                delay(15);
        }
        x = x-(row*5);
        y=y+3;
    }
}
void play_turn (int column, int row, int hit,int arr[column][row],int turn)
{
    //assign value to specific number
    int i=0,j=0;
    for(i=0;i<=column;i++){
        for(j=0;j<row;j++){
            if(arr[i][j]==hit){
                if (turn%2==1)
                    arr[i][j]=88;
                else if (turn%2==0)
                    arr[i][j]=79;
                    break;
            }
        }
        if(arr[i][j]==hit){
            if (turn%2==1)
                arr[i][j]=88;
            else if (turn%2==0)
                    arr[i][j]=79;
            break;

    }
}
}
char win_checker (int row, int column, int arr[row][column],int turn,int mode)
{
    char check1,check2,check3, check4,final_check;
    int i=0, j=0;
    while(i<row-1){//To check diagonally
        if (arr[i][j]==arr[i+1][j+1])
            check1='T';
        else if(arr[i][j]!=arr[i+1][j+1]){
            check1='F';
            break;
        }
        i++;j++;
    }

    i=0;j=column-1;
    while(i<row-1){//To check reversed diagonal
        if (arr[i][j]==arr[i+1][j-1])
            check2='T';
        else if(arr[i][j]!=arr[i+1][j+1]){
            check2='F';
            break;
        }
        i++;j--;
    }

for(i=0;i<row;i++){//To check rows
    for(j=0;j<column-1;j++){
        if(arr[i][j]==arr[i][j+1])
            check3='T';
        else if(arr[i][j]!=arr[i][j+1]){
            check3='F';
            break;
        }
        if (j==row-2&&check3=='T'){
                break;
        }
    }
    if (j==column-2&&check3=='T'){
        break;
    }
}

for(j=0;j<column;j++){//To check columns
    for(i=0;i<row-1;i++){
        if(arr[i][j]==arr[i+1][j])
            check4='T';
        else if(arr[i][j]!=arr[i+1][j]){
            check4='F';
            break;
        }
        if (i==row-2&&check4=='T'){
                break;
        }
    }
    if (i==row-2&&check4=='T'){
        break;
    }
}
    if (check1=='T'||check2=='T'||check3=='T'||check4=='T'){
        final_check='T';//If any of them is true function will return true otherwise false
    }
    else
        final_check = 'F';
    return final_check;
}
void intro()
{
    gotoxy(35,15);//Intro
    printf(".");delay(250);printf(".");delay(250);printf(".");delay(250);printf("G");delay(250);printf(".");delay(250);printf("M");delay(250);printf(" ");delay(250);printf("S");delay(250);printf("O");delay(250);printf("F");delay(250);printf("T");delay(250);printf("W");delay(250);printf("A");delay(250);printf("R");delay(250);printf("E");delay(250);printf(".");delay(250);printf(".");delay(250);printf(".");delay(250);system("cls");gotoxy(35,15);delay(250);printf(".");delay(250);printf(".");delay(250);printf(".");delay(250);printf("P");delay(250);printf("R");delay(250);printf("E");delay(250);printf("S");delay(250);printf("E");delay(250);printf("N");delay(250);printf("T");delay(250);printf("S");delay(250);printf(".");delay(250);printf(".");delay(250);printf(".");system("cls");gotoxy(35,15);delay(250);printf(".");delay(250);printf(".");delay(250);printf(".");delay(250);printf("T");delay(250);printf("I");delay(250);printf("K");delay(250);printf(" ");delay(250);printf("T");delay(250);printf("A");delay(250);printf("K");delay(250);printf(" ");delay(250);printf("T");delay(250);printf("O");delay(250);printf("E");delay(250);printf(".");delay(250);printf(".");delay(250);printf(".");delay(250);
}
