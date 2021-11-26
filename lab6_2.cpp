#include <iostream>
#include<cmath>

using namespace std;
double deg2rad(double x){
    return x*(M_PI)/180;
}
double  rad2deg(double y){
    return y*(180/M_PI);
}
double findXComponent(double r, double q, double x, double y){
    double X1 = r*cos(x);
    double X2 = q*cos(y);
    return X1+X2;
}
double findYComponent(double r, double q, double x, double y){
    double Y1 = r*sin(x);
    double Y2 = q*sin(y);
    return Y1+Y2;
} 
double  pythagoras(double xcomp, double ycomp){
    return sqrt(pow(xcomp,2)+pow(ycomp,2));
}
void showResult(double vl, double vd){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << "\n";
    cout << "Length of the resultant vector = " << vl << "\n" << "Direction of the resultant vector (deg) = " << vd << "\n";
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << "\n";

}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
