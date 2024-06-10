#include <iostream>
#include <cstdlib>  
#include <ctime>    
using namespace std;

int main() {

    srand(time(nullptr));

    

    int daysUntilExpiration = rand() % 12;

   
    if (daysUntilExpiration <= 10 && daysUntilExpiration > 5) {

        cout << "Your subscription will expire soon. Renew now!";
    }
    else if (daysUntilExpiration <= 5 && daysUntilExpiration > 1){

        cout << "Your subscription will expire in " << daysUntilExpiration << "days" << endl;
        cout << "Renew now and save 10%" << endl;
    }
    else if (daysUntilExpiration == 1) {
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%" << endl;
    }
    else if (daysUntilExpiration == 0) {
        cout << "Your subscription has expired" << endl;
    }
    else {
        cout << "You have an active subscription " << endl;
    }
    

    return 0;
}
