// Introductory11.cpp - displays ending balance
// Created/revised by <James Brown> on <9-19-2024>

#include <iostream>
using namespace std;

int main() {
  double saveBal = 0.0;
  double totDepo = 0.0;
  double totWith = 0.0;
  double depobal = 0.0;
  double finalbal = 0.0;

  cout <<"Enter savings balance: ";
  cin >>saveBal;

  cout <<"Enter the total deposits: ";
  cin >> totDepo;

  cout <<"Enter the total withdrawl: ";
  cin >> totWith;



  depobal = saveBal + totDepo;
  finalbal= depobal - totWith;

  cout<< "Final Balance is : $" << finalbal << endl;


  return 0;

} // end of main function