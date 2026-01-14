/**
 * @file hello.cpp
 * @author DESKTOP-4165BV6
 * @date 2026-01-13
 * @brief hello world
 * 
 * hello world and general practice
 */


#include <iostream>

using namespace std;


/**
 * looping hello
 *
 * @param int lou how many times to loop
 * @pre 
 * @return void prints to console
 * @post 
 * 
 */
void helloLoop(int lou);

int main() {
  cout << "Hello World!" << endl;

  cout << "How many hellos? ";
  int loo = 0;
  cin >> loo;

  helloLoop(loo);
  
  return 0;
}

void helloLoop(int lou) {
  for(int i = 0; i < lou; i++) {
    cout << "Hello " << i << endl;
  }
}
