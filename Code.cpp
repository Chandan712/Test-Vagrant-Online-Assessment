#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string product[4];    //Stores name of all products
	int cost[4];          //Stores cost of all products
	int gst[4];           //Stores gst amount of all products
	int qt[4];            //Stores quantity of all products
	
	product[0] = "Leather wallet";
	product[1] = "Umbrella";
	product[2] = "Cigarette";
	product[3] = "Honey";
	
	cost[0] = 1100;
	cost[1] = 900;
	cost[2] = 200;
	cost[3] = 100;
	
	gst[0] = 18;
	gst[1] = 12;
	gst[2] = 28;
	gst[3] = 0;
	
	qt[0] = 1;
	qt[1] = 4;
	qt[2] = 3;
	qt[3] = 2;
	
	int max_gst_index;
	int max_gst = INT_MIN;
	
	//Function to calculate maximum gst amount product
	for(int i=0; i<4; i++)
	{
	    int val = (gst[i]*cost[i])/100;  //gst amount paid for i-th Item
	    
	    if(val>max_gst)
	    {
	       max_gst = val;
	       max_gst_index = i;
	    }
	}
	
	cout << "Item with maximum gst is " << product[max_gst_index] << "." << endl;
	
	int total_amount = 0;
	
	//Function to calculate total amount paid by the user
	
	for(int i=0; i<4; i++)
	{
	    int amount = cost[i];  //current amount
	    
	    int temp = cost[i];   //temperary variable to store the value of cost of the current product
	    
	    if(temp>=500)
	    {
	        amount = amount - (5*temp)/100;
	    }
	    
	    amount = amount + (gst[i]*temp)/100;
	    
	    total_amount += amount*qt[i];
	}
	
	cout << "The total amount the user needs to pay for all the products is " << total_amount << "." << endl;
	
	return 0;
}
