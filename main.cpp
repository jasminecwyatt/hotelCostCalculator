/// This program that calculates the total cost of a hotel stay.

///The daily base charge is as follow:
/// Deluxe Double Room      $250
/// Deluxe Room      		$200
/// Standard Room   		$150

/// The hotel also charges for the following optional daily services:
/// Parking	                    $20 per day
/// High-speed internet	        $10 per day
/// Long distance phone calls	$15 per day


#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;


/// Function prototypes here



int main()
{


	/// Variables
	int days;				  /// To hold the number of days
	int roomType;             /// To hold the room type
	double roomPerDay;        /// To hold the daily room charge

	double stayCharges;		  /// To hold the base charges
	double serviceCharge;     /// To hold the service charges
    double totalCharges;	  /// To hold the total charges

	double parking;			  /// To hold Parking fees
	double H_S_internet;	  /// To hold High-speed internet fees
	double phoneCalls;		  /// To hold the phone calls fees






	/// step 1:
	/// prompt the user for the required number of days.
cout<<"How many days will you be staying?"<<endl;
cin >> days;



	/// step 2:
	///Check if the number of days is greater than 1.
while ( days < 1)
{
    return 1;
}

    /// step 3:
	/// Prompt the user to choose the room-type.
	///The user will input 1 for Deluxe Double Room
	///The user will input 2 for Double Room
	///The user will input 3 for Standard Room.
cout<<"Please choose the room from the following options:"<<endl;


cout << setw(10) << left <<"For Deluxe Double Room:"<< setw(10)<< right<< "Please enter 1" << endl;
cout << setw(10) << left <<"For Double Room: " << setw(10) << right << "Please enter 2"<<endl;
cout << setw(10) << left <<"For Standard Room:" << setw(10) << right<< "Please enter 3"<< endl;


    /// step 4:
    /// Validate the room-type. Check if the room-type is between 1 and 3.
    /// If the room-type is not within the acceptable range, ask the user for the room-type REPEATEDLY
    /// until the user enters a valid number.


 cin>> roomType;

while ( roomType < 1 ||  roomType > 3)
    {
        cout<<"\nPlease Enter the Room Type"<<endl;
        cin>> roomType;

    }




    /// step 5:
    /// if room-type = 1, then set roomPerDay = 250
    /// if room-type = 2, then set roomPerDay = 200
    /// if room-type = 3, then set roomPerDay = 150


 if (roomType == 1)
 {
     roomPerDay=250;
 }
 else if (roomType== 2)
 {
     roomPerDay=200;
 }
 else if (roomType ==3)
 {
     roomPerDay=150;
 }

    /// step 6:
    /// Ask the user to enter Y or N if he/she wants a parking spot.
    /// These services will be for extra charge ($20 per day).
    /// If the user entered Y, then Parking = 20.
    /// If the user entered N, then Parking = 0.
    /// If the user entered any other char (Invalid char), REPEATEDLY ask the user again and again
    /// until the users enter a valid char



while (parking !='Y' && parking !='N')

    {
    cout<< "Do you want a parking spot? Enter Y for Yes or N for No" <<endl;
    cin >> parking;
    parking = toupper(parking);
    }
if (parking == 'Y')
{
    parking = 20.00;
}
else if (parking == 'N')
{
    parking = 0.00;
};


    /// step 7:
    /// Ask the user to enter Y or N if he/she wants High Speed Internet.
    /// These services will be for extra charge ($10 per day).
    /// If the user entered Y, then H_S_internet = 10.
    /// If the user entered N, then H_S_internet = 0.
    /// If the user entered any other char (Invalid char), REPEATEDLY ask the user again and again
    /// until the users enter a valid char
cin >> H_S_internet;

while (H_S_internet !='Y' && H_S_internet !='N' )

{
    cout << "Do you want to add high speed internet for an extra $10 per day?"<<endl;
    cin >> H_S_internet;
    H_S_internet =toupper(H_S_internet);
}
if (H_S_internet == 'Y')
{
    H_S_internet = 10.00;
}
else if (H_S_internet == 'N')
{
    H_S_internet= 0.0;
}

    /// step 8:
    /// Ask the user to enter Y or N if he/she wants Long Distance Calls
    /// These services will be for extra charge ($15 per day).
    /// If the user entered Y, then phoneCalls = 15.
    /// If the user entered N, then phoneCalls = 0.
    /// If the user entered any other char (Invalid char), REPEATEDLY ask the user again and again
    /// until the users enter a valid char
cin >>phoneCalls;
while (phoneCalls !='Y' && phoneCalls !='N' )
{
    cout<< "Do you want to add long distance calling for an extra $15 per day?"<<endl;
    cin >>phoneCalls;
    phoneCalls =toupper(phoneCalls);
}

if (phoneCalls == 'Y')
{
    phoneCalls = 15.00;
}
else if (phoneCalls == 'N')
{
    phoneCalls= 0.0;
}



    /// step 10:
	/// Call the function calcStayCharges() to calculate the base charges.
 stayCharges= days * roomPerDay;
	/// step 12:
	/// Call the function serviceCharge() to calculate the optional services charges.

serviceCharge = days *(parking + H_S_internet + phoneCalls);
	/// step 14:
	/// Call the function totalCharges() to calculate the Total charges.

totalCharges= serviceCharge + stayCharges;


    /// step 15:
	/// Display results on screen.

	cout << " Your total charges are " << totalCharges <<endl;

	return 0;
}



/// step 9:
/// write the calcStayCharges function
/// The calcStayCharges function accepts the number of days
/// spent at the hotel and the base charge for each day.
/// It calculates and returns the base charges as follow:
/// Base Charges = Number of days * charge per day





/// step 11:
/// write the calcServiceCharges function
/// The calcServiceCharges function calculates and returns the
/// total of the optional services (parking, internet, and long distance calls)
/// Services-Charge = Number of days * (Parking + H_S_internet + phoneCalls)




/// step 13
/// write the calcTotalCharges function
/// The calcTotalCharges function calculates and
/// returns the total charges as follow:
/// Total Charges = Base Charges + Services-Charge.
