#include <iostream>
#include <limits>


using namespace std;


float userWeight;
int userPlanet;
string play_again;



void inputValidation();
void introduction();
void weightConverter();
void goodbye();




void introduction() {

    
    std::cout << "1    Mercury\n2    Venus\n3    Mars\n4    Jupiter\n5    Saturn\n6    Uranus\n7    Neptune\n";
    std::cout << "Please enter the number of the planet you want to calculate: \n";
    std::cin >> userPlanet;

    inputValidation();
}

void inputValidation() {
    
    while (!std::cin.good())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "You need to specify a number, not a letter\n";
        introduction();
    }



    if (userPlanet <= 0 || userPlanet >= 8) 
    {
        userPlanet = false;
        cout << "Your answer was not valid!\n\n";
        introduction();
    }
    else 
    {
        userPlanet = true;
        weightConverter();
    }

}


void weightConverter() {

    float	Mercury = 0.38;
    float	Venus = 0.91;
    float	Mars = 0.38;
    float	Jupiter = 2.34;
    float	Saturn = 1.06;
    float	Uranus = 0.92;
    float	Neptune = 1.19;

    switch (userPlanet) {
    case 1:
        std::cout << "Your weight in planet " << userPlanet << " (Mercury)" << " would be " << (userWeight / 100) * Mercury * 100 << " KG.\n";
        break;
    case 2:
        std::cout << "Your weight in planet " << userPlanet << " (Venus)" << "would be " << (userWeight / 100) * Venus * 100 << " KG.\n";
        break;
    case 3:
        std::cout << "Your weight in planet " << userPlanet << " (Mars)" << "would be " << (userWeight / 100) * Mars * 100 << " KG.\n";
        break;
    case 4:
        std::cout << "Your weight in planet " << userPlanet << " (Jupiter)" << "would be " << (userWeight / 100) * Jupiter * 100 << " KG.\n";
        break;
    case 5:
        std::cout << "Your weight in planet " << userPlanet << " (Saturn)" << "would be " << (userWeight / 100) * Saturn * 100 << " KG.\n";
        break;
    case 6:
        std::cout << "Your weight in planet " << userPlanet << " (Uranus)" << "would be " << (userWeight / 100) * Uranus * 100 << " KG.\n";
        break;
    case 7:
        std::cout << "Your weight in planet " << userPlanet << " (Neptune)" << "would be " << (userWeight / 100) * Neptune * 100 << " KG.\n";
        break;
    default:
        std::cout << "Please enter a valid number\n";

    }

    std::cout << "Would you like to check another plannet? YES/NO \n";
    std::cin >> play_again;
    if (play_again == "yes" || play_again == "YES") {
        introduction();
    }
    else {
        goodbye();
    }
    
}


void goodbye() {
    exit(0);
}

int main() {

    system("cls");
    std::cout << "Please enter your weight: \n";
    std::cin >> userWeight;
    introduction();
    weightConverter();
    

}
