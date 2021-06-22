#include <iostream>

int main() {

    int building_1[50];
    int building_2[50];
    int building_3[50];
    int building_4[50];
    int building_5[50];

    float avg;
    avg = (sizeof(building_1)/sizeof(building_1[0]) + sizeof(building_2)/sizeof(building_2[0]) + sizeof(building_3)/sizeof(building_3[0]) + sizeof(building_4)/sizeof(building_4[0]) + sizeof(building_5)/sizeof(building_5[0]))/5;
    std::cout << "Average number of floors is: " << avg << std::endl;
}
