 #include <iostream>
 #include <cmath>

using namespace std;

// function with return value
int add(int num, int num2, bool check){
    int val = num + num2;
    if (check){
        if (val >= 100 && !(val > 200)){
            cout << "Number is within allowed range!" << endl;
        }
    }


    return val;

}

// exponent function
int expo(int base, int power){
    int result = 1;
    for (int i=1; i<=power; i++){
        result *= base;
    }
    return result;
}

string day(int day_num){
    string day_name;

    // Switch cases

    switch(day_num){
    case 0:
        day_name = "Sunday";
        break;

    case 1:
        day_name = "Monday";
        break;

    case 2:
        day_name = "Tuesday";
        break;

    case 3:
        day_name = "Wednesday";
        break;

    case 4:
        day_name = "Thursday";
        break;

    case 5:
        day_name = "Friday";
        break;

    case 6:
        day_name = "Saturday";
        break;

    default:
        day_name = "404 : day not found ;)";

    return day_name;
        }
}

void guess(){
    int secret = 5;
    int guess;
    int try_no = 1;
    int limit = 5;
    while (guess != secret){
        if (try_no > limit){
            cout << "You lose! You ran out of tries..." << endl;
            break;
        }else{
            cout << "Enter your guess: ";
            cin >> guess;
            if (guess == secret){
                cout << "You Win!" << endl;
                break;
            }else{
                cout << "Wrong! guess again..." << endl;
            }
        }
        try_no++;
    }

}


// Classes
/*

To inherit a class into a new class:
    class newClass : public oldClass{
        ...
    }

*/
class phone{
    public:
        string model;
        int ram;
        int storage;
        int ref_rate;
        double disp_dim;
        bool five_g;



        bool High_ref(){
            if(ref_rate >= 120){
                return true;
            }
            return false;
        }


};

int main()
{
    int a = add(50, 50, true);
    cout << "Val: " << a << endl;

    // power function
    int v = pow(50,5);
    cout << v << endl;

    // max function
    cout << fmax(21, 88) << endl;

    // min function
    cout << fmin(21, 88) << endl;

    // user input
    string input;
    cout << "Enter a value: ";
    getline(cin, input);
    cout << input << endl;

    // array
    int bin_nums[] = {1, 2, 4, 8, 16, 36, 64, 128};
    bin_nums[19] = 256;
    cout << bin_nums[19] << endl;

    // Day function
    int day_num;
    cout << "Enter a Day number (0-6): ";
    cin >> day_num;
    cout << day(day_num) << endl;

    // while loops
    int index = 0;
    while (index <= 6){
        cout << day(index) << endl;
        index++;
    }

    cout << "\n -- Now with Do While -- \n\n";
    index = 0;
    // Do while ...
    do{
        cout << day(index) << endl;
        index++;
    }while (index <= 6);

    // for loop...
    cout << "\n -- Now with For Loop -- \n\n";
    for (int i = 0; i <= 7; i++){
        cout << day(i) << endl;
    }

    // guess game
    guess();

    cout << expo(2, 8) << endl;

    // 2D arrays!
    string xo [3][3] = {
                            {"X","O","X"},
                            {"o","O","X"},
                            {"X","X","O"}
                                };
    // Nested For loop
    for(int i = 0; i <=2; i++){
        for(int j = 0; j <=2; j++){
            cout << " " << xo[i][j] << " ";
        }
        cout << endl;
    }

    // Pointers
    int test_num = 54;
    cout << "Pointer (test_num): ";
    cout << &test_num << endl;

    // Pointer variable
    int *pTest_num = &test_num;
    cout << "RAM ADDR [test_num] : " << pTest_num << endl;

    // De-Referencing Pointer variables
    cout <<  "DE-REFERNCE(" << pTest_num << "): " << *pTest_num << endl;

    // phone instance
    phone Iphone12;
    Iphone12.disp_dim = 7.5;
    Iphone12.five_g = true;
    Iphone12.model = 'Base Model';
    Iphone12.ram = 6;
    Iphone12.ref_rate = 60;
    Iphone12.storage = 128;

    cout << Iphone12.five_g << endl;
    cout << Iphone12.High_ref() << endl;

    return 0;
}
