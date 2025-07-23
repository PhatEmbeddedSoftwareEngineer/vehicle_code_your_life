#include "Truck.h"

Truck::Truck(int id, const std::string& brand, int year, double loadCapacity) : id(id), brand(brand),year(year)
{}

double Truck::getLoadCapacity() const
{
    return loadCapacity;
}
void Truck::setLoadCapacity(double tons)
{
    loadCapacity = tons;
}

void Truck::displayInfo() const
{
    std::cout << "Truck ID: " << id << "\n"
              << "Brand: " << brand << "\n"
              << "Year: " << year << "\n"
              << "Load Capacity: " << loadCapacity << " tons\n";
}

