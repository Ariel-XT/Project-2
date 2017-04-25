#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class SpentItemType
{
private:
  double SpentItemTypeAmount;
public:
  string SpentItemTypeID;
  string SpentItemTypeName;

  SpentItemType(string x = "No-ID", string y = "NoName", double z = 0.0)
  {
    SpentItemTypeID = x;
    SpentItemTypeName = y;
    SpentItemTypeAmount = z;
  }
  void SetSpentItemInformation(string ItemTypeID, string ItemTypeName, double amount)
  {
    //cout << "Please Enter the Spent Item ID: ";
    //cin >> ItemTypeID;
    SpentItemTypeID = ItemTypeID;
    //cout << "Please Enter the Spent Item Name: ";
    //cin >> ItemTypeName;
    SpentItemTypeName = ItemTypeName;
    //cout << "Please Enter the Spent Item Amount: ";
    //cin >> amount;
    if (amount > 0)
      SpentItemTypeAmount = amount;
    else
    {
      cout << "That amount is Invalid please enter an amount greater than 0";
      cin >> amount;
      SpentItemTypeAmount = amount;
    }
  }
  string GetSpentItemTypeID(){return SpentItemTypeID;}
  string GetSpentItemTypeName(){return SpentItemTypeName;}
  double GetSpentItemTypeAmount(){return SpentItemTypeAmount;}
};

class BudgetItemType : public SpentItemType
{
private:
  double BudgetItemAmount;
public:
  string BudgetItemName;
  string BudgetItemID;

  BudgetItemType(string x = "NoID", string y = "NoName", double z = 0.0)
  {
    BudgetItemID = x;
    BudgetItemName = y;
    BudgetItemAmount = z;
  }
  void SetBudgetItemInformation(string itemID, string itemName, double amount) // sets baseline values
  {
    //cout << "Please Enter the Budget Item ID: ";
    //cin >> itemID;
    BudgetItemID = itemID;
    //cout << "Please Enter the Budget Item Name: ";
    //cin >> itemName;
    BudgetItemName = itemName;
    //cout << "Please Enter the Budget Item Amount: ";
    //cin >> amount;
    if (amount > 0)
      BudgetItemAmount = amount;
    else
    {
      cout << "That amount is Invalid please enter an amount greater than 0";
      cin >> amount;
      BudgetItemAmount = amount;
    }
  }
  string GetBudgetItemID(){return BudgetItemID;}
  string GetBudgetItemName(){return BudgetItemName;}
  double GetBudgetItemAmount(){return BudgetItemAmount;}
  virtual void PrintInformation() =0;
};
class Housing : public BudgetItemType
{
private:
  string ItemID;
  double BudgetAmount; // total amount
  int NumberofItem;
  SpentItemType itemName[10];
public:
  Housing()
  {
    BudgetItemType("H", "Housing", 0.0);
  }
  void setInformation(x)
  {
    BudgetAmount = x;
  }
  void PrintInformation()
  {
    cout << "Housing Item ID is H" << endl;
    cout << "Housing Budget Amount is : " << BudgetAmount << endl;
    for (int i = 0; i < NumberofItem; ++i)
    {
      cout << itemName[i].GetSpentItemTypeID() << " ";
      cout << itemName[i].GetSpentItemTypeName() << " ";
      cout << itemName[i].GetSpentItemTypeAmount() << " ";
    }
    int sum = 0;
    for (int i = 0; i < NumberofItem; ++i)
    {
      sum += itemName[i].GetSpentItemTypeAmount();
    }
    cout << "The Total of all items purchsed is : " << sum << endl;
    cout << "The amount left in the Housing Budget is : " << BudgetAmount - sum << endl;
    cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-" << endl;
  }
  void AddNewSpentItem()
  {

  }
};
class Utilities : public BudgetItemType
{
private:
  string ItemID;
  double BudgetAmount;
  int NumberofItem;
  SpentItemType itemName[10];
public:
  Utilities()
  {
    BudgetItemType("U", "Utilities", 0.0);
  }
  void setInformation()
  {

  }
  void PrintInformation()
  {
    cout << "Utilities Item ID is U" << endl;
    cout << "Utilities Budget Amount is : " << GetBudgetItemAmount() << endl;
    for (int i = 0; i < NumberofItem; ++i)
    {
      cout << itemName[i].GetSpentItemTypeID() << " ";
      cout << itemName[i].GetSpentItemTypeName() << " ";
      cout << itemName[i].GetSpentItemTypeAmount() << " ";
    }
    int sum = 0;
    for (int i = 0; i < NumberofItem; ++i)
    {
      sum += itemName[i].GetSpentItemTypeAmount();
    }
    cout << "The Total of all items purchsed is : " << sum << endl;
    cout << "The amount left in the Utilities Budget is : " << GetBudgetItemAmount() - sum << endl;
    cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-" << endl;
  }
  void AddNewSpentItem()
  {

  }
};
class Food : public BudgetItemType
{
private:
  string ItemID;
  double BudgetAmount; //total amount
  int NumberofItem;
  SpentItemType itemName[10];
public:
  Food()
  {
    BudgetItemType("F", "Food", 0.0);
  }
  void setInformation()
  {

  }
  void PrintInformation()
  {
    cout << "Food Item ID is F" << endl;
    cout << "Food Budget Amount is : " << GetBudgetItemAmount() << endl;
    for (int i = 0; i < NumberofItem; ++i)
    {
      cout << itemName[i].GetSpentItemTypeID() << " ";
      cout << itemName[i].GetSpentItemTypeName() << " ";
      cout << itemName[i].GetSpentItemTypeAmount() << " ";
    }
    int sum = 0;
    for (int i = 0; i < NumberofItem; ++i)
    {
      sum += itemName[i].GetSpentItemTypeAmount();
    }
    cout << "The Total of all items purchsed is : " << sum << endl;
    cout << "The amount left in the Food Budget is : " << GetBudgetItemAmount() - sum << endl;
    cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-" << endl;
  }
  void AddNewSpentItem()
  {

  }
};
class FastFood : public Food
{

};
class Groceries : public Food
{

};

void loadData()
{
  ifstream myFile("budget.txt");
  string BudgetID;
  string BudgetName;
  string BudgetAmount;
  while (myFile >> BudgetID >> BudgetName >> BudgetAmount)
  {
    if (BudgetID == "H")
      {
        Housing obj1();
        obj1.setInformation(BudgetAmount);
      }
  }



}
void addItem()
{

}
void printReport()
{

}
void saveInfo()
{

}
int main()
{
  bool y = 1;
  int x = 0;
  while (y == 1)
  {
    cout << "1.   Load Budget and spent items Data" << endl;
    cout << "2.   Add Budget Item" << endl;
    cout << "3.   Print Budget report" << endl;
    cout << "4.   Save Budget and Spent Information" << endl;
    cout << "5.   Exit Program" << endl;
    cin >> x;
    while (x != 1 || x != 2 || x != 3 || x != 4 || x != 5)
    {
      cout << " Invalid command, please try again." << endl;
      cin >> x;
    }
    if (x == 1)
      loadData();
    if (x == 2)
      addItem();
    if (x == 3)
      printReport();
    if (x == 4)
      saveInfo();
    if (x == 5)
    {
      cout << "Thanks! Good Bye.";
      y = 0;
    }
  }
  return 0;
}
