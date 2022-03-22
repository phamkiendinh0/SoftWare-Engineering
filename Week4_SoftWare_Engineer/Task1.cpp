#include <iostream>
#include <math.h>
using namespace std;




class CompINUm {
    private:
        double real;
        double imag;
    public:
        CompINUm() {

        }
        double getReal() {
            return this->real;
        }
        double getImag() {
            return this->imag;
        }
        CompINUm(double real, double imag) {
            this->real = real;
            this->imag = imag;
        }
        CompINUm operator - (CompINUm &a) {
            double realTemp = this->getReal()- a.getReal();
            double imagTemp = this->getImag() - a.getImag();
            return CompINUm(realTemp, imagTemp);      
        }

        CompINUm operator - (double a) {
            if (a < this->getReal()) {
                double realTemp = this->getReal() - a;
                return CompINUm(realTemp, this->getImag());      
            }
            else {
                double realTemp = a - this->getReal();
                return CompINUm(realTemp,this->getImag());
            }
        }

        CompINUm operator -- (int num) {
            return CompINUm(this->getReal(),this->getImag());   
        }
        CompINUm operator -- () {
            double temp = (this->getReal()) - 1;
            return CompINUm(temp,this->getImag());
        }
        friend double returnAbs(CompINUm &a);
};

double returnAbs(CompINUm &a) {
    return abs(a.getReal());
}

int main() {



    return 0;
}