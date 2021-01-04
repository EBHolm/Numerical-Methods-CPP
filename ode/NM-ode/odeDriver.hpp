//
//  Driver.hpp
//  NM-ode
//
//  Created by Emil Brinch Holm on 04/01/2021.
//

#ifndef Driver_hpp
#define Driver_hpp

#include <stdio.h>

#include "common.hpp"
#include "Stepper.hpp"
#include "Output.hpp"

class odeDriver {
public:
  odeDriver(Stepper* stepper);
  void Integrate();
  void StoreInitialValues();
  
  Stepper* stepper_;
  Output* output_;
  
  // Data
  std::vector<double> y;
  std::vector<double> dydx;
  double x, h;
  
  
private:
  static const int max_steps_ = 50000;
  
  
  // Output methods
  void OutputStart();
  void OutputPrint(int n_step);
  void OutputExit();
  
};





#endif /* Driver_hpp */
