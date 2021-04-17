#include "MyString.h"
#include "VehicleAllocator.h"

constexpr int MAX = 100;
int main()
{
    size_t n;
    std::cout << "Enter the capacity of the garage: ";
    std::cin >> n;

    Garage garage(n);

    bool isRunning = true;
    int k;
    while (isRunning)
    {

        std::cout << "What would you like to do?\n";
        std::cout << "If you want to insert a vehicle press 1\n";
        std::cout << "If you want to erase a vehicle press 2\n";
        std::cout << "If you want to print the garage press 3\n";
        std::cout << "If you want to exit the program press any key other than 1, 2 or 3 \n";
        std::cin >> k;

        if (k == 1)
        {
            std::cout << "Enter how many vehicles you would like to add into the garage: ";
            size_t m;
            std::cin >> m;

            VehicleAllocator allocate_vehicles(m);

            for (size_t i = 0; i < m; i++)
            {
                garage.insert((allocate_vehicles[i]));
            }
        }
        else if (k == 2)
        {
            std::cout << "Enter how many vehicles you would like to erase from the garage: ";
            size_t m;
            std::cin >> m;

            for (size_t i = 0; i < m; i++)
            {
                std:: cout << "Enter registration: ";
                char *registration = read_string();
                garage.erase(registration);
            }
        }
        else if (k == 3)
        {
            std::cout << "***************GARAGE***************\n";
            garage.print();
            std::cout << "************************************\n";
        }
        else
        {
            isRunning = false;
        }
    }

    /*  while (isRunning)
    {
        std::cout << "What would you like to do?\n";
        std::cout << "If you want to insert a vehicle press 1\n";
        std::cout << "If you want to erase a vehicle press 2\n";
        std::cout << "If you want to exit the program press any key other than 1 or 2 \n";

        std::cin >> k;

        while (k == 1)
        {
            std::cout << "Enter vehicle registration: ";
            char *registration = read_string();

            std::cout << "\nEnter vehicle description: ";
            char *description = read_string();

            size_t size;
            std::cout << "\nEnter how many spaces dose the vehicle take: ";
            std::cin >> size;

            Vehicle vehicle(registration, description, size);
            garage.insert(vehicle);

            

            std::cout << "What would you like to do?\n";
            std::cout << "If you want to insert a vehicle press 1\n";
            std::cout << "If you want to erase a vehicle press 2\n";
            std::cout << "If you want to exit the program press any key other than 1 or 2 \n";

            std::cin >> k;
        }

        while (k == 2)
        {
            std::cout << "Enter vehicle registration: ";
            char *registration = read_string();

            garage.erase(registration);

            std::cout << "What would you like to do?\n";
            std::cout << "If you want to insert a vehicle press 1\n";
            std::cout << "If you want to erase a vehicle press 2\n";
            std::cout << "If you want to exit the program press any key other than 1 or 2 \n";

            std::cin >> k;
        }

        if (k != 1 || k != 2)
        {
            isRunning = false;
        }
    } */

    return 0;
}