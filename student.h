#include <iostream>
using namespace std;

class student{
private:

  string name;
  int age;

public:
  
  void set_name(string="Yme");
  void print_name();
  void set_age(int);
  int get_age();

};


void student::set_name (string n) {
  name = n ;
}

void student::set_age (int a) {
  age = a ;
}

void student::print_name () {
  std::cout<<"Name: "<<name<<endl;
}

int student::get_age () {
  return age ;
}
