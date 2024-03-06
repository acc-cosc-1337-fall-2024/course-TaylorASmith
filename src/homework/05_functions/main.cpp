#include <iostream>
#include "func.h"

using namespace std;

int main() 
{
 int choice;
 string dna;

 do {
 cout << "Menu\n"
 << "1- Get GC Content\n"
 << "2- Get DNA Complement\n"
 << "3- Exit\n"
 << "Enter your choice: ";
 cin >> choice;

 switch (choice) {
 case 1: {
 cout << "Enter the DNA string: ";
 cin >> dna;
 cout << "GC Content: " << get_gc_content(dna) << endl;
 break;
 }
 case 2: {
 cout << "Enter the DNA string: ";
 cin >> dna;
 cout << "DNA Complement: " << get_dna_complement(dna) << endl;
 break;
 }
 case 3: {
 cout << "Exiting program...\n";
 break;
 }
 default:
 cout << "Invalid choice. Please try again." << endl;
 }
 } while (choice != 3);
	return 0;
}
