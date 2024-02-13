#include <iostream>
#include <cmath>
//Middle square generator; von Neumann
int vonNumman(int sample,int m){
    return floor(pow(sample,2)*pow(10,-m))-floor(pow(sample,2)*pow(10,-3*m))*pow(10,2*m);
}

int main() {
    int seed;
    int step;
    int m;
    int i=1;
    int value;
    std::cout << "Imput seed \n";
    std::cin >> seed;
    std::cout << "Imput step \n";
    std::cin >> step;
    std::cout << "Imput m parameter \n";
    std::cin >> m;
    value= vonNumman(seed,m);
    while(i < step){
        // std::cout << value<<"\n";
        value = vonNumman(value,m);
        i++;
    }
    std::cout << value;
    return 0;
}
