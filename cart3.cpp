#include <string>
#include <iomanip>
using namespace std;
int main ( )
{
// constants
const string customerName = “Jane Smith” , userName = “jsmith” , password = “blue123” ,
accountNumber = “123456789” , memberLevel = “Gold” , address = “100 W New Haven Ave, Melbourne, FL 32901”;

double storeCredit = 3000.00;
const int items = 3;
const double salesTax = 0.06;
string SKU[ ] = [“HF-342” ,“LK-322” ,“KF-231”];
string name[ ] = [“1/2 in Bolt” ,“1/4 in Bolt” ,“Hammer”];
int itemsinUnit[ ] = [“50” ,“25” ,”1”];
double priceperUnit[ ] = [“200.00” , “5.75” ,“15.23”];
int quantityonHand[ ] = [“200” ,“76” ,“100”];
// variables
string i_username, i_password, i_SKU;
int i_quantity, itemStock;
double total, finalTotal;
//user interface
cout << endl << right << setw(20) << “LOG-IN” endl;
cout << “Username:”;
cin >> i_username;
cout << “Password:”;
cin >> i_password;
if (i_username == username && i_password == password)
{
cout << endl << right << setw(30) << “Items” << endl;
cout << left << setw(10) << “SKU” << left << setw(20) << “Name” << “Items in Unit”
<< “Price per Unit” << “Quantity on Hand” << endl;
cout << fixed << setprecision(2);
}
else
{
cout << “ERROR! Invalid username or password. Please try again or exit program.” endl;
}
for(int i=0;i<items; i++){
	{
cout << left << setw(10) << SKU[i] << left << setw(20) << name[i] << itemsinUnit[i]
<< priceperUnit[i] << quantityonHand[i] << endl;
}
cout << endl << “Enter item SKU:”;
cin >> i_SKU;
itemStock = -1;
for(int i=0;i<items; i++)
{
if(SKU[i] == i_SKU)
{
itemStock = i;
break;
}
}
if(itemStock == -1)
{
cout << “ERROR! SKU enter is invalid. Please try again or exit program” endl;
}
else
{
cout << endl << “Enter quantity of item/s:”;
cin >> i_quantity;
}
if(i_quantity < 1 | | i_quantity > quantityonHand[itemStock])
{
cout << “Error! No quantity detected; the number of items must be entered before
continuing. Please try again or exit the program” endl;
}
else
{
totalPre = i_quantity * priceperUnit[itemStock];
salesTax = totalPre * salesTax;
finalTotal = totalPre + salesTax;
}
if(finalTotal > storeCredit)
{
cout << “Error! Insufficient funds.” endl;
}
else
{
storeCredit -= finalTotal;
}


//Option 3, Shopping Cart 2
float getEstimate, priceperUnit;
int quantityonHand;
string memberLevel;
float totalPre = priceperUnit * quantityonHand;
float totalSpend = totalPre*0.06 + totalPre;
float discountPercent = 0;
if( memberLevel == "Diamond" )
{
 if( totalSpend > 700.0 )
{
 discountPercent = 0.12;
 }
}
else if( totalSpend > 300.0 )
{
 discountPercent = 0.0825;
}
else if( totalSpend > 100.0 )
{
 discountPercent = 0.06;
}
else if( memberLevel == "Gold" )
{
 if( totalSpend > 300.0 )
{
 discountPercent = 0.0825;
 }
}
else if( totalSpend > 100.0 )
{
 discountPercent = 0.06;
 }
else if( memberLevel == "Blue" )
{
 if( totalSpend > 100.0 )
{
 discountPercent = 0.06;
 }
}
else	{
        		discountPercent = 0;
    	}
float finalTotal = totalSpend-totalSpend*discountPercent;
return finalTotal;
cout << endl << “----------------------------RECEIPT-----------------------------” endl;
cout << left << setw(20) << “Customer Name:” << customerName << endl;
cout << left << setw(20) << “Account #:” << accountNumber << endl;
cout << left << setw(20) << “Member Level:” << memberLevel << endl;
cout << left << setw(20) << “Address:” << address << endl;
cout << “=================================================” endl;
cout << left << setw(20) << “Item SKU:” << i_SKU << endl;
cout << left << setw(20) << “Item:” << name[itemStock] << endl;
cout << left << setw(20) << “Items in Unit:” << right << setw(10) << iteminUnit[itemStock] <<
endl;
cout << left << setw(20) << “Price:” << right << setw(9) << “$” << priceperUnit[itemStock] <<
endl;
cout << left << setw(20) << “Quantity:” << right << setw(10) << i_quantity << endl;
cout << left << setw(20) << “Before tax:” << right << setw(9) << “$” << total << endl;
cout << left << setw(20) << “Sales Tax: 6%” endl;
cout << left << setw(20) << “Total Amount” << right << setw(9) << “$” << finalTotal << endl;
cout << left << setw(20) << “Remaining Store Credit” << right << setw(9) << “$” <<
storeCredit << endl;
return finalTotal;
}
{
cout << getEstimate("Diamond", 20, 20) << endl;
cout << getEstimate("Gold", 20, 20) << endl;
cout << getEstimate("Blue", 20, 20) << endl ;
cout << getEstimate(" ", 20, 20) << endl ;
cout << getEstimate("Diamond", 20, 100) << endl;
cout << getEstimate("Gold", 20, 100) << endl;
cout << getEstimate("Blue", 20, 100) << endl ;
cout << getEstimate(" ", 20, 100) << endl ;
return 0;
