


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void AICalculation()
{
	
}


int main()
{
	srand(static_cast<unsigned int>(time(0)));

	//this will be where the target is located
	int targetLocation = rand() % 64 + 1;
	int	searchGridLowNumber = 1;
	int searchGridHighNumber = 64;

	
	int tries = 0;
	int attemptLocateTarget = 0;
	
	cout << "\n\n\t\t WELCOME TO DRONE HUNTER 3000!\n\n";

	do
	{
		tries++;
		cout << "The real target location is at: " << targetLocation << "\n";
		//this is where the AI takes a guess
		cout << "The AI thinks the target is at: " << attemptLocateTarget << "\n";

		attemptLocateTarget = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;
		
		if(attemptLocateTarget > targetLocation)
		{
			cout << "Too high!\n";
			searchGridHighNumber = attemptLocateTarget - 1;
		}
		else if(attemptLocateTarget < targetLocation)
		{
			cout << "Too low!\n";
			searchGridLowNumber = attemptLocateTarget + 1;
		}
		else
		{
			cout << "You got it! It took the AI " << tries << " tries\n";
			break;
		}
		
	} while (attemptLocateTarget != targetLocation);

	return 0;
}
