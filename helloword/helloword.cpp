#include <iostream>
using namespace std;
void func4() {
 cout << "hi i mfunction 4" << endl;
}
void func3() {
  func4();
}
void func2() {
  func3();
}
void func1() {
  func2();
}
int main() {

 func1();

  return 0;
}

/*
 git config --global user.email "guemrifathi92@gmail.com"
  git config --global user.name "GUMRI"
*/
