#include <iostream>
#include <string>
#include "1.hpp"
int main()
{
    int choice;
hospital_data::Tree device = hospital_data::create();
std::string DeviceName;
    while (1)
    {
    ///bst::insert( device , "MRI" );
    std::cout <<"1.INSERT\n 2.DELETE\n 3.DISPLAY\n 4.SEARCH\n 5.EXIT\n Enter your choice"<< std::endl;
    std::cin>>choice;
    switch(choice)
    {
        case 1:
        std::cout <<"Enter the device name to insert"<< std::endl;
        std::cin>>DeviceName;
        hospital_data::insert( device , DeviceName );
        break;

    }
    }
}

