#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

void ProductsServices()
{
  // Declaring variables for the function
  vector<string> productInfo;
  string addProduct;
  string userInput;
  string userNumInput;
  // Declaring ifstream and ofstream for the function
  ifstream infile;
  ofstream newFile("UpdatedProducts.txt");
  // Opening the Products.txt file
  infile.open("Products.txt");
  string input;
  // Storing each line in the txt file into a vector
  while(getline(infile, input))
    {
      productInfo.push_back(input);
    }
  // Outputting the product information
  cout << "Pear Inc. available products and services: " << endl;
  cout << endl;
  for (int i = 0; i < productInfo.size(); i++)
    {
      cout << i+1 << ": " << productInfo[i] << endl;
    }
  cout << endl;
  cout << "*** Please choose one of the following options from the menu below! ***" << endl;
  cout << "1. Add a new product" << endl;
  cout << "2. Quit" << endl;
  // Prompting user for an input
  getline(cin, userInput);
  if (userInput == "1")
  {
    cout << "*** Please add a new product! When typing the information please give us the name and price of the product. ***" << endl;
    // Updating the UpdatedProducts.txt file
    getline(cin, addProduct);
    productInfo.push_back(addProduct);
    for (int i = 0; i < productInfo.size(); i++)
      {
        newFile << productInfo[i] << endl;
      }
    cout << "*** Done! Here is the new list of products and services! ***" << endl;
    cout << endl;
    // Outputting the UpdatedProducts.txt file
    for (int i = 0; i < productInfo.size(); i++)
      {
        cout << 1+i << ": " << productInfo[i] << endl;
      }
  }
  // Quits the program
  if (userInput == "2")
  {
    cout << "*** Have a great day! ***" << endl;
  }
}
void ClientData() 
{
  vector<string> clientInfo;
  string changeClient;
  string addClient;
  string userInput;
  string userNumInput;
  string tempClient;

  // Declaring an ifstream and ofstream for the function.
  ifstream infile;
  ofstream newFile("UpdatedClients.txt");
  // Opening the Clients.txt file
  infile.open("Clients.txt");

  string input;
  // Taking the line from the txt file and setting it to the input and storing it in a vector
  while(getline(infile, input))
    {
      clientInfo.push_back(input);
    }
  // Outputting the Client's information
  cout << "Pear Inc. Client's Information: " << endl;
  cout << endl;
  for (int i = 0; i < clientInfo.size(); i++)
    {
      cout << i+1 << ": " << clientInfo.at(i) << endl;
    }
  cout << endl;
  cout << "*** Please choose one of the following using the menu below ***" << endl;
  cout << "1: Edit client information" << endl;
  cout << "2: Add new client" << endl;
  cout << "3: Quit" << endl;
  getline(cin, userInput);
  // Asking for input above, then accessing if loops depending on what option is picked
  if (userInput == "1")
  {
    cout << "*** Please choose which client to edit. Please enter input as 1, 2, 3 etc. ***" << endl;
    cout << "Client 1" << endl;
    cout << "Client 2" << endl;
    cout << "Client 3" << endl;
    cout << "Client 4" << endl;
    cout << "Client 5" << endl;
    cout << "Client 6" << endl;
    // This is a bunch of if statements that update certain clients depending on which client they pick.
    getline(cin, userNumInput);
    if (userNumInput == "1")
    {
      cout << "*** Please make your changes! Please re-type the entire client information with changed details. ***" << endl;
      getline(cin, changeClient);
      clientInfo[0] = changeClient;
    }
    if (userNumInput == "2")
    {
      cout << "*** Please make your changes! Please re-type the entire client information with changed details. ***" << endl;
      getline(cin, changeClient);
      clientInfo[1] = changeClient;
    }
    if (userNumInput == "3")
    {
      cout << "*** Please make your changes! Please re-type the entire client information with changed details. ***" << endl;
      getline(cin, changeClient);
      clientInfo[2] = changeClient;
    }
    if (userNumInput == "4")
    {
      cout << "*** Please make your changes! Please re-type the entire client information with changed details. ***" << endl;
      getline(cin, changeClient);
      clientInfo[3] = changeClient;
    }
    if (userNumInput == "5")
    {
      cout << "*** Please make your changes! Please re-type the entire client information with changed details. ***" << endl;
      getline(cin, changeClient);
      clientInfo[4] = changeClient;
    }
    if (userNumInput == "6")
    {
      cout << "*** Please make your changes! Please re-type the entire client information with changed details. ***" << endl;
      getline(cin, changeClient);
      clientInfo[5] = changeClient;
    }

    ofstream newFile("UpdatedClients.txt");
    cout << "*** Done! Here is the updated list of clients! ***" << endl;
    cout << endl;
    for (int i = 0; i < clientInfo.size(); i++)
      {
        newFile << clientInfo[i] << endl;
      }
    for (int i = 0; i < clientInfo.size(); i++)
      {
        cout << i+1 << ": " << clientInfo[i] << endl;
      }
  }
  // The if loop for adding a new client.
  if (userInput == "2")
  {
    cout << "*** Please type full information of the new client follow this format, (First name, Full address, Date of purchase) ***" << endl;
    getline(cin, addClient);
    clientInfo.push_back(addClient);
    ofstream newFile("UpdatedClients.txt");
    for (int i = 0; i < clientInfo.size(); i++)
      {
        newFile << clientInfo[i] << endl;
      }
    cout << "*** Done, here is the updated client list! ***" << endl;
    cout << endl;
    for (int i = 0; i < clientInfo.size(); i++)
      {
        cout << i+1 << ": " << clientInfo[i] << endl;
      }
  }
  if (userInput == "3")
  {
    cout << "*** Have a good day! ***" << endl;
  }
  
}
void RepsData(){
  vector <string> repsInfo;
  string changeReps;
  string addReps;
  string userInput;
  string userNumberInput;
  string tempReps;
  string userBonusInput;
  int bonusNum;
  
  // Declaring an ifstream and ofstream for the function
  ifstream infile;
  ofstream newFile("UpdatedReps.txt");
  // Open the SalesReps.txt file
  infile.open("SalesReps.txt");

  string input;
  // Taking the line from the txt file and setting it to the input and storing it in a vector
  while (getline(infile, input)){
    repsInfo.push_back(input);
  }
  // Outputting the Representatives information
  cout << "Pear Inc. Sales Representatives Information: " << endl;
  cout << endl;
  for ( int i = 0; i < repsInfo.size(); i++){
    cout << i+1 << ": " << repsInfo.at(i) << endl;
  }
  cout << endl;
  cout << "*** Please choose one of the following using the menu below ***" << endl;
  cout << "1: Look at Representative Sales Bonus" << endl;
  cout << "2: Change information about a Representative" << endl;
  cout << "3: Add a new Representative" << endl;
  cout << "4: Quit" << endl;
  getline( cin , userInput);

  // Asking for input above, then accessing if loops depending on what option is picked
  if ( userInput == "1"){
    cout<< "*** Pick choose which Representative to calculate the Sales Bonus by entering either 1, 2, 3, or 4. ***" << endl;
    cout << "1: Representative 1" << endl;
    cout << "2: Representative 2" << endl;
    cout << "3: Representative 3" << endl;
    cout << "4: Representative 4" << endl;

    getline( cin, userBonusInput);
    if( userBonusInput == "1"){
      cout << "*** Please input the Monthly Sales amount ***" << endl;
      cin >> bonusNum;
      cout << "The Sales Bonus for Representative 1 is: " << "$" << bonusNum * .05 << endl;
    }
    if ( userBonusInput == "2"){
      cout << "*** Please input the Monthly Sales amount ***" << endl;
      cin >> bonusNum;
      cout << "The Sales Bonus for Representative 2 is: " << "$" << bonusNum * .05 << endl;
    }
    if ( userBonusInput == "3"){
      cout << "*** Please input the Monthly Sales amount ***" << endl;
      cin >> bonusNum;
      cout << "The Sales Bonus for Representative 3 is: " << "$" << bonusNum * .05 << endl;
    }
    if ( userBonusInput == "4"){
      cout << "*** Please input the Monthly Sales amount ***" << endl;
      cin >> bonusNum;
      cout << "The Sales Bonus for Representative 4 is: " << "$" << bonusNum * .05 << endl;
}
  }
  // Statements that determine which Representative the user picks that they want to edit.
  if ( userInput == "2"){
    cout << "*** Please choose which Representative to edit. Please enter input as 1, 2, 3 , or 4. ***" << endl;
    cout << "Representative 1" << endl;
    cout << "Representative 2" << endl;
    cout << "Representative 3" << endl;
    cout << "Representative 4" << endl;

    getline( cin , userNumberInput );
    if ( userNumberInput == "1"){
      // repsInfo.erase( repsInfo.begin());
      cout << "*** Please make your changes! Please re-type the entire Sales Representative information with changed details. ***" << endl;
      getline( cin, changeReps );
      repsInfo[0] = changeReps;
    }
    if (userNumberInput == "2"){
      // repsInfo.erase( repsInfo.begin() + 1);
      cout << "*** Please make your changes! Please re-type the entire Sales Representative information with changed details. ***" << endl;
      getline( cin, changeReps );
      repsInfo[1] = changeReps;
    }
    if (userNumberInput == "3"){
      // repsInfo.erase( repsInfo.begin() + 2);
      cout << "*** Please make your changes! Please re-type the entire Sales Representative information with changed details. ***" << endl;
      getline( cin, changeReps );
      repsInfo[2] = changeReps;
    }
    if ( userNumberInput == "4"){
      // repsInfo.erase( repsInfo.begin() + 3);
      cout << "*** Please make your changes! Please re-type the entire Sales Representative information with changed details. ***" << endl;
      getline( cin, changeReps );
      repsInfo[3] = changeReps;
    }
    ofstream newFile("UpdatedReps.txt");
    cout << "*** Done! If you wish to change another Representative, please restart the program! ***" << endl;
    for ( int i = 0; i < repsInfo.size(); i++){
      newFile << repsInfo[i] << endl;
      }
    //ofstream newFile("UpdatedReps.txt");
    cout << "*** Done! Here is the updated Representative list" << endl;
    for ( int i = 0; i < repsInfo.size(); i++){
      newFile << repsInfo[i] << endl;
      }
    for ( int i = 0; i < repsInfo.size(); i++){
      cout << i+1 << ": " << repsInfo[i] << endl;
    }
  }

  if ( userInput == "3"){
      // The if loop for adding a new representative.
    cout << "*** Please type full information of the new Representative following this format, (First name, Full address, Date of purchase) ***" << endl;
    getline( cin , addReps );
    repsInfo.push_back( addReps );
    //ofstream newFile("UpdatedReps.txt");
    for ( int i = 0; i < repsInfo.size(); i++){
      newFile << repsInfo[i] << endl;
      }
    cout << "*** Done! If you wish to add another Representative, or wish to update a certain Representative, please restart the program. ***" << endl;
    for ( int i = 0; i < repsInfo.size(); i++){
      newFile << repsInfo[i] << endl;
      }
    for ( int i = 0; i < repsInfo.size(); i++){
      cout << i+1 << ": " << repsInfo[i] << endl;
  }
  }
  
  if ( userInput == "4"){
    // if loop to end the program.
    cout << "*** Have a good day! If you wish to change or add Representatives, please restart the program! ***" << endl;
  }
}

void SalesInfo()
{
  vector<string> salesData;
  string userInput;
  string userProdInput;
  string salesBuy;
  string salesEdit;
  string salesperClient;
  string tempSales;

  // opening file and declaring function
  ifstream infile;
  ofstream newFile("UpdatedSales.txt");
  //opening sales.txt file
  infile.open("SalesHistory.txt");

  string input;
  //stores file text in vector
  while(getline(infile, input)){
    salesData.push_back(input);
  }
  
  cout << "Welcome to Pear Inc. Sales History" << endl;
  cout << "Product Name, Price, Units Sold In One Year" << endl;
  cout << endl;
  
  for (int i=0; i < salesData.size(); i++){
    cout << i+1 <<": "<< salesData.at(i) << endl;
    }
  cout << endl;
  cout << "***Please choose one of the following using the menu below: ***"<< endl;
 
  cout << "1: Edit Product Sale Unit" << endl;
  cout << "2: Purchase Product" << endl;
  cout << "3: List Sales from Specific Client" << endl;
  cout << "4: Quit" << endl;
  
  getline(cin, userInput); // processing userinput for options above
  
  if (userInput == "1"){
    cout << "Please choose sale information to edit" << endl;
    cout << "PearBooks" << endl;
    cout << "PearPhone" << endl;
    cout << "PearPad" << endl;
    //options to update individual sale info for each product
    getline(cin, userProdInput);
    if (userProdInput == "PearBooks"){
      cout << "*** Please update sales. Retype Product Name, Total Cost of Individual Product, and New Amount of Units Sold ! ***" <<endl;
      getline(cin, salesEdit);
      salesData[0] = salesEdit;
      }
    if (userProdInput == "PearPhone"){
      cout << "*** Please update sales. Retype Product Name, Total Cost of Individual Product, and New Amount of Units Sold ! ***" <<endl;
      getline(cin, salesEdit);
      salesData[1] = salesEdit;  
    }
    if (userProdInput == "PearPad"){
      cout << "*** Please update sales. Retype Product Name, Total Cost of Individual Product, and New Amount of Units Sold ! ***" <<endl;
      getline(cin, salesEdit);
      salesData[2] = salesEdit;
  }
    
  ofstream
newFile("UpdatedSales.txt");
    cout << "***Done! Here is the updated list of sales! ***" << endl;
    cout << endl;
    for (int i = 0; i < salesData.size(); i++){
      newFile << salesData[i] << endl;
      }
    for (int i = 0; i < salesData.size(); i++){
      cout << i+1 << ": " << salesData[i] << endl;
    }
    }
      
  if (userInput == "2"){
    cout << "*** Please Select What Product To Purchase ***" << endl;
    cout << "PearBooks" << endl;
    cout << "PearPhone" << endl;
    cout << "PearPad" << endl;
    getline(cin, salesBuy);

    if (salesBuy == "PearBooks"){
      cout << "*** Thank you for your purchase! ***" <<endl;
      }
    if (salesBuy == "PearPhone"){
      cout << "*** Thank you for your purchase! ***" <<endl; 
    }
    if (salesBuy == "PearPad"){
      cout << "*** Thank you for your purchase! ***" <<endl;
  }
    }
  if (userInput == "3"){
  cout << "Jonathan, 20 PearBooks, 32 PearPhones, 10 PearPads" << endl;
  cout << "Ariana, 34 PearBooks, 50 PearPhones, 15 PearPads" << endl;
  cout << "Felix, 67 PearBooks, 80 PearPhones, 19 PearPads" << endl;
cout << "Gabi, 90 PearBooks, 67 PearPhones, 20 PearPads" << endl;
    cout << "Jair, 40 PearBooks, 60 PearPhones, 22 PearPads" << endl;
cout << "Ruben, 15 PearBooks, 30 PearPhones, 33 PearPads" << endl;
  }
if (userInput == "4"){
    cout << "***Thank you for visiting, have a good day!***" << endl;
  }
}

int main() {
   string userInt;
  // Asks user to input what file to select
  cout << "*** Please select which file to view. ***" << endl;
  cout << "1: Client Information" << endl;
  cout << "2: Sales Representatives Information" <<endl;
  cout << "3: Products Information" << endl;
  cout << "4: Sales Information" << endl;
  cout << "5: Quit" << endl;
  getline(cin, userInt);

  if ( userInt == "1"){
    ClientData();
  }
  if ( userInt == "2"){
    RepsData();
  }
  if ( userInt == "3"){
    ProductsServices();
  }
  if ( userInt == "4"){
    SalesInfo(); 
  }
  if ( userInt == "5"){
    cout << "*** Have a good day ***" << endl;
  }
  return 0;
}
