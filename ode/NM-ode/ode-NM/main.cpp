//
//  main.cpp
//  ode-NM
//
//  Created by Emil Brinch Holm on 04/01/2021.
//


#include "odeDriver.hpp"

int main() {

  // Choose which stepper to use
  Stepper* myStepper = new Stepper();
  
  
  // Generic driver
  odeDriver myOde(myStepper);
  myOde.Integrate();
  
  return 0;
}
