/***********************************************************************
* Program:
*    Lab 0, Take 2
*    Brother Jones, CS460
* Author:
*    Sydney Palmer
* Summary: 
*    Counts the number of strings entered by the user at the command line
*    that have the first letter of the first word capitalized before a 
*    blank line is entered by the user.
************************************************************************/

/************************************************************************
*
* Changes made to my code for the re-submission:
*   - Changed variable upper to upperCount
*   - Comments were added
*
*************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Has user enter in strings and counts how many of the lines start
 * with upper-case letters. Outputs how many lines had upper-case letters.
 ***********************************************************************/
int main()
{
   string str;
   //Used to track how many lines start with a capital letter
   int upperCount = 0;

   while (!cin.fail())
   {
      cout << "Enter a string: ";
      getline(cin, str);
      //As long as there's input (and not an empty line), go.
      //Otherwise break out of the loop
      if (str.empty())
      {
         break;
      }
      if (str[0] >= 'A' && str[0] <= 'Z')
      {
         //Another line started with a capital letter; increase upperCount
         upperCount++;
      }
   }
   if (upperCount < 1)
   {
      cout << "No strings starting with an upper case letter were seen.\n";
   }
   else if (upperCount == 1)
   {
      cout << "One string starting with an upper case letter was seen.\n";
   }
   else if (upperCount > 1)
   {
      cout << "You entered " << upperCount 
           << " strings that started with an upper case letter.\n";
   }
}