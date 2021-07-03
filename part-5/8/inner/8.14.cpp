#include<iostream>

template<typename T> //template A
void ShowArray(T arr[], int n);

template<typename T> //template B
void ShowArray(T * arr[], int n);

struct debts
{
    char name[50];
    double amonth;
};

int main(void)
{
    using namespace std;
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };

    double * pd[3];
    //mr_E'deki yapıların uyelerine miktar belirleme:

    for(int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amonth;

        cout << "listing mr. e's ccounts of things:\n";
    //things is an array of int
        ShowArray(things, 6); //uses template A
    //pd is an array of pointers to double
        ShowArray(pd, 3); //uses template B (cok uzmanlasmıs)
    
    return 0;
}
template<typename T>
void ShowArray(T arr[], int n)
{
    using namespace std;
    cout << "template A\n";
    for(int i = 0; i < n; i++)
        cout << arr[i] << ' ';
    cout << endl;
}
template<typename T>
void ShowArray(T * arr[], int n)
{
    using namespace std;
    cout << "template B\n";
    for(int i = 0; i < n; i++)
        cout << *arr[i] << ' ';
    
    cout << endl;
}