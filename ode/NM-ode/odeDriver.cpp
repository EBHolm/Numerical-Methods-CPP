//
//  Driver.cpp
//  NM-ode
//
//  Created by Emil Brinch Holm on 04/01/2021.
//

#include "odeDriver.hpp"

odeDriver::odeDriver(Stepper* stepper)
: stepper_(stepper) {
  
}

/*


 */

void odeDriver::Integrate() {
  OutputStart();
  StoreInitialValues();
  
  for (int n_step = 0; n_step < max_steps_; n_step++) {
    stepper_->Step();
    
    OutputPrint(n_step);
    
    int end_criterion = 1;
    if (end_criterion) {
      OutputExit();
      return;
    }
  }
  
}

/*


 */

void odeDriver::StoreInitialValues() {

}

/*


 */

void odeDriver::OutputStart() {

}

/*


 */

void odeDriver::OutputPrint(int n_step) {

}

/*


 */

void odeDriver::OutputExit() {


}

/*


 */

