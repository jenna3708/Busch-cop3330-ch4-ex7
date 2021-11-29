//chapter 4 exercise 7
//Jenna Busch

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int convert(string num1)
{
  //convert strings to int
  double convertedNum;
  if(num1 == "0" || num1 == "zero")
  {
    return convertedNum=0;
  }
  if(num1 == "1" || num1 == "one")
  {
    return convertedNum=1;
  }
  if(num1 == "-1" || num1 == "negativeone")
  {
    return convertedNum=-1;
  }
  if(num1 == "2" || num1 == "two")
  {
    return convertedNum=2;
  }
  if(num1 == "-2" || num1 == "negativetwo")
  {
    return convertedNum=-2;
  }
  if(num1 == "3" || num1 == "three")
  {
    return convertedNum=3;
  }
  if(num1 == "-3" || num1 == "negativethree")
  {
    return convertedNum=-3;
  }
  if(num1 == "4" || num1 == "four")
  {
    return convertedNum=4;
  }
  if(num1 == "-4" || num1 == "negativefour")
  {
    return convertedNum=-4;
  }
  if(num1 == "5" || num1 == "five")
  {
    return convertedNum=5;
  }
  if(num1 == "-5" || num1 == "negativefive")
  {
    return convertedNum=5;
  }
  if(num1 == "6" || num1 == "six")
  {
    return convertedNum=6;
  }
  if(num1 == "-6" || num1 == "negativesix")
  {
    return convertedNum=-6;
  }
  if(num1 == "7" || num1 == "seven")
  {
    return convertedNum=7;
  }
  if(num1 == "-7" || num1 == "negativeseven")
  {
    return convertedNum=-7;
  }
  if(num1 == "8" || num1 == "eight")
  {
    return convertedNum=8;
  }
  if(num1 == "-8" || num1 == "negativeeight")
  {
    return convertedNum=-8;
  }
  if(num1 == "9" || num1 == "nine")
  {
    return convertedNum=9;
  }
  if(num1 == "-9" || num1 == "negativenine")
  {
    return convertedNum=-9;
  }

  return 0;
}


int main() {
  cout << "Welcome to your mini calculator!\n\n";
  //0, 1, 2, 3, 4, 5, 6, 7, 8, 9 (valid numbers + neg)

  cout << "Please enter a single digit number followed by an operation \nfollowed by another single digit number\n";
  string num1;
  string num2;
  string op;
  int result; 
  int num1convt;
  int num2convt;

  cout << "number 1:";
  cin >> num1;

  cout << "operation:";
  cin >> op;

  cout << "number 2:";
  cin >> num2;
  
  //convert the numbers
  num1convt = convert(num1);
  num2convt = convert(num2);

  //perform the operation based on input
  if(op == "+")
  {
    result = num1convt + num2convt;
    cout << "result: "<< result;
  }
  else if(op == "-")
  {
    result = num1convt - num2convt;
    cout << "result: "<< result;
  }
  else if(op == "*")
  {
    result = num1convt*num2convt;
    cout << "result: "<< result;
  }
  else if(op == "/")
  {
    result = num1convt/num2convt;
    cout << "result: "<< result;
  }
  else
  {
    cout << "Entry is not valid.";
  }

  return 0;

} 