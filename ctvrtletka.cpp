#include <iostream>
#include <vector>
using namespace std;
using std::cout;
using std::endl;

int moznost;

vector<string> jmenozbozi = {
        "Banan",
        "Pomeranc";
        "Ananas";
        "Jablko";
        "Chleba";
        "Rohlik";
        "Houska";
        "Bageta";
        "Voda-0.5l";
        "Coca-Cola-0.5l";
        "Sprite-0.5l";
        "Fanta-0.5l";
}
vector<int> pocetzbozi = {
        0;
        0;
        0;
        0;
        0;
        0;
        0;
        0;
        0;
        0;
        0;
        0;

}

vector<float> cenazakus = {
        "5.97";
        "21.96";
        "24.90";
        "13.90";
        "59.90";
        "2.90";
        "5.50";
        "27.90";
        "14.90";
        "24.90";
        "24.90";
        "24.90";
}



int main(){
    cout << "Zbozi - 1";
    cout << "Pokladna - 2";
    cin >>moznost;
    switch(moznost) {

    case 1:{
    cout << "Ovoce - 1\nPecivo - 2\nNapoje - 3";
    cin >> moznost;
        switch (moznost) {
            case 1:{



            }
        }





    }
    }
}
