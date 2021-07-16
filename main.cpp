#include <bits/stdc++.h>
using namespace std;


int carti[14]={1,2,3,4,5,6,7,8,9,10,12,13,14};

int curent=1,x,total_carti;
int continuare, dealer_points;

int dealer (int low, int high)
{
    dealer_points=rand() % (high - low) + low;
}


int main (){
dealer(10,21);
srand(time(0));

cout<<"Introduceti 1 pentru a incepe"<<endl;

cin>>x;

if (x==1)
    {  cout<<"Cartea "<<curent<<" este: ";


             x=rand()%15+1;
            cout<<x<<endl;
           curent ++;
           if(x==11)

               if(total_carti<=11)
                    total_carti+=10;
               else
                    total_carti+=1;

           if (x>10)
                total_carti+=10;
            else
                total_carti+=x;
            if(total_carti>21)
            {

                cout<<"Ghinion";
                return 0;

            }
                if(total_carti==21)
                {
                    cout<<"Blackjack";
                    return 0;
                }

            cout<<" Totalul: "<<total_carti<<endl;
            cout<<"Doresti o alta carte?"<<endl<<"   Apasa 1 pentru a continua, 0 pentru a te opri";
            cin>>continuare;
            caz:
            switch(continuare)
            {
                case 1:
                {
                    cout<<"Cartea "<<curent<<" este: ";


             x=rand()%15+1;
            cout<<x<<endl;
           curent ++;
           if (x>10)
                total_carti+=10;
            else
                total_carti+=x;
            if(total_carti>21)
            {

                cout<<"Ghinion, ai "<<total_carti<<" puncte.";

                break;

            }
                if(total_carti==21)
                {
                    cout<<"Blackjack, felicitari !";
                    break;
                }

            cout<<" Totalul: "<<total_carti<<endl;
            cout<<"Doresti o alta carte?"<<endl<<"   Apasa 1 pentru a continua, 2 pentru a te opri.";
            cin>>continuare;
                goto caz;
                }
                case 2:
                cout<<"Ai "<<total_carti<<" puncte. Dealer-ul are "<<dealer_points;
                if (dealer_points>total_carti)
                        cout<<endl<<"Ai pierdut";
                else
                    if (dealer_points==total_carti)
                        cout<<endl<<"Egalitate";
                else
                    cout<<endl<<"Felicitari, ai castigat !";
                break;

            }


    }cin>>x;
    return 0;}
