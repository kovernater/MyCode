#include "VehicleAllocator.h"

VehicleAllocator::VehicleAllocator(size_t size)
{
    this->size = size;

    vehicles = new Vehicle *[size];
    for (size_t i = 0; i < size; i++)
    {
        std::cout << "Enter vehicle registration: ";
        MyString registration = read_string();

        std::cout << "\nEnter vehicle description: ";
        MyString description = read_string();

        std::cout << "\nEnter how many spaces dose the vehicle take: ";
        size_t space;
        std::cin >> space;

        this->vehicles[i] = createVehicle(registration.c_str(), description.c_str(), space);
    }
}
VehicleAllocator::~VehicleAllocator()
{
    delete[] this->vehicles;
}
Vehicle *VehicleAllocator::createVehicle(const char *registration, const char *description, std::size_t space)
{
    Vehicle *vehicleptr = new Vehicle(registration, description, space);

    return vehicleptr;
}

Vehicle &VehicleAllocator::operator[](size_t index)
{
#ifdef DEBUG
    assert(index < this->size)
#endif

        return *(this->vehicles[index]);
}
