class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin = celsius + 273.15;
        double f = (celsius * 1.80) + 32.00;

        vector<double> ans;
        ans.push_back(kelvin);
        ans.push_back(f);

        return ans;
    }
};