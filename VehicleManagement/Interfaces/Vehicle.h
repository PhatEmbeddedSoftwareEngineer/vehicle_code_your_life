#include <string>
#include <iostream>
#include <fstream>

class Vehicle {
protected:
    int id;
    std::string brand;
    int year;

public:
    Vehicle() = default;
    Vehicle(int id, const std::string& brand, int year);

    virtual ~Vehicle() = default;

    void setID(int id);
    int getID() const;

    void setBrand(const std::string& brand);
    std::string getBrand() const;

    void setYear(int year);
    int getYear() const;

    virtual void displayInfo() const = 0;
    virtual void saveToFile(std::ostream& os) const = 0;
};
