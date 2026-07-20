class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double Kelvin= celsius + (double)273.15;
        double Fahrenheit = celsius * 1.80 +32.00;
        return {Kelvin, Fahrenheit}; 
    }
};