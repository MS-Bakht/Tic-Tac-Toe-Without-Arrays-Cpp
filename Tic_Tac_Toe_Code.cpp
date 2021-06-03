#include <iostream>
using namespace std;
int main() {

char A1=' ', A2=' ', A3=' ', A4=' ', A5=' ', A6=' ', A7=' ', A8=' ', A9=' ';

cout<<"          |          |          "<<endl;
cout<<"     ";
cout<< A1;
cout<<"    |    ";
cout<<A2;
cout<<"     |    ";
cout<<A3;
cout<<"     "<<endl;
cout<<"_________1|_________2|_________3"<<endl;
cout<<"          |          |          "<<endl;
cout<<"     ";
cout<<A4;
cout<<"    |    ";
cout<<A5;
cout<<"     |    ";
cout<<A6;
cout<<"    "<<endl;
cout<<"_________4|_________5|_________6"<<endl;
cout<<"          |          |          "<<endl;
cout<<"     ";
cout<<A7;
cout<<"    |    ";
cout<<A8;
cout<<"     |    ";
cout<<A9;
cout<<"     "<<endl;
cout<<"         7|         8|         9"<<endl;
  
char pmode;
cout<<endl<<endl<<"Press S for single player \nPress M for multiplayer"<<endl;
cin>>pmode;

switch(pmode)
{
  case 'M':
  case 'm': 
  {
         cout<<"Initiating Multiplayer Tic tac toe"<<endl;
         int i =0, choice = 0;

         while (i < 9)
         {
           if(i%2==0)
           {
             cout<<"Player X: \nEnter the number of the block you wish to fill (1-9) : ";
             cin>> choice;
             //-------------------------A1
             if (choice == 1 )
             {
               if (A1!='X' && A1!='O')
               {
                A1 = 'X';
               }//end nested-nested if
               else
               {
                 i--;
               }
             }//end nested if
             //-------------------------

             //-------------------------A2
                if (choice == 2 )
             {
               if (A2!='X' && A2!='O')
               {
                A2 = 'X';
               }//end nested-nested if
               else
               {
                 i--;
               }
             }//end nested if
             //-------------------------
             

             //-------------------------A3
              if (choice == 3 )
             {
               if (A3!='X' && A3!='O')
               {
                A3 = 'X';
               }//end nested-nested if
               else
               {
                 i--;
               }
             }//end nested if
             //-------------------------

             //-------------------------A4
              if (choice == 4 )
             {
               if (A4!='X' && A4!='O')
               {
                A4 = 'X';
               }//end nested-nested if
               else
               {
                 i--;
               }
             }//end nested if
             //-------------------------

             //-------------------------A5
              if (choice == 5 )
             {
               if (A5!='X' && A5!='O')
               {
                A5 = 'X';
               }//end nested-nested if
               else
               {
                 i--;
               }
             }//end nested if
             //-------------------------

             //-------------------------A6
             if (choice == 6 )
             {
               if (A6!='X' && A6!='O')
               {
                A6 = 'X';
               }//end nested-nested if
               else
               {
                 i--;
               }
             }//end nested if

             //-------------------------

             //-------------------------A7
             if (choice == 7 )
             {
               if (A7!='X' && A7!='O')
               {
                A7 = 'X';
               }//end nested-nested if
               else
               {
                 i--;
               }
             }//end nested if

             //-------------------------

             //-------------------------A8
             if (choice == 8 )
             {
               if (A8!='X' && A8!='O')
               {
                A8 = 'X';
               }//end nested-nested if
               else
               {
                 i--;
               }
             }//end nested if

             //-------------------------

             //-------------------------A9
             if (choice == 9 )
             {
               if (A9!='X' && A9!='O')
               {
                A9 = 'X';
               }//end nested-nested if
               else
               {
                 i--;
               }
             }//end nested if
  
             //-------------------------



           }//end if
           else
            {
              cout<<"Player O: \nEnter the number of the block you wish to fill (1-9) : ";
             cin>> choice;
             if (choice == 1 )
             {
               if (A1!='X' && A1!='O')
               {
                A1 = 'O';
               }//end nested-nested if
               else
               {
                 i--;
               }//end nested-nested else
             }//end nested if

             //-------------------------A2
                if (choice == 2 )
             {
               if (A2!='X' && A2!='O')
               {
                A2 = 'O';
               }//end nested-nested if
               else
               {
                 i--;
               }
             }//end nested if
             //-------------------------
             

             //-------------------------A3
              if (choice == 3 )
             {
               if (A3!='X' && A3!='O')
               {
                A3 = 'O';
               }//end nested-nested if
               else
               {
                 i--;
               }
             }//end nested if
             //-------------------------

             //-------------------------A4
              if (choice == 4 )
             {
               if (A4!='X' && A4!='O')
               {
                A4 = 'O';
               }//end nested-nested if
               else
               {
                 i--;
               }
             }//end nested if
             //-------------------------

             //-------------------------A5
              if (choice == 5 )
             {
               if (A5!='X' && A5!='O')
               {
                A5 = 'O';
               }//end nested-nested if
               else
               {
                 i--;
               }
             }//end nested if
             //-------------------------

             //-------------------------A6
             if (choice == 6 )
             {
               if (A6!='X' && A6!='O')
               {
                A6 = 'O';
               }//end nested-nested if
               else
               {
                 i--;
               }
             }//end nested if

             //-------------------------

             //-------------------------A7
             if (choice == 7 )
             {
               if (A7!='X' && A7!='O')
               {
                A7 = 'O';
               }//end nested-nested if
               else
               {
                 i--;
               }
             }//end nested if

             //-------------------------

             //-------------------------A8
             if (choice == 8 )
             {
               if (A8!='X' && A8!='O')
               {
                A8 = 'O';
               }//end nested-nested if
               else
               {
                 i--;
               }
             }//end nested if

             //-------------------------

             //-------------------------A9
             if (choice == 9 )
             {
               if (A9!='X' && A9!='O')
               {
                A9 = 'O';
               }//end nested-nested if
               else
               {
                 i--;
               }
             }//end nested if
  
             //-------------------------


            } //end else

//Displaying TABLE
cout<<"          |          |          "<<endl;
cout<<"     ";
cout<< A1;
cout<<"    |    ";
cout<<A2;
cout<<"     |    ";
cout<<A3;
cout<<"     "<<endl;
cout<<"_________1|_________2|_________3"<<endl;
cout<<"          |          |          "<<endl;
cout<<"     ";
cout<<A4;
cout<<"    |    ";
cout<<A5;
cout<<"     |    ";
cout<<A6;
cout<<"    "<<endl;
cout<<"_________4|_________5|_________6"<<endl;
cout<<"          |          |          "<<endl;
cout<<"     ";
cout<<A7;
cout<<"    |    ";
cout<<A8;
cout<<"     |    ";
cout<<A9;
cout<<"     "<<endl;
cout<<"         7|         8|         9"<<endl;
cout<<"\n  ----------  \n";

//Incrementing Iterator
i++;

//CHECKING FOR WINNER
if (A1==A2 && A2==A3 && A3!=' ')
{
  if (A1=='X')
  {
    cout<<"\n\n ~Winner is X~ \n\n";
  }
  else if (A1=='O')
  {
    cout<<"\n\n ~Winner is O~ \n\n";
  }
  break;
} //Row1
else if (A4==A5 && A5==A6 && A6!=' ')
{
  if (A4=='X')
  {
    cout<<"\n\n ~Winner is X~ \n\n";
  }
  else if (A4=='O')
  {
    cout<<"\n\n ~Winner is O~ \n\n";
  }
  break;
} //Row2
else if (A7==A8 && A8==A9 && A9!=' ')
{
  if (A7=='X')
  {
    cout<<"\n\n ~Winner is X~ \n\n";
  }
  else if (A7=='O')
  {
    cout<<"\n\n ~Winner is O~ \n\n";
  }
  break;
} //Row3
else if (A1==A4 && A4==A7 && A7!=' ')
{
  if (A7=='X')
  {
    cout<<"\n\n ~Winner is X~ \n\n";
  }
  else if (A7=='O')
  {
    cout<<"\n\n ~Winner is O~ \n\n";
  }
  break;
} //Col1
else if (A2==A5 && A5==A8 && A8!=' ')
{
  if (A2=='X')
  {
    cout<<"\n\n ~Winner is X~ \n\n";
  }
  else if (A2=='O')
  {
    cout<<"\n\n ~Winner is O~ \n\n";
  }
  break;
} //Col2
else if (A3==A6 && A6==A9 && A9!=' ')
{
  if (A3=='X')
  {
    cout<<"\n\n ~Winner is X~ \n\n";
  }
  else if (A3=='O')
  {
    cout<<"\n\n ~Winner is O~ \n\n";
  }
  break;
} //Col3
else if (A1==A5 && A5==A9 && A9!=' ')
{
  if (A1=='X')
  {
    cout<<"\n\n ~Winner is X~ \n\n";
  }
  else if (A1=='O')
  {
    cout<<"\n\n ~Winner is O~ \n\n";
  }
  break;
} //Diagonal 1
else if (A3==A5 && A5==A7 && A7!=' ')
{
  if (A7=='X')
  {
    cout<<"\n\n ~Winner is X~ \n\n";
  }
  else if (A7=='O')
  {
    cout<<"\n\n ~Winner is O~ \n\n";
  }
  break;
} //Diagonal 2
else
{
  if (i==9)
  {
    cout<<"\n\n ~Draw Match~ \n\n";
  }
}
         
         }//end while
    break;





}
  case 'S':
  case 's':
  {
       cout<<"Initiating Single Player Tic tac toe"<<endl;
         int j =0, choice2 = 0;

         while (j < 9)
         {
           if(j%2==0)
           {
             cout<<"Player X: \nEnter the number of the block you wish to fill (1-9) : ";
             cin>> choice2;
             //-------------------------A1
             if (choice2 == 1 )
             {
               if (A1!='X' && A1!='O')
               {
                A1 = 'X';
               }//end nested-nested if
               else
               {
                 j--;
               }
             }//end nested if
             //-------------------------

             //-------------------------A2
                if (choice2 == 2 )
             {
               if (A2!='X' && A2!='O')
               {
                A2 = 'X';
               }//end nested-nested if
               else
               {
                 j--;
               }
             }//end nested if
             //-------------------------
             

             //-------------------------A3
              if (choice2 == 3 )
             {
               if (A3!='X' && A3!='O')
               {
                A3 = 'X';
               }//end nested-nested if
               else
               {
                 j--;
               }
             }//end nested if
             //-------------------------

             //-------------------------A4
              if (choice2 == 4 )
             {
               if (A4!='X' && A4!='O')
               {
                A4 = 'X';
               }//end nested-nested if
               else
               {
                 j--;
               }
             }//end nested if
             //-------------------------

             //-------------------------A5
              if (choice2 == 5 )
             {
               if (A5!='X' && A5!='O')
               {
                A5 = 'X';
               }//end nested-nested if
               else
               {
                 j--;
               }
             }//end nested if
             //-------------------------

             //-------------------------A6
             if (choice2 == 6 )
             {
               if (A6!='X' && A6!='O')
               {
                A6 = 'X';
               }//end nested-nested if
               else
               {
                 j--;
               }
             }//end nested if

             //-------------------------

             //-------------------------A7
             if (choice2 == 7 )
             {
               if (A7!='X' && A7!='O')
               {
                A7 = 'X';
               }//end nested-nested if
               else
               {
                 j--;
               }
             }//end nested if

             //-------------------------

             //-------------------------A8
             if (choice2 == 8 )
             {
               if (A8!='X' && A8!='O')
               {
                A8 = 'X';
               }//end nested-nested if
               else
               {
                 j--;
               }
             }//end nested if

             //-------------------------

             //-------------------------A9
             if (choice2 == 9 )
             {
               if (A9!='X' && A9!='O')
               {
                A9 = 'X';
               }//end nested-nested if
               else
               {
                 j--;
               }
             }//end nested if
  
             //-------------------------



           }//end if
           else
            {
              choice2 =rand()%9 +1;
              cout<<choice2<<endl;
             if (choice2==0)
             {
               choice2 += 1;
             }
             if (choice2 == 1 )
             {
               if (A1!='X' && A1!='O')
               {
                A1 = 'O';
               }//end nested-nested if
               else
               {
                 j--;
               }//end nested-nested else
             }//end nested if

             //-------------------------A2
                if (choice2 == 2 )
             {
               if (A2!='X' && A2!='O')
               {
                A2 = 'O';
               }//end nested-nested if
               else
               {
                 j--;
               }
             }//end nested if
             //-------------------------
             

             //-------------------------A3
              if (choice2 == 3 )
             {
               if (A3!='X' && A3!='O')
               {
                A3 = 'O';
               }//end nested-nested if
               else
               {
                 j--;
               }
             }//end nested if
             //-------------------------

             //-------------------------A4
              if (choice2 == 4 )
             {
               if (A4!='X' && A4!='O')
               {
                A4 = 'O';
               }//end nested-nested if
               else
               {
                 j--;
               }
             }//end nested if
             //-------------------------

             //-------------------------A5
              if (choice2 == 5 )
             {
               if (A5!='X' && A5!='O')
               {
                A5 = 'O';
               }//end nested-nested if
               else
               {
                 j--;
               }
             }//end nested if
             //-------------------------

             //-------------------------A6
             if (choice2 == 6 )
             {
               if (A6!='X' && A6!='O')
               {
                A6 = 'O';
               }//end nested-nested if
               else
               {
                 j--;
               }
             }//end nested if

             //-------------------------

             //-------------------------A7
             if (choice2 == 7 )
             {
               if (A7!='X' && A7!='O')
               {
                A7 = 'O';
               }//end nested-nested if
               else
               {
                 j--;
               }
             }//end nested if

             //-------------------------

             //-------------------------A8
             if (choice2 == 8 )
             {
               if (A8!='X' && A8!='O')
               {
                A8 = 'O';
               }//end nested-nested if
               else
               {
                 j--;
               }
             }//end nested if

             //-------------------------

             //-------------------------A9
             if (choice2 == 9 )
             {
               if (A9!='X' && A9!='O')
               {
                A9 = 'O';
               }//end nested-nested if
               else
               {
                 j--;
               }
             }//end nested if
  
             //-------------------------


            } //end else

//Displaying TABLE
cout<<"          |          |          "<<endl;
cout<<"     ";
cout<< A1;
cout<<"    |    ";
cout<<A2;
cout<<"     |    ";
cout<<A3;
cout<<"     "<<endl;
cout<<"_________1|_________2|_________3"<<endl;
cout<<"          |          |          "<<endl;
cout<<"     ";
cout<<A4;
cout<<"    |    ";
cout<<A5;
cout<<"     |    ";
cout<<A6;
cout<<"    "<<endl;
cout<<"_________4|_________5|_________6"<<endl;
cout<<"          |          |          "<<endl;
cout<<"     ";
cout<<A7;
cout<<"    |    ";
cout<<A8;
cout<<"     |    ";
cout<<A9;
cout<<"     "<<endl;
cout<<"         7|         8|         9"<<endl;
cout<<"\n  ----------  \n";

//Incrementing Iterator
j++;

//CHECKING FOR WINNER
if (A1==A2 && A2==A3 && A3!=' ')
{
  if (A1=='X')
  {
    cout<<"\n\n ~Winner is X~ \n\n";
  }
  else if (A1=='O')
  {
    cout<<"\n\n ~Winner is O~ \n\n";
  }
  break;
} //Row1
else if (A4==A5 && A5==A6 && A6!=' ')
{
  if (A4=='X')
  {
    cout<<"\n\n ~Winner is X~ \n\n";
  }
  else if (A4=='O')
  {
    cout<<"\n\n ~Winner is O~ \n\n";
  }
  break;
} //Row2
else if (A7==A8 && A8==A9 && A9!=' ')
{
  if (A7=='X')
  {
    cout<<"\n\n ~Winner is X~ \n\n";
  }
  else if (A7=='O')
  {
    cout<<"\n\n ~Winner is O~ \n\n";
  }
  break;
} //Row3
else if (A1==A4 && A4==A7 && A7!=' ')
{
  if (A7=='X')
  {
    cout<<"\n\n ~Winner is X~ \n\n";
  }
  else if (A7=='O')
  {
    cout<<"\n\n ~Winner is O~ \n\n";
  }
  break;
} //Col1
else if (A2==A5 && A5==A8 && A8!=' ')
{
  if (A2=='X')
  {
    cout<<"\n\n ~Winner is X~ \n\n";
  }
  else if (A2=='O')
  {
    cout<<"\n\n ~Winner is O~ \n\n";
  }
  break;
} //Col2
else if (A3==A6 && A6==A9 && A9!=' ')
{
  if (A3=='X')
  {
    cout<<"\n\n ~Winner is X~ \n\n";
  }
  else if (A3=='O')
  {
    cout<<"\n\n ~Winner is O~ \n\n";
  }
  break;
} //Col3
else if (A1==A5 && A5==A9 && A9!=' ')
{
  if (A1=='X')
  {
    cout<<"\n\n ~Winner is X~ \n\n";
  }
  else if (A1=='O')
  {
    cout<<"\n\n ~Winner is O~ \n\n";
  }
  break;
} //Diagonal 1
else if (A3==A5 && A5==A7 && A7!=' ')
{
  if (A7=='X')
  {
    cout<<"\n\n ~Winner is X~ \n\n";
  }
  else if (A7=='O')
  {
    cout<<"\n\n ~Winner is O~ \n\n";
  }
  break;
} //Diagonal 2
else
{
  if (j==9)
  {
    cout<<"\n\n ~Draw Match~ \n\n";
  }
}
         
         }//end while




}
}
}