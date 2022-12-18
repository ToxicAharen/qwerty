#include <iostream>
#include <string>
using namespace std;
class Man
{
private:
    static int count; 
protected:
    string n_name;
    int n_age;
    string n_sex;
    int n_wight;


public:
    static int GetCount() { return count; }
  
    Man(const string& name, const int& age, const string& sex, const int& wight)
        : n_name(name), n_age(age), n_wight(wight), n_sex(sex)
    {
        count++;
    }

    string GetName() { return n_name; }
    int GetAge() { return n_age; }
    int GetWighr() { return n_wight; }
    virtual void Print()   
    {
        cout << n_name << ' ' << n_age << ' ' << n_sex << ' ' << n_wight << endl;
    }
};

class Student : public Man
{
private:
    int n_year;
public:
    Student(int year, const string& name, const int age, const string& sex, const int wight)
        :Man(name, age, sex, wight), n_year(year)
    {}
    int GetYear() { return n_year; }
    void AddYear(int addValue)
    {
        n_year += addValue;
    }
    void AddYear()
    {
        n_year++;
    }

    void Print()
    {
        cout << n_year << ' ';
        Man::Print();
    }
};
int Man::count = 0; 
int main()
{
    const int N = 2;
    Man* pers[N];
    for (int i = 0; i < N; i++)
    {
        int year, wight, age;
        string name, sex;
        cout << "Enter name age sex weight age:" << endl;
        cin >> name >> age >> sex >> wight >> year;
        pers[i] = new Student(year, name, age, sex, wight); 
        cout << "Count=" << pers[i]->GetCount() << endl; 
    for (int i = 0; i < N; i++)
        pers[i]->Print();
    Student* s1 = static_cast<Student*>(pers[0]); 
    s1->AddYear(2);
    cout << "New age of " << s1->GetName() << " = "
        << s1->GetAge() << endl;
    for (int i = 0; i < N; i++)
        delete pers[i]; 
    return 0;
}