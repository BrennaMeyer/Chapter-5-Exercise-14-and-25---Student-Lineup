// Chapter 5 Exercise 14 and 25 - Student Lineup.cpp : This file contains the 'main' function. Program execution begins and ends there.
//// Programmer: Brenna Meyer 
// Date: March 19th, 2025
// Requirements: A teacher has asked all her students to line up according to their first name.
//For example, in one class Amy will be at the front of the line, and Yolanda will be at the end.
// Write a program that prompts the user to enter the number of students in the class, then loops to read that many names.
// Once all the names have been read, it reports which student would be at the front of the line and
// which one would be at the end of the line.
//Using Files—Student Line Up -Create a second branch for this project and modify your program to do the following:
//Create a new branch in your Exercise 14 project that modifies the Student Line Up program described in Programming Challenge 14 so
// it reads the student names from the file LineUp.txt.The program should read names from the file until there is no more data to read.


#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	ifstream inputFile;

	string student,
		firstName,
		lastName;

	int num_students;

	inputFile.open("LineUp.txt");

	if (inputFile)
	{
		inputFile >> student;

		firstName = lastName = student;

		while (inputFile >> student)
		{

			if (student < firstName)
				firstName = student;

			if (student > lastName)
				lastName = student;

		 }
		inputFile.close();
	}
	else
	{
		cout << "Error opening file." << endl;
	}

	cout << "The first student in line is:" << firstName << endl;

	cout << "The last student in line is:" << lastName << endl;

	return 0;
}

