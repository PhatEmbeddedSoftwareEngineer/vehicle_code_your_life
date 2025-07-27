#include "Truck.h"

double Truck::getLoadCapacity() const 
{
    return this->loadCapacity;
}

void Truck::setLoadCapacity(double tons)
{
    this->loadCapacity = tons;
}

void Truck::displayInfo() const 
{
    std::cout << "ID: " << this->getID() << "\n";
    std::cout << "Brand: " << this->getBrand() << "\n";
    std::cout << "Years: " << this->getYear() << "\n";
    std::cout << "Load Capacity: " << this->loadCapacity << "\n";
}

void Truck::saveToFile(std::ostream& os) 
{
    this->fileTruck.open("Truck.txt");
    this->fileTruck << "ID: " << this->getID() << "\n";
    this->fileTruck << "Brand: " << this->getBrand() << "\n";
    this->fileTruck << "Years: " << this->getYear() << "\n";
    this->fileTruck << "Load Capacity: " << this->loadCapacity << "\n";
}

