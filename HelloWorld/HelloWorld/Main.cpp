#include <iostream>
#include <cstdlib>
#include <limits>


void printvariabletypedetails(int i)
{
	switch (i)
	{
	case 1:
		{
			int variable;
			std::cout << "You have selected integer. This kind of variable is declared by placing " << typeid(variable).name() << " before the variable name." << std::endl;
			std::cout << "\nThis variable has a size of : " << sizeof(variable) << " bytes." << std::endl;
			std::cout << "It can store an integer number in a range between " << std::numeric_limits<int>::min() << " and " << std::numeric_limits<int>::max() << " ." << std::endl;
			std::cout << "\nExamples, and trials:" << std::endl;
			int samplevariable;
			std::cout << "\nChoose a number to declare in a variable: ";
			std::cin >> samplevariable;
			std::cout << "int variable = " << samplevariable << std::endl;
			std::cout << "This new created variable has a size of: " << sizeof(variable) << " bytes" << std::endl;
			break;
		}

	case 11:
	{
		unsigned int variable;
		std::cout << "You have selected unsigned integer. This kind of variable is declared by placing " << typeid(variable).name() << " before the variable name." << std::endl;
		std::cout << "\nThis variable has a size of : " << sizeof(variable) << " bytes." << std::endl;
		std::cout << "It can store an unsigned integer number in a range between " << std::numeric_limits<unsigned int>::min() << " and " << std::numeric_limits<unsigned int>::max() << " ." << std::endl;
		std::cout << "\nExamples, and trials:" << std::endl;
		unsigned int samplevariable;
		std::cout << "\nChoose a number to declare in a variable: ";
		std::cin >> samplevariable;
		std::cout << "unsigned int variable = " << samplevariable << std::endl;
		std::cout << "This new created variable has a size of: " << sizeof(variable) << " bytes" << std::endl;
		break;
	}

	case 12:
	{
		short int variable;
		std::cout << "You have selected short integer. This kind of variable is declared by placing " << typeid(variable).name() << " before the variable name." << std::endl;
		std::cout << "\nThis variable has a size of : " << sizeof(variable) << " bytes." << std::endl;
		std::cout << "It can store an integer number in a range between " << std::numeric_limits<short int>::min() << " and " << std::numeric_limits<short int>::max() << " ." << std::endl;
		std::cout << "\nExamples, and trials:" << std::endl;
		short int samplevariable;
		std::cout << "\nChoose a number to declare in a variable: ";
		std::cin >> samplevariable;
		std::cout << "short int variable = " << samplevariable << std::endl;
		std::cout << "This new created variable has a size of: " << sizeof(variable) << " bytes" << std::endl;
		break;
	}

	case 13:
	{
		unsigned short int variable;
		std::cout << "You have selected unsigned short integer. This kind of variable is declared by placing " << typeid(variable).name() << " before the variable name." << std::endl;
		std::cout << "\nThis variable has a size of : " << sizeof(variable) << " bytes." << std::endl;
		std::cout << "It can store an unsigned integer number in a range between " << std::numeric_limits<unsigned short>::min() << " and " << std::numeric_limits<unsigned short>::max() << " ." << std::endl;
		std::cout << "\nExamples, and trials:" << std::endl;
		unsigned short int samplevariable;
		std::cout << "\nChoose a number to declare in a variable: ";
		std::cin >> samplevariable;
		std::cout << "unsigned short int variable = " << samplevariable << std::endl;
		std::cout << "This new created variable has a size of: " << sizeof(variable) << " bytes" << std::endl;
		break;
	}

	case 14:
	{
		long int variable;
		std::cout << "You have selected long integer. This kind of variable is declared by placing " << typeid(variable).name() << " before the variable name." << std::endl;
		std::cout << "\nThis variable has a size of : " << sizeof(variable) << " bytes." << std::endl;
		std::cout << "It can store an integer number in a range between " << std::numeric_limits<long>::min() << " and " << std::numeric_limits<long>::max() << " ." << std::endl;
		std::cout << "\nExamples, and trials:" << std::endl;
		long int samplevariable;
		std::cout << "\nChoose a number to declare in a variable: ";
		std::cin >> samplevariable;
		std::cout << "long int variable = " << samplevariable << std::endl;
		std::cout << "This new created variable has a size of: " << sizeof(variable) << " bytes" << std::endl;
		break;
	}

	case 15:
	{
		unsigned long int variable;
		std::cout << "You have selected unsigned long integer. This kind of variable is declared by placing " << typeid(variable).name() << " before the variable name." << std::endl;
		std::cout << "\nThis variable has a size of : " << sizeof(variable) << " bytes." << std::endl;
		std::cout << "It can store an unsigned integer number in a range between " << std::numeric_limits<unsigned long>::min() << " and " << std::numeric_limits<unsigned long>::max() << " ." << std::endl;
		std::cout << "\nExamples, and trials:" << std::endl;
		unsigned long int samplevariable;
		std::cout << "\nChoose a number to declare in a variable: ";
		std::cin >> samplevariable;
		std::cout << "unsigned long int variable = " << samplevariable << std::endl;
		std::cout << "This new created variable has a size of: " << sizeof(variable) << " bytes" << std::endl;
		break;
	}

	case 16:
	{
		long long int variable;
		std::cout << "You have selected long long integer. This kind of variable is declared by placing " << typeid(variable).name() << " before the variable name." << std::endl;
		std::cout << "\nThis variable has a size of : " << sizeof(variable) << " bytes." << std::endl;
		std::cout << "It can store an integer number in a range between " << std::numeric_limits<long long>::min() << " and " << std::numeric_limits<long long>::max() << " ." << std::endl;
		std::cout << "\nExamples, and trials:" << std::endl;
		long long int samplevariable;
		std::cout << "\nChoose a number to declare in a variable: ";
		std::cin >> samplevariable;
		std::cout << "long long int variable = " << samplevariable << std::endl;
		std::cout << "This new created variable has a size of: " << sizeof(variable) << " bytes" << std::endl;
		break;
	}

	case 17:
	{
		unsigned long long int variable;
		std::cout << "You have selected unsigned long long integer. This kind of variable is declared by placing " << typeid(variable).name() << " before the variable name." << std::endl;
		std::cout << "\nThis variable has a size of : " << sizeof(variable) << " bytes." << std::endl;
		std::cout << "It can store an unsigned integer number in a range between " << std::numeric_limits<unsigned long long>::min() << " and " << std::numeric_limits<unsigned long long>::max() << " ." << std::endl;
		std::cout << "\nExamples, and trials:" << std::endl;
		unsigned long long int samplevariable;
		std::cout << "\nChoose a number to declare in a variable: ";
		std::cin >> samplevariable;
		std::cout << "unsigned long long int variable = " << samplevariable << std::endl;
		std::cout << "This new created variable has a size of: " << sizeof(variable) << " bytes" << std::endl;
		break;
	}

	case 2:
	{
		float variable;
		std::cout << "You have selected floating number. This kind of variable is declared by placing " << typeid(variable).name() << " before the variable name." << std::endl;
		std::cout << "\nThis variable has a size of : " << sizeof(variable) << " bytes." << std::endl;
		std::cout << "It can store a floating point number in a range between " << std::numeric_limits<float>::min() << " and " << std::numeric_limits<float>::max() << std::endl;
		std::cout << "\nExamples, and trials:" << std::endl;
		float samplevariable;
		std::cout << "\nChoose a number to declare in a variable: ";
		std::cin >> samplevariable;
		std::cout << "float variable = " << samplevariable << std::endl;
		std::cout << "This new created variable has a size of: " << sizeof(variable) << " bytes" << std::endl;
		break;
	}

	case 21:
	{
		double variable;
		std::cout << "You have selected double floating number. This kind of variable is declared by placing " << typeid(variable).name() << " before the variable name." << std::endl;
		std::cout << "\nThis variable has a size of : " << sizeof(variable) << " bytes." << std::endl;
		std::cout << "It can store a floating point number in a range between " << std::numeric_limits<double>::min() << " and " << std::numeric_limits<double>::max() << std::endl;
		std::cout << "\nExamples, and trials:" << std::endl;
		double samplevariable;
		std::cout << "\nChoose a number to declare in a variable: ";
		std::cin >> samplevariable;
		std::cout << "double variable = " << samplevariable << std::endl;
		std::cout << "This new created variable has a size of: " << sizeof(variable) << " bytes" << std::endl;
		break;
	}

	case 22:
	{
		long double variable;
		std::cout << "You have selected long double floating number. This kind of variable is declared by placing " << typeid(variable).name() << " before the variable name." << std::endl;
		std::cout << "\nThis variable has a size of : " << sizeof(variable) << " bytes." << std::endl;
		std::cout << "It can store a floating point number in a range between " << std::numeric_limits<long double>::min() << " and " << std::numeric_limits<long double>::max() << std::endl;
		std::cout << "\nExamples, and trials:" << std::endl;
		long double samplevariable;
		std::cout << "\nChoose a number to declare in a variable: ";
		std::cin >> samplevariable;
		std::cout << "long double variable = " << samplevariable << std::endl;
		std::cout << "This new created variable has a size of: " << sizeof(variable) << " bytes" << std::endl;
		break;
	}

	case 3:
	{
		char variable;
		std::cout << "You have selected character. This kind of variable is declared by placing " << typeid(variable).name() << " before the variable name." << std::endl;
		std::cout << "\nThis variable has a size of : " << sizeof(variable) << " bytes." << std::endl;
		std::cout << "\nExamples, and trials:" << std::endl;
		char samplevariable;
		std::cout << "\nChoose a number to declare in a variable: ";
		std::cin >> samplevariable;
		std::cout << "char variable = " << samplevariable << std::endl;
		std::cout << "This new created variable has a size of: " << sizeof(variable) << " bytes" << std::endl;
		break;
	}

	case 4:
	{
		bool variable;
		std::cout << "You have selected boolean. This kind of variable is declared by placing " << typeid(variable).name() << " before the variable name." << std::endl;
		std::cout << "\nThis variable has a size of : " << sizeof(variable) << " bytes." << std::endl;
		std::cout << "\nExamples, and trials:" << std::endl;
		bool samplevariable;
		std::cout << "\nChoose a number to declare in a variable: ";
		std::cin >> samplevariable;
		std::cout << "bool variable = " << samplevariable << std::endl;
		std::cout << "This new created variable has a size of: " << sizeof(variable) << " bytes" << std::endl;
		break;
	}

	default:
		std::cout << "You have selected a wrong number" << std::endl;
	}
}


int main()
{
	std::cout << "Please select datatype for details:" << std::endl;
	std::cout << "(1) int->Integer" << std::endl;
	std::cout << "(11) unsigned int->unsigned integer" << std::endl;
	std::cout << "(12) short int->short integer" << std::endl;
	std::cout << "(13) unsigned short-> unsigned short integer" << std::endl;
	std::cout << "(14) long int->long integer" << std::endl;
	std::cout << "(15) unsigned long int->unsigned long integer" << std::endl;
	std::cout << "(16) long long int->long long integer" << std::endl;
	std::cout << "(17) unsigned long long int->unsigned long long integer" << std::endl;
	std::cout << "(2) float->Float" << std::endl;
	std::cout << "(21) double->double float" << std::endl;
	std::cout << "(22) long double->long double float" << std::endl;
	std::cout << "(3) char->Character" << std::endl;
	std::cout << "(4) bool->Boolean" << std::endl;

	int choice;
	std::cin >> choice;
	std::cin.ignore(256, '\n'); // https://stackoverflow.com/questions/10656224/using-cin-get-twice/10656280 // https://stackoverflow.com/questions/3780255/cin-get-not-working

	printvariabletypedetails(choice);

	system("pause");

	return 0;
}