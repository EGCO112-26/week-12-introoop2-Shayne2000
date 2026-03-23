#include <iostream>
using namespace std;

#include "student.h"
#define N 3
int main(int argc, char* argv[]) {

  int N2 = (argc-1)/2 ;

  student a[N],b[N2];
  // Set age and set name for the first two ppl
  int i,age;
  string n;
  int d ;
  //  // 1. Ask for N names and N age using cin
  //  for (int i = 0 ; i < N ; i++ ) {
  //   std::cout<<"Name? : "; std::cin>>n;
  //   a[i].set_name(n);

  //   std::cout<<"Age? : "; std::cin>>d;
  //   a[i].set_age(d);
  //  }
 
  
 
  // //2. Print name and age of all N ppl
  // for (int i = 0 ; i < N ; i++ ) {
  //   a[i].print_name();
  //   std::cout<<" "<<a[i].get_age()<<" years old."<<std::endl;
  // }
  
  
  
  // //3. Print name and age of 
  // //the youngest person
  // //Find what the age of the youngest person
  // std::cout<<std::endl;

  // d = 0;
  // for (int i = 0 ; i < N ; i++ ) {
  //   if (a[i].get_age() < a[d].get_age()) {
  //     d = i;
  //   }
  // }
 
  
  // // Print all info for the yougest person
 
  // a[d].print_name();
  // std::cout<<" "<<a[d].get_age()<<" years old is youngest."<<std::endl;



  
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  //4. Change input from cin to argv
  // std::cout<<std::endl<<N2<<std::endl;
  std::cout<<"Youngest student"<<std::endl;

  for (int i = 0 ; i < N2 ; i++ ) {
    b[i].set_name(argv[i*2+1]);
    b[i].set_age(atoi(argv[i*2+2]));
  }


  // for (int i = 0 ; i < N2 ; i++ ) {
  //   b[i].print_name();
  //   std::cout<<" "<<b[i].get_age()<<" years old."<<std::endl;
  // }

  d = 0;
  for (int i = 0 ; i < N2 ; i++ ) {
    if (b[i].get_age() < b[d].get_age()) {
      d = i;
    }
  }

  for (int i = 0 ; i < N2 ; i++ ) {
    if (b[d].get_age() == b[i].get_age()) {
      b[i].print_name();
      std::cout<<"Age: "<<b[i].get_age()<<endl;
    }
  }
  
  





  
 return 0;

    
  }
  
  


