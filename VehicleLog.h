/*
 *  VehicleLog.h
 *
 *  COSC 052 Fall 2019
 *  Project #2
 *
 *  Due on: OCT 10, 2019
 *  Author: jsk142
 *
 *
 *  In accordance with the class policies and Georgetown's
 *  Honor Code, I certify that, with the exception of the
 *  class resources and those items noted below, I have neither
 *  given nor received any assistance on this project.
 *
 *  References not otherwise commented within the program source code.
 *  Note that you should not mention any help from the TAs, the professor,
 *  or any code taken from the class textbooks.
 */
 
 

 
#ifndef _COSC052_FALL2019_P2_VEHICLE_LOG_H_
#define _COSC052_FALL2019_P2_VEHICLE_LOG_H_
 
 
 
#include <iostream>
#include <vector>
#include "Vehicle.h"
#include "Exceptions.h"
 
using std::vector;
 
 
/****************************************************************************
 ****************************************************************************
 **                                                                        **
 **                 class VehicleLog declaration                           **
 **                                                                        **
 **                 This code is provided to students                      **
 **                 in COSC 052 Fall 2019 to use in                        **
 **                 part or in total for class projects.                   **
 **                 Students may use this code as their                    **
 **                 own, without any attribution.                          **
 **                                                                        **
 ****************************************************************************
 ****************************************************************************/
 
class VehicleLog
{
private:
     
    vector<Vehicle*> vehicles; 
public:
     
    VehicleLog();
     
    int getTotalPassengerCapacity() const;
    double getTotalCargoCapacity() const;
     
    void print( ostream& os = cout ) const;
    void read( string fileName );
     
    unsigned long size() const;
    
    Vehicle &at(unsigned long ndx);
     
    ~VehicleLog();
     
}; // END class VehicleLog
 
 
 
 
 

#endif /*  _COSC052_FALL2019_P2_VEHICLE_LOG_H_  */

