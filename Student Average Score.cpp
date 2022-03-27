#include <iostream> 
using namespace std;

int main ()
{
    int grade;

    cout << "enter your score" << endl;
    cout << "-1 of exit" << endl;
    cin >> grade;
    
    int counter = 0;
    int sum = 0  ;
    while(grade != -1)
    {
        counter++;
        sum += grade;
        
    cout << "enter your score" << endl;
    cout << "-1 of exit" << endl;
    cin >> grade;
 
    }

    cout << "chapter summary\n___________\n";
    cout << "number student =  " << counter << endl;
    cout << "total score = " << sum << endl;
    cout << "student average score = " << static_cast<double> (sum) / counter << endl;

    return 0;

} 