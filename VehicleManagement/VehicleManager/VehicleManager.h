#ifndef VehicleManager_h
#define VehicleManager_h

#include <vector>
#include <memory>
#include <string>
#include "Vehicle.h"

class VehicleManager {
private:
    std::vector<std::shared_ptr<Vehicle>> vehicles;

public:
    void addVehicle(std::shared_ptr<Vehicle> v);
    void displayAll() const;
    void searchByBrand(const std::string& brand) const;
    void findById(int id) const;
    void sortByYear();
    void sortByBrand();
    void deleteByID(int id);
    void saveToFile(const std::string& filename) const;
    void loadFromFile(const std::string& filename);
};
