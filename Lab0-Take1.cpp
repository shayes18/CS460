/***********************************************************************
* Program:
*    Lab 0, Take 1
*    Brother Jones, CS460
* Author:
*    Sydney Palmer
* Summary: 
*    Counts the number of strings entered by the user at the command line
*    that have the first letter of the first word capitalized before a 
*    blank line is entered by the user.
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Has user enter in strings and counts how many of the lines start
 * with upper-case letters. Outputs how many lines had upper-case letters.
 ***********************************************************************/
int main()
{
   string str;
   //Keeps track of how many lines start with upper case letters.
   int upper = 0;
   while (!cin.fail())
   {
      cout << "Enter a string: ";
      getline(cin, str);
      if (str.empty())
      {
         break;
      }
      //If the line starts with any capital letter, increment upper
      if (str[0] >= 'A' && str[0] <= 'Z')
      {
         upper++;
      }
   }
   if (upper < 1)
   {
      cout << "No strings starting with an upper case letter were seen.\n";
   }
   else if (upper == 1)
   {
      cout << "One string starting with an upper case letter was seen.\n";
   }
   else if (upper > 1)
   {
      cout << "You entered " << upper 
           << " strings that started with an upper case letter.\n";
   }
}