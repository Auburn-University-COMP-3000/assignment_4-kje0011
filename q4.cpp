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
  Month( int monthNumber);           // done, debugged
  //a default constructor (what does it do? nothing)
  Month(); // done, no debugging to do
  //an input function to set the month based on the month number
  void getMonthByNumber(istream&); // done, debugged
  //input function to set the month based on a three character input
  void getMonthByName(istream&);   // done, debugged
  //an output function that outputs the month as an integer,
  void outputMonthNumber(ostream&); // done, debugged
  //an output function that outputs the month as the letters.
  void outputMonthName(ostream&);   // done, debugged
  //a function that returns the next month as a month object
  Month nextMonth(); //
  //NB: each input and output function have a single formal parameter
  //for the stream
   
  int monthNumber();

private:
  int mnth;
};


int Month::monthNumber(){
  return mnth;
}

Month Month::nextMonth() {
  int nextMonth = mnth + 1;
  if (nextMonth == 13) 
    nextMonth =1;
  return Month(nextMonth);
}
Month::Month(int monthNumber){
  mnth = monthNumber;
}
void Month::outputMonthNumber(ostream& out) {
  out << mnth;
}
void Month::outputMonthName(ostream& out){
  if (1 == mnth) out << "Jan";
  else if (2 == mnth) out << "Feb";
  else if (3 == mnth) out << "Mar";
  else if (4 == mnth) out << "Apr";
  else if (5 == mnth) out << "May";
  else if (6 == mnth) out << "Jun";
  else if (7 == mnth) out << "Jul";
  else if (8 == mnth) out << "Aug";
  else if (9 == mnth) out << "Sep";
  else if (10 == mnth) out << "Oct";
  else if (11 == mnth) out << "Nov";
  else if (12 == mnth) out << "Dec";
}
void error(char c1, char c2, char c3){
  cout << endl << c1 << c2 << c3 << " is not a month. \n";
  
}
void error(int n){
  cout << endl << n << " is not a month number.\n";
  
}
void Month::getMonthByNumber(istream& in){
  in >> mnth;
}
void Month::getMonthByName(istream& in) {
  char c1, c2, c3;
  in >> c1 >> c2 >> c3;
  c1 = tolower(c1);
  c2 = tolower(c2);
  c3 = tolower(c3);
  if ('j' == c1)
    if('a' == c2)
      mnth = 1;
  else 
    if('u' == c2)
      if ('n' == c3)
          mnth = 6;
      else if ('l' == c3)
        mnth =7;
      else error(c1,c2,c3);
    else error(c1,c2,c3);
  else
    if('f' == c1)
      if('e' == c2)
        if('b' == c3)
          mnth = 2;
        else error(c1,c2,c3);
      else error(c1,c2,c3);
  else
    if ('m' == c1)
      if('a' == c2)
        if('y'==c3)
          mnth = 5;
        else
          if('r'==c3)
            mnth = 3;
          else error(c1,c2,c3);
        else error(c1,c2,c3);
      else
        if('a'==c1)
          if('p'==c2)
            if('r'==c3)
              mnth=4;
            else error(c1,c2,c3);
          else
            if('u'==c2)
              if('g'==c3)
                mnth=8;
              else error(c1,c2,c3);
            else error(c1,c2,c3);
      else
        if('s'==c1)
          if('e'==c2)
            if('p'==c3)
              mnth=9;
            else error(c1,c2,c3);
          else error(c1,c2,c3);
      else 
        if('o'==c1)
          if('c'==c2)
            if('t'==c3)
              mnth=10;
            else error(c1,c2,c3);
          else error(c1,c2,c3);
      else 
        if('n'==c1)
          if('o'==c2)
            if('v'==c3)
              mnth=11;
            else error(c1,c2,c3);
          else error(c1,c2,c3);
      else
        if('d'==c1)
          if('e'==c2)
            if('c'==c3)
              mnth=12;
            else error(c1,c2,c3);
          else error(c1,c2,c3);
}
  Month::Month(char c1, char c2, char c3) {
    c1 = tolower(c1);
    c2 = tolower(c2);
    c3 = tolower(c3);
    if ('j' == c1)
      if('a' == c2)
        mnth = 1;
      else if('u' == c2)
        if ('n' == c3)
          mnth = 6;
      else if ('l' == c3)
        mnth =7;
      else error(c1,c2,c3);
    else error(c1,c2,c3);
  else if('f' == c1)
    if('e' == c2)
      if('b' == c3)
        mnth = 2;
      else error(c1,c2,c3);
    else error(c1,c2,c3);
  else
    if ('m' == c1)
      if('a' == c2)
        if('y'==c3)
          mnth = 5;
        else if('r' == c3)
          mnth = 3;
        else error(c1,c2,c3);
    else error(c1,c2,c3);
      else
        if('a'==c1)
          if('p'==c2)
            if('r'==c3)
              mnth=4;
            else error(c1,c2,c3);
          else
            if('u'==c2)
              if('g'==c3)
                mnth=8;
              else error(c1,c2,c3);
            else error(c1,c2,c3);
      else
        if('s'==c1)
          if('e'==c2)
            if('p'==c3)
              mnth=9;
            else error(c1,c2,c3);
          else error(c1,c2,c3);
      else 
        if('o'==c1)
          if('c'==c2)
            if('t'==c3)
              mnth=10;
            else error(c1,c2,c3);
          else error(c1,c2,c3);
      else 
        if('n'==c1)
          if('o'==c2)
            if('v'==c3)
              mnth=11;
            else error(c1,c2,c3);
          else error(c1,c2,c3);
      else
        if('d'==c1)
          if('e'==c2)
            if('c'==c3)
              mnth=12;
            else error(c1,c2,c3);
          else error(c1,c2,c3);
  }
Month::Month(){


}

int main(){
  cout << "test construstor" << endl;
  Month m;
  m = Month('j','a','n');
  m.outputMonthNumber( cout ); cout << " ";
  m.outputMonthName(cout); cout << " \n";
  m = Month('f','e','b');
  m.outputMonthNumber( cout ); cout << " ";
  m.outputMonthName(cout); cout << " \n";
  m = Month('m','a','r');
  m.outputMonthNumber( cout ); cout << " ";
  m.outputMonthName(cout); cout << " \n";
  m = Month('a','p','r');
  m.outputMonthNumber( cout ); cout << " ";
  m.outputMonthName(cout); cout << " \n";
  m = Month('m','a','y');
  m.outputMonthNumber( cout ); cout << " ";
  m.outputMonthName(cout); cout << " \n";
  m = Month('j','u','n');
  m.outputMonthNumber( cout ); cout << " ";
  m.outputMonthName(cout); cout << " \n";
  m = Month('j','u','l');
  m.outputMonthNumber( cout ); cout << " ";
  m.outputMonthName(cout); cout << " \n";
  m = Month('a','u','g');
  m.outputMonthNumber( cout ); cout << " ";
  m.outputMonthName(cout); cout << " \n";
  m = Month('s','e','p');
  m.outputMonthNumber( cout ); cout << " ";
  m.outputMonthName(cout); cout << " \n";
  m = Month('o','c','t');
  m.outputMonthNumber( cout ); cout << " ";
  m.outputMonthName(cout); cout << " \n";
  m = Month('n','o','v');
  m.outputMonthNumber( cout ); cout << " ";
  m.outputMonthName(cout); cout << " \n";
  m = Month('d','e','c');
  m.outputMonthNumber( cout ); cout << " ";
  m.outputMonthName(cout); cout << " \n";

  cout << "test month(int)" << endl;
  int i=1;
  while (i <=12){
    Month mo(i);
    mo.outputMonthNumber( cout ); cout << " ";
    mo.outputMonthName(cout); cout << " \n";
    i++;
  }

  Month mo;
  

  cout << "test getMonthByName" << endl;
  i=1;
  
  while(i <= 12){
    mo.getMonthByName(cin);
    mo.outputMonthNumber( cout ); cout << " ";
    mo.outputMonthName(cout); cout << " \n";
    i++;
  }


  cout << "test getMonthByNumber" << endl;
  i=1;
  while (i<=12){
    mo.getMonthByNumber(cin);
    mo.outputMonthNumber( cout ); cout << " ";
    mo.outputMonthName(cout); cout << " \n";
    i++;
    
  }

}
