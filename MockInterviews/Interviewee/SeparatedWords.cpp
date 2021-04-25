//Date: 4/19/2020

#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> SeparatedWords(string str)
{
 vector<string> NormalOrder;
 
 //Split the string here.
 string AppendingString;
 size_t Position = 0, OrigionalPosition = 0;
 
 cout << "Origional string: " << str << endl;
 
 while(true)
 {
 cout << str.find(' ', OrigionalPosition) << endl;
 if(str.find(' ', Position) == string::npos)
 break;
 Position = str.find(' ', OrigionalPosition);
 AppendingString = str.substr(OrigionalPosition, Position);
 NormalOrder.push_back(AppendingString);
 OrigionalPosition = Position+1;
 }
 for(int i=0; i<NormalOrder.size();i++)
 cout << NormalOrder[i];
 cout << "" << endl;
 return NormalOrder;
}
string NewString(vector<string> NormalOrder)
{
 string ReverseOrder;
 for(unsigned i = NormalOrder.size(); i>0; i--)
 {
 ReverseOrder.append(NormalOrder[i]);
 //ReverseOrder.append(" ");
 }
 return ReverseOrder;
}
string reverseWordsInString(string str) {
 // Write your code here.
 string nullstring;
 vector<string> NormalOrder = SeparatedWords(str);
 return nullstring;
 string ReversedString = NewString(NormalOrder);
 cout << ReversedString << endl;
 return ReversedString;
}
