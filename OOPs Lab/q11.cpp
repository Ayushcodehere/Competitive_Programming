#include <iostream>
using namespace std;
class Regular
{
protected:
    double Basic_pay, DA, HRA, Gross;

public:
    Regular()
    {
        cout << "Enter Basic pay: ";
        cin >> Basic_pay;
        DA = 1.5 * Basic_pay;
        HRA = 0.2 * Basic_pay;
        Gross = Basic_pay + DA + HRA;
    }
};
class Contract
{
protected:
    double Pay_consolidated;
    int Contract_duration_months;

public:
    Contract()
    {
        cout << "Enter Pay consolidated: ";
        cin >> Pay_consolidated;
        cout << "Enter Contract duration months: ";
        cin >> Contract_duration_months;
    }
};
class Teacher : public Regular, public Contract
{
protected:
    int years_of_experience;

public:
    Teacher()
    {
        cout << "Number of years: ";
        cin >> years_of_experience;
    }
};
class Officer
{
protected:
    char grade;

public:
    Officer()
    {
        cout << "Grade: ";
        cin >> grade;
    }
};
class Staff : public Teacher, public Officer
{
protected:
    string id, phone;

public:
    Staff()
    {
        cout << "ID: ";
        cin >> id;
        cout << "Phone: ";
        cin >> phone;
    }
    void display()
    {
        cout << "\nThe details are:\n";
        cout << "Basic pay: " << Basic_pay << endl;
        cout << "DA: " << DA << endl;
        cout << "HRA: " << HRA << endl;
        cout << "Gross: " << Gross << endl;
        cout << "Pay consolidated: " << Pay_consolidated << endl;
        cout << "Contract duration months: " << Contract_duration_months << endl;
        cout << "Number of years: " << years_of_experience << endl;
        cout << "Grade: " << grade << endl;
        cout << "ID: " << id << endl;
        cout << "Phone: " << phone << endl;
    }
};
int main()
{
    Staff s;
    s.display();
}
