#include <string>
#include <iostream>
#include <fstream>
#include "define.h"

class Vehicle {
protected:
    uint32 id;
    std::string brand;
    uint32 year;

public:
    Vehicle() = default;
    Vehicle(uint32 id=1, const std::string& brand = std::string("no brand"), int year = 0) : id(id), brand(brand), year(year){}
    virtual ~Vehicle() = default;

    void setID(uint32 id);
    uint32 getID() const;

    void setBrand(const std::string& brand);
    std::string getBrand() const;

    void setYear(uint32 year);
    uint32 getYear() const;

    virtual void displayInfo() const = 0;
    virtual void saveToFile(std::ostream& os) = 0;
};
