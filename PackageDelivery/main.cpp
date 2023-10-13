#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include "TruckInventory.hpp"

int main()
{
    std::cout << "Hellow owrld1\n";
    TruckInventory truckInventory;
    truckInventory.loadTrucks("Input.txt");
    std::cout << "Hellow owrld2\n";
    truckInventory.makeJourney(60.0);
    // std::cout << "Hellow owrld3\n";
    // truckInventory.unloadTrucks("Trip.txt");
    // std::cout << "Hellow owrld4\n";
    // return 0;
}
