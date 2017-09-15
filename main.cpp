#include <iostream>
#include <fstream>

using namespace std;

void longestWordCalculation();

int main()
{

    longestWordCalculation();

    return 0;
}

void longestWordCalculation(){

   ifstream read("Example.txt");

   string longestWord = "I";
   string checkingWord;

    while(read){

        read >> checkingWord;

        if(checkingWord.length() > longestWord.length()){

            longestWord = checkingWord;

        }

    }

   cout << "The biggest, or one of the biggest word in the text is: " <<longestWord;

}
