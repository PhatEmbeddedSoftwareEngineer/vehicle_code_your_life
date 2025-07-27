#include "Car.h"

uint32 Car::getSeatCount() const 
{
    return this->seatCount;
}

void Car::setSeatCount(uint32 count)
{
    this->seatCount = count;
} 

void Car::displayInfo() const 
{
    std::cout << "ID: " << this->id << "\n";
    std::cout << "Brand: " << this->getBrand() << "\n";
    std::cout << "Years: " << this->getYear() << "\n";
    std::cout << "Seat Count: " << this->seatCount << "\n";
}

void Car::saveToFile(std::ostream& os) 
{
    this->fileCar.open("Car.txt");
    this->fileCar << "ID: " << this->id << "\n";
    this->fileCar << "Brand: " << this->getBrand() << "\n";
    this->fileCar << "Years: " << this->getYear() << "\n";
    this->fileCar << "Seat Count: " << this->seatCount << "\n"; 
    this->fileCar.close();
}

