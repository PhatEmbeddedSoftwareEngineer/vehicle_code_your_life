cmake_minimum_required(VERSION 3.10)
project(VehicleManagement)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_subdirectory(VehicleManager)
add_subdirectory(Truck) 
add_subdirectory(Car)
add_subdirectory(Motobike)  
add_subdirectory(CommandLineInterface)
add_subdirectory(Interfaces)
add_subdirectory(App)

add_executable(VehicleManagementApp main.cpp)
target_link_directories(
    VehicleManager
    Truck
    Car
    Motobike
    CommandLineInterface
    Interfaces
)