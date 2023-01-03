#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    int count =0;
    float sum=0,sumxsum=0,sd=0,mean;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        sumxsum += pow(atof(textline.c_str()),2);
        count++;
    }
    mean = sum/count;
    sd = sqrt(((1.0/count)*sumxsum)-pow(mean,2));
    cout << "Number of data = "<<count<<"\n";
    cout << setprecision(3);
    cout << "Mean = "<<mean<<"\n";
    cout << "Standard deviation = "<<sd;
}
