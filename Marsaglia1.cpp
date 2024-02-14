#include <iostream>
#include <cmath>
//Middle square generator; von Neumann
int vonNumman(int sample,int m){
    return floor(pow(sample,2)*pow(10,-m))-floor(pow(sample,2)*pow(10,-3*m))*pow(10,2*m);
}

int main() {
    
    return 0;
}