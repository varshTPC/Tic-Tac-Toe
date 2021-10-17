#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int grid[3][3],cbn,newcbn,youop,compop,level;
int whoseTurnWhileMatched,win=0,level,cross;
int zero, tossh, tossc,a,x,y;
void checkzeroes(int cbn);
int checkanyonezero();
int checkanyonezero()
{
  do
  {
    if(grid[0][0]==0 || grid[0][1]==0 || grid[0][2]==0 || grid[1][0]==0 || grid[1][1]==0 || grid[1][2]==0 || grid[2][0]==0 || grid[2][1]==0 || grid[2][2]==0)
    {
        zero=1;
        break;
    }
    else
        zero=0;
  }while(0);
  return(zero);
}
void checkpossibilities()
{
    if(win!=1)
    {
        do
        {
            //attack
            //vertical
            if(grid[0][0]==grid[1][0] && grid[0][0]==compop && grid[2][0]==0)
            {
                grid[2][0]=compop;
                break;
            }
            else if(grid[1][0]==grid[2][0] && grid[1][0]==compop && grid[0][0]==0)
            {
                grid[0][0]=compop;
                break;
            }
            else if(grid[0][0]==grid[2][0] && grid[0][0]==compop && grid[1][0]==0)
            {
                grid[1][0]=compop;
                break;
            }
            else if(grid[0][1]==grid[1][1] && grid[0][1]==compop && grid[2][1]==0)
            {
                grid[2][1]=compop;
                break;
            }
            else if(grid[1][1]==grid[2][1] && grid[1][1]==compop && grid[0][1]==0)
            {
                grid[0][1]=compop;
                break;
            }
            else if(grid[0][1]==grid[2][1] && grid[0][1]==compop && grid[1][1]==0)
            {
                grid[1][1]=compop;
                break;
            }
            else if(grid[0][2]==grid[1][2] && grid[0][2]==compop && grid[2][2]==0)
            {
                grid[2][2]=compop;
                break;
            }
            else if(grid[1][2]==grid[2][2] && grid[1][2]==compop && grid[0][2]==0)
            {
                grid[0][2]=compop;
                break;
            }
            else if(grid[0][2]==grid[2][2] && grid[0][2]==compop && grid[1][2]==0)
            {
                grid[1][2]=compop;
                break;
            }
            //horizontal
            else if(grid[0][0]==grid[0][1] && grid[0][0]==compop && grid[0][2]==0)
            {
                grid[0][2]=compop;
                break;
            }
            else if(grid[0][1]==grid[0][2] && grid[0][1]==compop && grid[0][0]==0)
            {
                grid[0][0]=compop;
                break;
            }
            else if(grid[0][0]==grid[0][2] && grid[0][0]==compop && grid[0][1]==0)
            {
                grid[0][1]=compop;
                break;
            }
            else if(grid[1][0]==grid[1][1] && grid[1][0]==compop && grid[1][2]==0)
            {
                grid[1][2]=compop;
                break;
            }
            else if(grid[1][1]==grid[1][2] && grid[1][1]==compop && grid[1][0]==0)
            {
                grid[1][0]=compop;
                break;
            }
            else if(grid[1][0]==grid[1][2] && grid[1][0]==compop && grid[1][1]==0)
            {
                grid[1][1]=compop;
                break;
            }
            else if(grid[2][0]==grid[2][1] && grid[2][0]==compop && grid[2][2]==0)
            {
                grid[2][2]=compop;
                break;
            }
            else if(grid[2][1]==grid[2][2] && grid[2][1]==compop && grid[2][0]==0)
            {
                grid[2][0]=compop;
                break;
            }
            else if(grid[2][0]==grid[2][2] && grid[2][0]==compop && grid[2][1]==0)
            {
                grid[2][1]=compop;
                break;
            }
            //diagonals
            else if(grid[0][0]==grid[1][1] && grid[0][0]==compop && grid[2][2]==0)
            {
                grid[2][2]=compop;
                break;
            }
            else if(grid[1][1]==grid[2][2] && grid[1][1]==compop && grid[0][0]==0)
            {
                grid[0][0]=compop;
                break;
            }
            else if(grid[0][0]==grid[2][2] && grid[0][0]==compop && grid[1][1]==0)
            {
                grid[1][1]=compop;
                break;
            }
            else if(grid[0][2]==grid[1][1] && grid[0][2]==compop && grid[2][0]==0)
            {
                grid[2][0]=compop;
                break;
            }
            else if(grid[1][1]==grid[2][0] && grid[1][1]==compop && grid[0][2]==0)
            {
                grid[0][2]=compop;
                break;
            }
            else if(grid[0][2]==grid[2][0] && grid[0][2]==compop && grid[1][1]==0)
            {
                grid[1][1]=compop;
                break;
            }
            //defense
            //vertical
            //first col
            else if(grid[0][0]==grid[1][0] && grid[0][0]==youop && grid[2][0]==0)
            {
                grid[2][0]=compop;
                break;
            }
            else if(grid[1][0]==grid[2][0] && grid[1][0]==youop && grid[0][0]==0)
            {
                grid[0][0]=compop;
                break;
            }
            else if(grid[0][0]==grid[2][0] && grid[0][0]==youop && grid[1][0]==0)
            {
                grid[1][0]=compop;
                break;
            }
            else if(grid[0][1]==grid[1][1] && grid[0][1]==youop && grid[2][1]==0)
            {
                grid[2][1]=compop;
                break;
            }
            else if(grid[1][1]==grid[2][1] && grid[1][1]==youop && grid[0][1]==0)
            {
                grid[0][1]=compop;
                break;
            }
            else if(grid[0][1]==grid[2][1] && grid[0][1]==youop && grid[1][1]==0)
            {
                grid[1][1]=compop;
                break;
            }
            else if(grid[0][2]==grid[1][2] && grid[0][2]==youop && grid[2][2]==0)
            {
                grid[2][2]=compop;
                break;
            }
            else if(grid[1][2]==grid[2][2] && grid[1][2]==youop && grid[0][2]==0)
            {
                grid[0][2]=compop;
                break;
            }
            else if(grid[0][2]==grid[2][2] && grid[0][2]==youop && grid[1][2]==0)
            {
                grid[1][2]=compop;
                //printf("\n 8b \n");
                break;
            }
            //horizontal
            else if(grid[0][0]==grid[0][1] && grid[0][0]==youop && grid[0][2]==0)
            {
                grid[0][2]=compop;
                break;
            }
            else if(grid[0][1]==grid[0][2] && grid[0][1]==youop && grid[0][0]==0)
            {
                grid[0][0]=compop;
                break;
            }
            else if(grid[0][0]==grid[0][2] && grid[0][0]==youop && grid[0][1]==0)
            {
                grid[0][1]=compop;
                break;
            }
            else if(grid[1][0]==grid[1][1] && grid[1][0]==youop && grid[1][2]==0)
            {
                grid[1][2]=compop;
                break;
            }
            else if(grid[1][1]==grid[1][2] && grid[1][1]==youop && grid[1][0]==0)
            {
                grid[1][0]=compop;
                break;
            }
            else if(grid[1][0]==grid[1][2] && grid[1][0]==youop && grid[1][1]==0)
            {
                grid[1][1]=compop;
                break;
            }
            else if(grid[2][0]==grid[2][1] && grid[2][0]==youop && grid[2][2]==0)
            {
                grid[2][2]=compop;
                break;
            }
            else if(grid[2][1]==grid[2][2] && grid[2][1]==youop && grid[2][0]==0)
            {
                grid[2][0]=compop;
                break;
            }
            else if(grid[2][0]==grid[2][2] && grid[2][0]==youop && grid[2][1]==0)
            {
                grid[2][1]=compop;
                break;
            }
            //diagonals
            else if(grid[0][0]==grid[1][1] && grid[0][0]==youop && grid[2][2]==0)
            {
                grid[2][2]=compop;
                break;
            }
            else if(grid[1][1]==grid[2][2] && grid[1][1]==youop && grid[0][0]==0)
            {
                grid[0][0]=compop;
                break;
            }
            else if(grid[0][0]==grid[2][2] && grid[0][0]==youop && grid[1][1]==0)
            {
                grid[1][1]=compop;
                break;
            }
            else if(grid[0][2]==grid[1][1] && grid[0][2]==youop && grid[2][0]==0)
            {
                grid[2][0]=compop;
                break;
            }
            else if(grid[1][1]==grid[2][0] && grid[1][1]==youop && grid[0][2]==0)
            {
                grid[0][2]=compop;
                break;
            }
            else if(grid[0][2]==grid[2][0] && grid[0][2]==youop && grid[1][1]==0)
            {
                grid[1][1]=compop;
                break;
            }
            else if(level==3 && cross!=1 && tossc!=tossh)
            {
                if(grid[0][0]==compop && grid[1][0]!=youop)
                    grid[2][0]=compop;
                else if(grid[0][0]==compop && grid[0][1]!=youop)
                    grid[0][2]=compop;
            }
            else
            {
                cbn=rand()%9+1;
                checkzeroes(cbn);
                break;
            }
        }while(0);
    }
}
void smartplay()
{
    if(grid[0][0]==youop && grid[0][1]==youop)
        checkpossibilities();
    else if(grid[0][0]==youop && grid[1][0]==youop)
        checkpossibilities();
    else if(grid[0][2]==youop && grid[1][2]==youop)
        checkpossibilities();
    else if(grid[0][2]==youop && grid[0][1]==youop)
        checkpossibilities();
    else if(grid[2][1]==youop && grid[2][2]==youop)
        checkpossibilities();
    else if(grid[2][2]==youop && grid[1][2]==youop)
        checkpossibilities();
    else if(grid[2][0]==youop && grid[2][1]==youop)
        checkpossibilities();
    else if(grid[2][0]==youop && grid[1][0]==youop)
        checkpossibilities();
    else if(grid[0][0]==youop && grid[0][2]==youop)
        checkpossibilities();
    else if(grid[0][0]==youop && grid[2][0]==youop)
        checkpossibilities();
    else if(grid[0][2]==youop && grid[2][2]==youop)
        checkpossibilities();
    else if(grid[2][0]==youop && grid[2][2]==youop)
        checkpossibilities();
    else if(grid[0][0]==youop && grid[2][1]==youop)
        grid[0][2]=compop;
    else if(grid[0][0]==youop && grid[1][2]==youop)
        grid[2][0]=compop;
    else if(grid[0][2]==youop && grid[2][1]==youop)
        grid[0][0]=compop;
    else if(grid[0][2]==youop && grid[1][0]==youop)
        grid[2][2]=compop;
    else if(grid[1][0]==youop && grid[2][2]==youop)
        grid[0][2]=compop;
    else if(grid[0][1]==youop && grid[2][2]==youop)
        grid[2][0]=compop;
    else if(grid[0][1]==youop && grid[2][0]==youop)
        grid[2][2]=compop;
    else if(grid[1][2]==youop && grid[2][0]==youop)
        grid[0][0]=compop;
}
void decidewin()
{
    switch(whoseTurnWhileMatched)
    {
    case 0:
        win=1;
        printf("\nCONGRATS CHAMP!!!YOU WON THE GAME\n");
        break;
    case 1:
        win=1;
        printf("\nTHE COMPUTER HAS WON THE GAME!!!\n");
        break;
    }
}
void checkgrid()
{
    do
    {
    //vertical matches
    if(grid[0][0]==grid[1][0] && grid[1][0]==grid[2][0] && grid[0][0]!=0)
    {
        decidewin();
        break;
    }
    else if(grid[0][1]==grid[1][1] && grid[1][1]==grid[2][1] && grid[0][1]!=0)
    {
        decidewin();
        break;
    }
    else if(grid[0][2]==grid[1][2] && grid[1][2]==grid[2][2] && grid[0][2]!=0)
    {
        decidewin();
        break;
    }
    //horizontal matches
    else if(grid[0][0]==grid[0][1] && grid[0][1]==grid[0][2] && grid[0][0]!=0)
    {
        decidewin();
        break;
    }
    else if(grid[1][0]==grid[1][1] && grid[1][1]==grid[1][2] && grid[1][0]!=0)
    {
        decidewin();
        break;
    }
    else if(grid[2][0]==grid[2][1] && grid[2][1]==grid[2][2] && grid[2][0]!=0)
    {
        decidewin();
        break;
    }
    //diagonal matches
    else if(grid[0][0]==grid[1][1] && grid[1][1]==grid[2][2] && grid[0][0]!=0)
    {
        decidewin();
        break;
    }
    else if(grid[0][2]==grid[1][1] && grid[1][1]==grid[2][0] && grid[0][2]!=0)
    {
        decidewin();
        break;
    }
    else if(checkanyonezero()!=1)
    {
        printf("\nOH NO!! IT'S A DRAW...\n");
    }
    }while(0);
}
void checkzeroes(int cbn)
{
    switch(cbn)
      {
      case 1:
          if(grid[0][0]==0)
            {
                newcbn=cbn;
                computerchance(newcbn);
            }
            else
            {
            cbn=rand()%9+1;
            checkzeroes(cbn);
            }
          break;
      case 2:
          if(grid[0][1]==0)
            {
                newcbn=cbn;
                computerchance(newcbn);
            }
            else
            {
            cbn=rand()%9+1;
            checkzeroes(cbn);
            }
          break;
      case 3:
          if(grid[0][2]==0)
            {
                newcbn=cbn;
                computerchance(newcbn);
            }
            else
            {
            cbn=rand()%9+1;
            checkzeroes(cbn);
            }
          break;
      case 4:
          if(grid[1][0]==0)
            {
                newcbn=cbn;
                computerchance(newcbn);
            }
            else
            {
            cbn=rand()%9+1;
            checkzeroes(cbn);
            }
          break;
      case 5:
          if(grid[1][1]==0)
            {
                newcbn=cbn;
                computerchance(newcbn);
            }
            else
            {
            cbn=rand()%9+1;
            checkzeroes(cbn);
            }
          break;
      case 6:
          if(grid[1][2]==0)
            {
                newcbn=cbn;
                computerchance(newcbn);
            }
            else
            {
            cbn=rand()%9+1;
            checkzeroes(cbn);
            }
          break;
      case 7:
          if(grid[2][0]==0)
            {
                newcbn=cbn;
                computerchance(newcbn);
            }
            else
            {
            cbn=rand()%9+1;
            checkzeroes(cbn);
            }
          break;
      case 8:
          if(grid[2][1]==0)
            {
                newcbn=cbn;
                computerchance(newcbn);
            }
            else
            {
            cbn=rand()%9+1;
            checkzeroes(cbn);
            }
          break;
      case 9:
          if(grid[2][2]==0)
            {
                newcbn=cbn;
                computerchance(newcbn);
            }
            else
            {
            cbn=rand()%9+1;
            checkzeroes(cbn);
            }
          break;
      }
}
void computerchance(int newcbn)
{
    printf("\nThe computer chose the box number %d\n", newcbn);
      switch(newcbn)
      {
      case 1:
          grid[0][0]=compop;
          break;
      case 2:
          grid[0][1]=compop;
          break;
      case 3:
          grid[0][2]=compop;
          break;
      case 4:
          grid[1][0]=compop;
          break;
      case 5:
          grid[1][1]=compop;
          break;
      case 6:
          grid[1][2]=compop;
          break;
      case 7:
          grid[2][0]=compop;
          break;
      case 8:
          grid[2][1]=compop;
          break;
      case 9:
          grid[2][2]=compop;
          break;
      }
}
void displaygrid()
{
    printf("\nThe current position of the grid is:-\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%5d", grid[i][j]);
        }
        printf("\n");
    }
    printf("\nNOTE: THE PLACES IN THE GRID WITH ZEROES CAN ONLY BE FILLED!!!\n");
}
int main()
{
    void wronginput()
    {
    printf("\nOOPS!!you entered the wrong option\n");
    }
    srand(time(0));
    int gridnum[3][3]={1,2,3,4,5,6,7,8,9};
    int ybn,attempt=0,attempt1=0;
    printf("\n\t\t*****TIC-TAC-TOE******\n");
    printf("\nHI, I'M V!!! WELCOME TO THE TIC-TAC-TOE GAME...\n\nYOU HAVE BEEN CHALLENGED BY THE COMPUTER!!!\n");
    printf("\nTRY IF YOU CAN BEAT THE COMPUTER...\n");
    printf("\n\t\t***THE RULES OF THE GAME***\n");
    printf("\n1.The game is played on a grid that's 3 squares by 3 squares.\n");
    printf("\n2.You have to choose whether your mark is '1' or '2' at the start of the game\n");
    printf("\n3.You can fill your already chosen mark in the grid of 3 rows and 3 columns\n\nby entering the number of respective box of the grid\n");
    printf("\n4.The numbers of the boxes of the grid are as displayed below\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%5d", gridnum[i][j]);
        }
        printf("\n");
    }
    printf("\n5.The first player to get 3 of their chosen mark in a row\n\n(up, down, across, or diagonally) is the winner.\n");
    printf("\n6.When all 9 boxes in the grid are full, the game is over.\n\nIf no player has 3 marks in a row, the game ends in a tie.\n");
    printf("\nDONE WITH THE RULES!\n");
    printf("\nSO, WHICH LEVEL DO YOU WANNA CHOOSE??\n");
    printf("\nARE YOU A BEGINNER --> PRESS 1 TO CHOOSE LEVEL 'EASY'\n");
    printf("\nARE YOU SOMEWHAT CONFIDENT --> PRESS 2 TO CHOOSE LEVEL 'MEDIUM'\n");
    printf("\nARE YOU A PRO --> PRESS 3 TO CHOOSE LEVEL 'DIFFICULT'\n");
    scanf("%d", &level);
    printf("\nIT'S NOW TIME TO CHOOSE YOUR MARK!\n");
    printf("\nPRESS EITHER '1' OR '2'\n");
    scanf("%d", &youop);
    if(youop==1)
       compop=2;
    else
        compop=1;
    printf("\nCOOL!!You have chosen %d as your mark\n\nThe computer gets %d mark\n", youop,compop);
    printf("\n\t\tTIME FOR A TOSS!!!READY?!?!\n");
    printf("\nIf you and the computer choose the same number you win and get to play first\n");
    printf("\nPress either 0 or 1: ");
    scanf("%d", &tossh);
    tossc=rand()%2;
    printf("\nThe computer chose %d\n", tossc);
    if(tossc==tossh)
    {
    printf("\nYou won the toss!!!It's your turn first\n");
    }
    else
    {
    printf("\nYou lost the toss...The computer plays first\n");
    }
    if(tossc==tossh)
    {
      displaygrid();
      while(checkanyonezero()==1 && win!=1)
      {
      attempt1++;
      x:
      if(checkanyonezero()==1 && win!=1)
      {
      printf("\nYour mark is %d...\n\nNow enter the number of the box in which you want to put your mark: ", youop);
      scanf("%d", &ybn);
      switch(ybn)
      {
      case 1:
          if(grid[0][0]!=0)
            {
                wronginput();
                goto x;
            }
            break;
      case 2:
          if(grid[0][1]!=0)
            {
                wronginput();
                goto x;
            }
          break;
      case 3:
          if(grid[0][2]!=0)
            {
                wronginput();
                goto x;
            }
          break;
      case 4:
          if(grid[1][0]!=0)
            {
                wronginput();
                goto x;
            }
          break;
      case 5:
          if(grid[1][1]!=0)
            {
                wronginput();
                goto x;
            }
          break;
      case 6:
          if(grid[1][2]!=0)
            {
                wronginput();
                goto x;
            }
          break;
      case 7:
          if(grid[2][0]!=0)
            {
                wronginput();
                goto x;
            }
          break;
      case 8:
          if(grid[2][1]!=0)
            {
                wronginput();
                goto x;
            }
          break;
      case 9:
          if(grid[2][2]!=0)
            {
                wronginput();
                goto x;
            }
          break;
      }
      switch(ybn)
      {
      case 1:
          grid[0][0]=youop;
          break;
      case 2:
          grid[0][1]=youop;
          break;
      case 3:
          grid[0][2]=youop;
          break;
      case 4:
          grid[1][0]=youop;
          break;
      case 5:
          grid[1][1]=youop;
          break;
      case 6:
          grid[1][2]=youop;
          break;
      case 7:
          grid[2][0]=youop;
          break;
      case 8:
          grid[2][1]=youop;
          break;
      case 9:
          grid[2][2]=youop;
          break;
      }
      displaygrid();
      whoseTurnWhileMatched=0;
      checkgrid();
      }
      if(checkanyonezero()==1 && win!=1)
      {
      printf("\nNow it's the turn of the computer\n");
      if(level==3)
      {
         if(attempt1==1)
          {
             if(grid[1][1]==0)
                grid[1][1]=compop;
             else
                grid[0][0]=compop;
          }
          if(attempt1==2)
          {
             if(grid[2][2]==youop)
                grid[1][2]=compop;
             else
                checkpossibilities();
          }
          if(attempt1==3)
          {
             if(ybn==4)
                    grid[2][0]=compop;
             else
                checkpossibilities();
          }
          if(attempt1==4)
            checkpossibilities();
          if(attempt1==5)
            checkpossibilities();
      }
      if(level==2)
      {
      checkpossibilities();
      }
      if(level==1)
      {
      cbn=rand()%9+1;
      checkzeroes(cbn);
      }
      displaygrid();
      whoseTurnWhileMatched=1;
      checkgrid();
      }
      }
    }
    if(tossc!=tossh)
    {
    displaygrid();
    while(checkanyonezero()==1 && win!=1)
    {
      attempt++;
      if(checkanyonezero()==1 && win!=1)
      {
      printf("\nNow it's the turn of the computer\n");
      if(level==3)
      {
          if(attempt==1)
          {
             if(grid[1][1]==0)
             grid[1][1]=compop;
          }
          if(attempt==2)
          {
             if(grid[0][1]==youop || grid[1][0]==youop || grid[1][2]==youop || grid[2][1]==youop)
                grid[0][0]=compop;
             else if(grid[0][0]!=0)
             {
                 grid[2][2]=compop;
                 cross=1;
             }
             else if(grid[0][2]!=0)
             {
                grid[2][0]=compop;
                cross=1;
             }
             else if(grid[2][0]!=0)
             {
                 grid[0][2]=compop;
                 cross=1;
             }
             else if(grid[2][2]!=0)
             {
                 grid[0][0]=compop;
                 cross=1;
             }
          }
          if(attempt==3)
          {
            if(cross!=1)
                checkpossibilities();
            if(cross==1)
                smartplay();
          }
          if(attempt==4)
            checkpossibilities();
          if(attempt==5 && cross==1)
            checkpossibilities();
      }
      if(level==2)
      {
      checkpossibilities();
      }
      if(level==1)
      {
      cbn=rand()%9+1;
      checkzeroes(cbn);
      }
      displaygrid();
      whoseTurnWhileMatched=1;
      checkgrid();
      }
      y:
      if(checkanyonezero()==1 && win!=1)
      {
      printf("\nYour mark is %d...\n\nNow enter the number of the box in which you want to put your mark: ", youop);
      scanf("%d", &ybn);
      switch(ybn)
      {
      case 1:
          if(grid[0][0]!=0)
            {
                wronginput();
                goto y;
            }
            break;
      case 2:
          if(grid[0][1]!=0)
            {
                wronginput();
                goto y;
            }
          break;
      case 3:
          if(grid[0][2]!=0)
            {
                wronginput();
                goto y;
            }
          break;
      case 4:
          if(grid[1][0]!=0)
            {
                wronginput();
                goto y;
            }
          break;
      case 5:
          if(grid[1][1]!=0)
            {
                wronginput();
                goto y;
            }
          break;
      case 6:
          if(grid[1][2]!=0)
            {
                wronginput();
                goto y;
            }
          break;
      case 7:
          if(grid[2][0]!=0)
            {
                wronginput();
                goto y;
            }
          break;
      case 8:
          if(grid[2][1]!=0)
            {
                wronginput();
                goto y;
            }
          break;
      case 9:
          if(grid[2][2]!=0)
            {
                wronginput();
                goto y;
            }
          break;
      }
      switch(ybn)
      {
      case 1:
          grid[0][0]=youop;
          break;
      case 2:
          grid[0][1]=youop;
          break;
      case 3:
          grid[0][2]=youop;
          break;
      case 4:
          grid[1][0]=youop;
          break;
      case 5:
          grid[1][1]=youop;
          break;
      case 6:
          grid[1][2]=youop;
          break;
      case 7:
          grid[2][0]=youop;
          break;
      case 8:
          grid[2][1]=youop;
          break;
      case 9:
          grid[2][2]=youop;
          break;
      default:
          {
            printf("\ninvalid option...try again\n");
            goto y;
          }
      }
      displaygrid();
      whoseTurnWhileMatched=0;
      checkgrid();
      }
     }
    }
    return 0;
}


