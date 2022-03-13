///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file mqin.cpp
/// @version 1.0
///
/// @author Declan Campbell <declanc@hawaii.edu>
/// @date   13_Mar_2022
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Animal.h"

int main() {
    Animal myFirstAnimal = Animal( "Felis catus" );
    myFirstAnimal.setGender( MALE );
    myFirstAnimal.setWeight( 19 ); // @todo Refactor to include Unit of Measure
    myFirstAnimal.printInfo();
    return 0;
}
