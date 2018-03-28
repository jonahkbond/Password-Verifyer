//=========================================================
//Project 1 password verify automata
//Your name: Jonah Bond
//Complier:  G++
//File type: client program
//===========================================================

using namespace std;

#include <iostream>
#include <string>

//Purpose: the purpose of this program is to take in a string of characters from the user and verify that it has 2 upper case letters, 2 digits, 1 lowercase letter, 1 special character and has a length of 8-10 characters. The string must be accepted by an automata in order for it to be legal.

int main()
{
  //prompt user for input
  cout << "please enter your password" << endl;
 
  //optain input from user
  string input;
  cin >> input;

  //define veriables
  int state = 0;
  int uppercase = 0;
  int lowercase = 0;
  int digit = 0;
  int special = 0;
  int inputCount = 0;

  //create for loop to iterate throught the states
  for(int i=0; i < input.size();i++)
  {
    cout << "current state is: q" <<  state << endl;
    cout << "the input read is: " <<  input.at(i) << endl;
    cout << "|" << endl;
    cout << "|" << endl;
    cout << "V" << endl;
    state++;
    inputCount++;
    
    if(isupper(input.at(i)))
      {
	uppercase++;
      }
    else if(islower(input.at(i)))
      {
	lowercase++;
      }
    else if(isdigit(input.at(i)))
       {
	 digit++;
       }
    else if(ispunct(input.at(i)))
      {
      special++;
      }
  }
  if((uppercase >1) && (lowercase >0) && (digit>1) && (special>0) && (inputCount >7) && (inputCount<11))
    {
      cout << "the password read was: " <<input<<endl; 
      cout <<  "the password is valid and accepted" << endl;
    }
  else if(!(uppercase >1) || !(lowercase >0) || !(digit>1) || !(special>0) || !(inputCount >7) || !(inputCount<11))
    {
      cout << "the password read was: " << input << endl;
      cout << "the password is not valid and not accepted";
    }
}
