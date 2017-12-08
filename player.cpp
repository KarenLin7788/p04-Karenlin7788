#include "player.h"

void player::setName(string firstname,string lastname)
{
first=firstname;
last=lastname;
}
string player::fullName()
{
string full;
full.append(first);
full.append(" ");
full.append(last);



return full;
}
//void printVector(vector<int>);
//bool rearrangement(int &,int&,int&);
