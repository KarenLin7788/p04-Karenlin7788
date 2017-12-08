//Author: Xinru Lin(Karen)
#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
#include<fstream>
#include<string>
#include"player.h"

using namespace std;

//Function Prototypes...
void printVector(vector<int>result);
bool rearrangement (int&HP,int&ATK,int&DEF);

int main()
{
        string firstName;
        string lastName;
        int HP=100;
        int ATK=20;
        int DEF=20;
        vector <int>result;
        player person;
        char response;
        char answer;
        do
        {
               HP=100;
               ATK=20;
               DEF=20;
                cout<<"Welcome to this little game!"<<endl;
                cout<<endl;
                cout<<"player,what is your name?"<<endl;

                cin>>firstName>>lastName;

                person.setName(firstName,lastName);

                cout<<"Saves "<<person.fullName()<<endl;
                cout<<endl;

                cout<<"Here is your initial status:";
                cout<<endl;
                cout<<endl;

                cout<<"HP(Health Point):100";
                cout<<endl;

                cout<<"ATK(Attack):20";
                cout<<endl;

                cout<<"DEF(Defense):20";
                cout<<endl;
                cout<<endl;

                cout<<"You are walking in a forest, and a bag with a question mark shows up, do you want to open it(Y) or not (N)?";

                cin>>response;
                cout<<endl;


                if(response=='Y'|| response=='y')
                {
                        cout<<"Congratulations!This is a lucky bag! Your status got update!"<<endl;
                        HP=HP+20;
                        result.push_back(HP);
                        ATK=ATK+2;
                        result.push_back(ATK);
                        DEF=DEF+2;
                        result.push_back(DEF);

                        printVector(result);



                }
                else if(response=='N'||response=='n')
                {
                        cout<<"Sorry, you just missed a chance to update your status";
                }
                else
                {
                        cout<<"You have to insert either 'Y' or 'N'to answer this question";  
                }


                if(response=='Q'||response=='q')
                {
                        return 0;
                }

                cout<<"There is a huge monster blocking your way home, it's the time to fight!!"<<endl;
                HP=HP-100;
                cout<<endl;

                rearrangement(HP,ATK,DEF);
                if(HP==0)
                {
                        cout<<"Sorry, since your HP=0,you lose.";
                }
                if(HP!=0)
                {
                        cout<<"Congratulations, you win!";
                        cout<<endl;
                        cout<<"Here is your final status:";
                        cout<<"HP: "<<HP;
                        cout<<endl;
                        cout<<"ATK: "<<ATK;
                        cout<<endl;
                        cout<<"DEF: "<<DEF;
                        cout<<endl;
                }


                cout<<"Do you want to play this game again? (Y)es or (N)o?"<<endl;
                cin>>answer;
        }
        while(answer=='Y'||answer=='y');

        ofstream myfile;
        myfile.open("result.txt");
        myfile<<"Congratulations, you are a warrior now!";
        myfile.close();

        return 0;
}


void printVector(vector<int> result)
{
        for(int i=0;i<result.size();i++)
        {
                cout<<"Here is your new status";
                cout<<endl;
                cout<<result[i]<<endl;
        }
        cout<<endl;
        return ;
}



bool rearrangement (int&HP,int&ATK,int&DEF)
{
        char response;
        if (response=='Y'||response=='y')
        {
                HP=HP-100;
                ATK=ATK+10;
                DEF=DEF+10;
                return HP!=0;
        }
        else if(response=='N'|| response=='n')
        {
                HP=HP-100;
                HP=0;
                return HP==0;
        }




}

