#include "WoolTree.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stdlib.h>

using namespace std;

void display();

int main()
{
    int option;
    bool quit=false;
    WoolTree ele1;
    WoolNode *root;
    //create a stringstream variable from the string data
    string name,file;
    string type_s,quantity_s,clean_weight_s,micron_s,hauteur_meter_s;
    int quantity,clean_weight,micron,hauteur_meter;
    while(!quit)
    {
        display();

        cin>>option;
           cin.clear();
            cin.ignore(10000,'\n');
        //while( !inFile.eof() )  //read/get every line of the file and store it{

        if(option==1)  //find a Wool
        {
            cout<<"Enter type name:"<<endl;

            getline(cin,name);
            ele1.findWool(name);
            quit=false;
        }
        else if(option==2)
        {
            cout<<"Enter type name:"<<endl;
            getline(cin,name);
            ele1.rentWool(name);
            quit=false;
        }
        else if(option==3)
        {
            ele1.printWoolInventory();
            quit=false;
        }
        else if(option==4)
        {
            cout << "Enter type name:" << endl;
            getline(cin,name);
            ele1.deleteWoolNode(name);
            quit=false;
        }
        else if(option==5)
        {
            ele1.countWoolNodes();
            quit=false;
        }
        else if(option==6)
        {
            cout<<"Please input a file name"<<endl;
            getline(cin,file);
            ele1.insertfile(file);
            quit=false;
        }
        else if(option==7)
        {
            ele1.maxDepth();
            quit=false;
        }
        else if(option==8)
        {
            ele1.minDepth();
            quit=false;
        }
        else if(option==9)
        {
            ele1.printWoolpostorder();
            quit=false;
        }
        /*else if(option==1)
        {
            ele1.mirror(root);
            quit=false;
        }*/
        else if(option==10)
        {
            cout << "What's the type of product"<<endl;
            getline(cin,type_s);
            cout <<"How many do you have?"<<endl;
            getline(cin, quantity_s);
            cout <<"Percentage of the Clean_weight?"<<endl;
            getline(cin, clean_weight_s);
            cout <<"Micron?"<<endl;
            getline(cin, micron_s);
            cout <<"Hauteur meter?"<<endl;
            getline(cin,hauteur_meter_s);
            quantity = atoi(quantity_s.c_str());
            clean_weight=atoi(clean_weight_s.c_str());
            micron=atoi(micron_s.c_str());
            hauteur_meter=atoi(hauteur_meter_s.c_str());
            ele1.addWoolNode(type_s,quantity,clean_weight,micron,hauteur_meter);
            quit=false;
        }
        else if(option==11)
        {
            ele1.printLevelOrder();
            quit=false;
        }
        else if(option==12)
        {
            cout<<"Goodbye!"<<endl;
            quit=true;
        }
        else{
            cout<<"Please enter a valid option"<<endl;
            quit=false;
        }
    }
    return 0;
}

void display()
{
    cout << "======Main Menu======"<<endl;
    cout << "1. Find a Wool"<<endl;
    cout << "2. Buy a Wool"<<endl;
    cout << "3. Print the inventory" <<endl;
    cout << "4. Delete a Wool" << endl;
    cout << "5. Count the Wools" << endl;
    cout << "6. Insert a file" << endl;
    cout << "7. The Maximum Depth" << endl;
    cout << "8. The Minimum Depth" << endl;
    cout << "9. Print in the Postorder"<<endl;
    cout << "10. Add a wool"<<endl;
    cout << "11. Print in level"<<endl;
    cout << "12. Quit" << endl;

}
