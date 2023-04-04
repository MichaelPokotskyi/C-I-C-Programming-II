//
// Michael Pokotskyi U09662201
// pokotskyi.m@gmail.com
// C I C++ Programming II
// C1 170379 Raymond L. Mitchell
// 3/28/2023
// C2A1E7_Employee.h
// Win10
// Visual C++ 2022, ISO C++ 17
// Assignment #1 C2A1E7 (C)
// Employee definition, member function prototypes and definitions.

// Include guard to avoid multiple includes
#ifndef C2A1E7_EMPLOYEE_H
#define C2A1E7_EMPLOYEE_H

class Employee {
private:
    // class variables
    char *name_;
    int age_;
    float raise_;
    double salary_;
public:
    // setters
    void Set(const char *ptr);
    // default argument value 25
    void Set(int age = 25) {
        age_ = age;
    }
    void Set(const float &raise) {
        raise_ = raise;
    }
    void Set(const double *salary) {
        salary_ = *salary;
    }
    // getters
    double Get(double *salary) const;
    char *Get(char **name) const {
        *name = name_;
        return (char *)*name;
    }
    int Get(int &age) const {
        age = age_;
        return age;
    }
    float &Get(float &raise) const {
        raise = raise_;
        return (float &)raise;
    }
};
//implemented outside the class definition
inline double Employee::Get(double *salary) const {
    *salary = salary_;
    return *salary;
}
#endif // C2A1E7_EMPLOYEE_H