#include "MyString.h"
#include "Garage.h"

class VehicleAllocator
{
private:
    Vehicle **vehicles;
    size_t size = 0;
    Vehicle *createVehicle(const char *registration, const char *description, std::size_t space);

public:
    VehicleAllocator(size_t size);
    ~VehicleAllocator();
    Vehicle& operator[](size_t index);
};