// Find the volume of a sphere of radius r
#include <iostream>
#include <math.h>
#include <sstream>

double volume(double r){
    double result =  (4 * M_PI * pow(r,3))/3;
    return result;
}

int main(int argc, char **argv){

    std::istringstream ss(argv[1]);
    int x;
    if (!(ss >> x)) {
    std::cerr << "Invalid number: " << argv[1] << std::endl;
    } else if (!ss.eof()) {
    std::cerr << "Invalid characters after number: " << argv[1] << std::endl;
    } else{
        std::cout << volume(x) << std::endl;
    }
    return 0;
}