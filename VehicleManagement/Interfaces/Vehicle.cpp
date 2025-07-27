#include "Vehicle.h"

void Vehicle::setID(uint32 id)
{
    if(id < 0)
    {
        std::cout << "ID must more than zero\n";
        return;
    }
    this->id = id;
}

uint32 Vehicle::getID() const
{
    return this->id;
}

void Vehicle::setBrand(const std::string& brand)
{
    this->brand = brand;
}

std::string Vehicle::getBrand() const 
{
    return this->brand;
}

void Vehicle::setYear(uint32 year)
{
    if(year < 0)
    {
        std::cout << "Year must more than zero" << std::endl;
        return;
    }
    this->year = year;
}

uint32 Vehicle::getYear() const 
{
    return this->year;
}



