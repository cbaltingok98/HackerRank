class Solution {
public:
    /**
     * @param a: 
     * @param b: 
     * @param h: 
     * @return: Return the area of trapezoid
     */
    double AreaOfTrapezoid(double a, double b, double h) {
        // Write your code here
        double *i, *j, *k;
        i = &a;
        j = &b;
        k = &h;
        
        return (*i + *j) * (*k / 2);
    }
};