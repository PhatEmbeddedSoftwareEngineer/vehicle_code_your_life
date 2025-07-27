#include "Motobike.h"

int Motorbike::getEngineCapacity() const 
{
    return this->engineCapacity;
}


void Motorbike::setEngineCapacity(uint32 cc)
{
    this->engineCapacity = cc;
}

void Motorbike::displayInfo() const 
{
    std::cout << "Brand: " << this->getBrand() << "\n";
    std::cout << "ID: " << this->getID() << "\n";
    std::cout << "Year: " << this->getYear() << "\n";
    std::cout << "Engine Capacity: " << this->engineCapacity << "\n";

}

void Motorbike::saveToFile(std::ostream& os)  
{
    this->fileMotorBike.open("Motor Bike.txt");
    this->fileMotorBike <<"ID: " <<this->getID() << "\n";
    this->fileMotorBike << "Brand: " << this->getBrand() << "\n";
    this->fileMotorBike << "Years: " << this->getYear() << "\n";
    this->fileMotorBike << "Engine Capacity: " << this->engineCapacity << "\n";
    this->fileMotorBike.close();

}
