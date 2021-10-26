#include <iostream> 
#include <cstdlib> // for exit()
#include <cctype>  // for tolower()

using namespace std;

class Month
{
public:
  //constructor to set month based on first 3 chars of the month name
  Month(char c1, char c2, char c3);   // done, debugged
  //a constructor to set month base on month number, 1 = January etc.
  Month(int monthNumber);           // done, debugged
  //a default constructor (what does it do? nothing)
  Month(); // done, no debugging to do
  //an input function to set the month based on the month number
  void getMonthByNumber(istream& mIn); // done, debugged
  //input function to set the month based on a three character input
  void getMonthByName(istream& mIn);   // done, debugged
  //an output function that outputs the month as an integer,
  void outputMonthNumber(ostream& mOut); // done, debugged
  //an output function that outputs the month as the letters.
  void outputMonthName(ostream& mOut);   // done, debugged
  //a function that returns the next month as a month object
  Month nextMonth(); //
  //NB: each input and output function have a single formal parameter
  //for the stream
   
  int monthNumber();

private:
  int mnth;
};
int main(){
  Month month1, month2, nextMnth;
  

  cout << "Enter the month by number: ";
  month1.getMonthByNumber(cin);

  cout << "\nThe number of the current month is: ";
  month1.outputMonthNumber(cout);
  cout << "The current month by char is: ";
  month1.outputMonthName(cout);
  cout << "\n\nThe number of the next month is : ";
  nextMnth = month1.nextMonth();
  nextMnth.outputMonthNumber(cout);
  cout << "The next month by char is: ";
  nextMnth.outputMonthName(cout);
  cout << endl;

  cout << "Enter the month by the first 3 leters: ";
  month2.getMonthByName(cin);
  cout << "\nThe number of the current month is: ";
  month2.outputMonthNumber(cout);
  cout << "The current month by char is: ";
  month2.outputMonthName(cout);
  cout << "\n\nThe number of the next month is : ";
  nextMnth = month2.nextMonth();
  nextMnth.outputMonthNumber(cout);
  cout << "The next month by char is: ";
  nextMnth.outputMonthName(cout);
  cout << "\n";

  return 0;
}
Month::Month(char c1, char c2, char c3){

  if(c1 == 'j' && c2 == 'a' && c3 == 'n'){
    mnth = 1;
  }
  else if(c1 == 'f' && c2 == 'e' && c3 == 'b'){
    mnth = 2;
  }
  else if(c1 == 'm' && c2 == 'a' && c3 == 'r'){
    mnth = 3;
  }
  else if(c1 == 'a' && c2 == 'p' && c3 == 'r'){
    mnth = 4;
  }
  else if(c1 == 'm' && c2 == 'a' && c3 == 'y'){
    mnth = 5;
  }
  else if(c1 == 'j' && c2 == 'u' && c3 == 'n'){
    mnth = 6;
  }
  else if(c1 == 'j' && c2 == 'u' && c3 == 'l'){
    mnth = 7;
  }
  else if(c1 == 'a' && c2 == 'u' && c3 == 'g'){
    mnth = 8;
  }
  else if(c1 == 's' && c2 == 'e' && c3 == 'p'){
    mnth = 9;
  }
  else if(c1 == 'o' && c2 == 'c' && c3 == 't'){
    mnth = 10;
  }
  else if(c1 == 'n' && c2 == 'o' && c3 == 'v'){
    mnth = 11;
  }
  else if(c1 == 'd' && c2 == 'e' && c3 == 'c'){
    mnth = 12;
  }
  else{
    cout << c1 << c2 << c3 << " is not a valid month\n";
    exit(1);
  }
}
Month::Month( int monthNumber){
  if(monthNumber < 1 || monthNumber > 12){
    cout << monthNumber << " is not a valid month\n";
    exit(1);
  }
  else{
    mnth = monthNumber;
  }
}
Month::Month(){
}
void Month::getMonthByNumber(istream& mIn){
  mIn >> mnth;
  if(mnth < 1 || mnth >12){
    cout << mnth << " is not a valid month\n";
    exit(1);
  }
}
void Month::getMonthByName(istream& mIn){
  char c1, c2, c3;
  mIn >> c1 >> c2 >> c3;
  c1 = tolower(c1);
  c2 = tolower(c2);
  c3 = tolower(c3);
  if(c1 == 'j' && c2 == 'a' && c3 == 'n'){
    mnth = 1;
  }
  else if(c1 == 'f' && c2 == 'e' && c3 == 'b'){
    mnth = 2;
  }
  else if(c1 == 'm' && c2 == 'a' && c3 == 'r'){
    mnth = 3;
  }
  else if(c1 == 'a' && c2 == 'p' && c3 == 'r'){
    mnth = 4;
  }
  else if(c1 == 'm' && c2 == 'a' && c3 == 'y'){
    mnth = 5;
  }
  else if(c1 == 'j' && c2 == 'u' && c3 == 'n'){
    mnth = 6;
  }
  else if(c1 == 'j' && c2 == 'u' && c3 == 'l'){
    mnth = 7;
  }
  else if(c1 == 'a' && c2 == 'u' && c3 == 'g'){
    mnth = 8;
  }
  else if(c1 == 's' && c2 == 'e' && c3 == 'p'){
    mnth = 9;
  }
  else if(c1 == 'o' && c2 == 'c' && c3 == 't'){
    mnth = 10;
  }
  else if(c1 == 'n' && c2 == 'o' && c3 == 'v'){
    mnth = 11;
  }
  else if(c1 == 'd' && c2 == 'e' && c3 == 'c'){
    mnth = 12;
  }
  else{
    cout << c1 << c2 << c3 << " is not a valid month\n";
    exit(1);
  }
}
void Month::outputMonthNumber(ostream& mOut){
  mOut << mnth << endl;
}
void Month::outputMonthName(ostream& mOut){
  switch(mnth){
    case 1:{
      mOut << "Jan";
      break;
    }
    case 2:{
      mOut << "Feb";
      break;
    }
    case 3:{
      mOut << "Mar";
      break;
    }
    case 4:{
      mOut << "Apr";
      break;
    }
    case 5:{
      mOut << "May";
      break;
    }
    case 6:{
      mOut << "Jun";
      break;
    }
    case 7:{
      mOut << "Jul";
      break;
    }
    case 8:{
      mOut << "Aug";
      break;
    }
    case 9:{
      mOut << "Sep";
      break;
    }
    case 10:{
      mOut << "Oct";
      break;
    }
    case 11:{
      mOut << "Nov";
      break;
    }
    case 12:{
      mOut << "Dec";
      break;
    }
  }
}
Month Month::nextMonth(){
  if(mnth < 12){
    mnth++;
  }
  else{
    mnth = 1;
  }
  return mnth;
}