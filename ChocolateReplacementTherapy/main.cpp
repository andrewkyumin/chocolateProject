#include <string>
#include <sstream>
#include <iostream>
#include <cstdlib>
#define MAX_SIZE 29
#define REPLACED_STRING "chocolate"

using namespace std;
string keyWord;
string newString(string keyWord, string quote);
string myArray[MAX_SIZE];
string replacedString = REPLACED_STRING;
int chocolateLength =  int(replacedString.length());


int main() {
   string myArray[] = {
      "A little chocolate a day keeps the doctor at bay. - Marcia Carrington",
      "All you need is love. But a little chocolate now and then doesn't hurt. - Charles M. Schulz",
      "Anything is good if it's made of chocolate. - Jo Brand",
      "Caramels are only a fad. Chocolate is a permanent thing. - Milton Snavely Hershey",
      "Chemically speaking, chocolate really is the world's perfect food. Michael Levine",
      "Chocolate is a perfect food, as wholesome as it is delicious, a beneficent restorer of exhausted power. "
      "It is the best friend of those engaged in literary pursuits. - Justus Liebig",
      "Chocolate is medicinal. I just did another study that confirms it. - Michelle M. Pillow",
      "Chocolate is the only aromatherapy I need. - Jasmine Heiler",
      "Chocolate remedies adversity. - Jareb Teague",
      "Chocolate says 'I'm sorry' so much better than words. - Rachel Vincent",
      "Chocolate: The poor mans' champagne. - Daniel Worona",
      "Coffee and chocolate'the inventor of mocha should be sainted. - Cherise Sinclair",
      "I never met a chocolate I didn't like. - Deanna Troi",
      "If I die eating chocolate, I'll die happy. - Cailey Sims",
      "If there's no chocolate in Heaven, I'm not going. - Jane Seabrook",
      "It's strengthening, restorative, and apt to repair decayed strength and make people strong. - Louis Lemery",
      "Look, there's no metaphysics on earth like chocolates. - Fernando Pessoa",
      "Nine out of ten people like chocolate. The tenth person always lies. - John Q. Tullius",
      "Other things are just food. But chocolate's chocolate. - Patrick Skene Catling",
      "Remember the days when you let your child have some chocolate if he finished his cereal? Now, chocolate is one of the cereals. - Robert Orben",
      "Strength is the capacity to break a Hershey bar into four pieces with your bare hands, and then eat just one of the pieces. - Judith Viorst",
      "The greatest tragedies were written by the Greeks and Shakespeare. Neither knew chocolate. - Sandra Boynton",
      "The superiority of chocolate, both for health and nourishment, will soon give it the same preference over tea and coffee in America which it has in Spain. - Thomas Jefferson",
      "There is nothing better than a friend, unless it is a friend with chocolate. - Linda Grayson",
      "What use are cartridges in battle? I always carry chocolate instead. - George Bernard Shaw",
      "What you see before you, my friend, is the result of a lifetime of chocolate. - Katharine Hepburn",
      "When we don't have the words chocolate can speak volumes. - Joan Bauer",
      "Who cares about falling in love. I'd rather fall in chocolate. - Tori Mason",
      "Your hand and your mouth agreed many years ago that, as far as chocolate is concerned, there is no need to involve your brain. - Dave Barry,"
   };

   // generate random int for array
   int randomInt = (rand() % 29);


   cout << "Enter a clever noun (or phrase): ";
   getline(cin, keyWord);

   string quote = myArray[randomInt];

   cout << newString(keyWord, quote) << endl << endl;
}

string newString(string keyWord, string quote) {
   string theString = "";
   int stringLength = int(quote.length());

   for (int q = 0; q < stringLength; q++) {
      if (quote[q] == replacedString[0]
          && quote[q+1] == replacedString[1]
          && quote[q+2] == replacedString[2]
          && quote[q+3] == replacedString[3]
          && quote[q+4] == replacedString[4]
          && quote[q+5] == replacedString[5]
          && quote[q+6] == replacedString[6]
          && quote[q+7] == replacedString[7]
          && quote[q+8] == replacedString[8]) {
            theString += keyWord;
            q += 8;
      }
      else {
         theString += quote[q];
      }

   }

   return theString;
}


