#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
  cout << "Software Store" << endl;
  cout << "Enter your name"<< endl;

  string name;
  getline (cin >> ws, name);
  cout << "You put in the name " << name << "." << endl;

  cout << "Enter Plan purchased, They are \"Plan A\", \"Plan B\", \"Plan C\"." << endl;
  string plan;
  getline (cin >> ws, plan);

  string currentplan;
  double startprice;
  int startgig;
  int addcost;

  if (plan == "Plan A" || plan == "plan A" || plan == "plan a" || plan == "Plan a"){
  startprice = 39.99;
  startgig = 2;
  currentplan = "Plan A";
  addcost = 8;
  }

  else if (plan == "Plan B" || plan == "plan B" || plan == "plan b" || plan == "Plan b"){
  startprice = 59.99;
  startgig = 8;
  currentplan = "Plan B";
  addcost = 8;
  }

  else if (plan == "Plan C" || plan == "plan C" || plan == "plan c" || plan == "Plan c"){
  startprice = 79.99;
  startgig = 1;
  currentplan = "Plan C";
  addcost = 0;
  }

  else {
    cout << "Invalid plan input. Please enter \"Plan A\", \"Plan B\", or \"Plan C\"." << endl;
    return 0;
  }
  
  cout << "You put in the plan " << currentplan << "." << endl;

  cout << "Enter the number of gigabytes used" << endl;
  int gig;
  cin >> gig;
  cout << "You put in the number of gigabytes used as " << gig << "." << endl;


  double totalcost;
  int savings;
  int savings2;
  string neededplan;
  string neededplan2;
  int savegigs;
  int isplanneeded;

  if (currentplan == "Plan A" && gig > startgig){
    totalcost = startprice + ((gig - startgig) * addcost);
    if(totalcost > 59.99 && totalcost < 79.99){
    savings = totalcost - 59.99;
    neededplan = " on Plan B";
    isplanneeded = 1;
    }
    else if (totalcost > 79.99){
    savings = totalcost - 79.99;
    neededplan = " on Plan C";
    isplanneeded = 3;
    savings2 = totalcost - (59.99 + ((gig - 8) * addcost));
    neededplan2 = " on Plan B";
    }
  }

  else if (currentplan == "Plan A" && gig <= startgig){
  totalcost = startprice;
  savings = 0.00;
  neededplan = "";
  isplanneeded = 2;
  }

  else if (currentplan == "Plan B" && gig > startgig){
    totalcost = startprice + ((gig - startgig) * addcost);
    if (totalcost >= 79.99){
    savings = totalcost - 79.99;
    neededplan = " on Plan C";
    isplanneeded = 1;
    }
    else if (totalcost < 79.99 && totalcost > 59.99){
    savings = 0.00;
    neededplan = "";
    isplanneeded = 2;
    }
    }

  else if (currentplan == "Plan B" && gig <= startgig){
  totalcost = startprice;
    if (gig <= 4){
    savings = 20.00;
    neededplan = " on Plan A";
    isplanneeded = 1;
    }
    else if (gig > 4){
    savings = 0.00;
    neededplan = "";
    isplanneeded = 2;
    }
  }

  else if (currentplan == "Plan C" && gig > 10){
    totalcost = startprice;
    neededplan = "";
    savings=0.00;
    isplanneeded = 2;
  }
  
  else if (currentplan == "Plan C" && gig <= 10){
    totalcost = startprice;
    if (gig <= 10 && gig > 4){
    savings = totalcost - 59.99;
    neededplan = " on Plan B";
    isplanneeded = 1;
    }
    else if (gig <= 4){
    savings = totalcost - 39.99;
    neededplan = " on Plan A";
    isplanneeded = 1;
    }
  }
  
  if (isplanneeded == 2){
  cout << name << ", your plan is " << currentplan << " and you used " << gig << " gigabytes. Your total cost is $" << totalcost << "." << endl;
  }
  else if (isplanneeded == 1){
    cout << name << ", your plan is " << currentplan << " and you used " << gig << " gigabytes. Your total cost is $" << totalcost << ". You would have saved $" << savings << neededplan << "." << endl;
  return 0;
  }
  else if (isplanneeded == 3){
    cout << name << ", your plan is " << currentplan << " and you used " << gig << " gigabytes. Your total cost is $" << totalcost << ". You would have saved $" << savings2 << neededplan2 << " and $" << savings << neededplan << "." << endl;
    return 0;
  }
}
