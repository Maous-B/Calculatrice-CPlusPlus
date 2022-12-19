#include <iostream>

using namespace std;

int main()
{
    
	int a, b, choice;
	
	cout << "Petite calculatrice en C++ fait par moi \n";
	
	cout << "Veuillez saisir a : ";
	cin >> a;
	
	cout << "Veuillez saisir b : ";
	cin >> b;
	
	cout << "Veuillez choisir entre multiplication (1), addition(2), soustraction(3) et division(4) : ";
	cin >> choice;
	
	switch(choice){
	    
	    case 1: cout << "La multiplication de ces deux nombres est " << a*b; break;
	    
	    case 2: cout << "L'addition de ces deux nombres est " << a+b; break;
	    
	    case 3: cout << "La soustraction de ces deux nombres est " << a-b; break;
	    
	    case 4: cout << "La division de ces deux nombres est " << a/b; break;
	    
	    default: cout << "Choix invalide"; break;
	}
	