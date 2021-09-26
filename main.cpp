    #include <iostream>
    #include "Person.h"
    #include <vector>
    using namespace std;
    void showArray(const int array[], int san);

/*
        //Example 1 will be about array.
        int main(){
        int array[] = {5,2,6,7,2};
        showArray(array, 5);
        return 0;
    }
    void showArray(const int array[], int san){
        for(int i = 0; i < san; i++){
            cout << "Elements of the array: " << array[i] << endl;
        }
        /*
        //Example 2
        int main(){
        char soz = 'A';
        int san = 1;

        const char* i = &soz;
        const int* j = &san;
        cout << "Before changing: " << endl;
        cout <<  "Letter: " << *i << endl << "And it's position in the alphabet: " <<*j << endl;

        soz = 'Z';
        san = 26;
        cout << "After changing: " << endl;
        cout <<  "Letter: " << *i << endl << "And it's position in the alphabet: " <<*j;
        return 0;
        }
*/
    int main() {
        //Example 3
        const double pi = 3.14;
        int san;
        cout << "Please input the radius of your circle: ";
        cin >> san;
        double area = pi*(san*san);
        cout << "The area of your cictle is" << " " << area;

        return 0;
    }


    