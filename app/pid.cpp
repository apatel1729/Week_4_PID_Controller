/* 
* @file pid.cpp
* @Auther Yash Shah (Driver),  Ashish Patel (Navigator)
* @version 1.0
* @brief Definition of PIDController class methods
* @copyright MIT License (c) 2018  
*/

#include <iostream>
#include "pid.hpp"

/**
 * @brief PIDController constructor
 * @param none
 * @return none 
 */
PIDController::PIDController(void) : Kp_(0.5), Ki_(0.001), Kd_(0.01),
                                    time_interval_(0.05), previous_error_(0.0), 
                                    accumulation_error_(0.0) {
    std::cout << "Default constructor called" << std::endl;    
}

/**
 * @brief Parameterized PID Constructor
 * @param[1] Kp_ which is a proportional coefficient
 * @param[2] Ki_ which is a integral coefficient
 * @param[3] Kd_ which is a differential coefficient
 * @param[4] time_interval_ which is delta t
 * @return none
 */
PIDController::PIDController(double Kp, double Ki, double Kd, 
                            double time_interval) : Kp_(Kp), Ki_(Ki), Kd_(Kd),
                            time_interval_(time_interval), 
                            previous_error_(0.0), accumulation_error_(0.0) {
    std::cout << "Parameterized constructor called" << std::endl;
}
/**
 * @brief compute method 
 * @param[1] target_velocity, which is Set Point(SP)
 * @param[2] actual_velocity, which is Process Value (PV)
 * @return double
 */
double PIDController::compute(double target_velocity, double actual_velocity) {
    // TODO: Step 1: Check the Class Diagram and note down the member 
    //               variables and functions
    //       Step 2: Follow the green blocks from Activity Diagram 
    //               to write the code for this method
    //       Step 3: After Writing the method, build it and verify 
    //               your implementation   
}
