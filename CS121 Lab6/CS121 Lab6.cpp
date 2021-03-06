/*
	Zach Hofmeister		3-11-19
	Lab 6 - Traverse the List
	Demonstrates understanding of pointers and linked lists. Prints out a list's values, and sums the list.
*/
#include "pch.h"
#include <iostream>

using namespace std;

struct ListNode { //Node for the linked list
	double value1, value2;
	ListNode *next;
};

int main() {
	//Initialize the links
	ListNode *head = nullptr;
	head = new ListNode{1, 2, nullptr};
	
	ListNode *link2 = new ListNode{3, 4, nullptr};
	head->next = link2;

	ListNode *link3 = new ListNode{5, 6, nullptr};
	link2->next = link3;

	ListNode *link4 = new ListNode{7, 8, nullptr};
	link3->next = link4;

	ListNode *link5 = new ListNode{9, 10, nullptr};
	link4->next = link5;

	//Current node for iteration
	ListNode *currentNode = head;
	//Values for final cout
	double sum1 = 0, sum2 = 0, largest = 0;
	cout << "===Printing the linked list===" << endl;
	while (currentNode != nullptr) { //Loop through the list
		static int count = 1;
		//Print value
		cout << "Node " << count << "'s first value is " << currentNode->value1 << endl;
		cout << "Node " << count << "'s second value is " << currentNode->value2 << endl;
		//Add to sums
		sum1 += currentNode->value1;
		sum2 += currentNode->value2;
		//Find largest
		if (currentNode->value1 > largest) {
			largest = currentNode->value1;
		}
		if (currentNode->value2 > largest) {
			largest = currentNode->value2;
		}
		currentNode = currentNode->next; //Move to next link
		count++; //Increase counter
	}

	//Final couts
	cout << "The sum of the first values is " << sum1 << endl;
	cout << "The sum of the second values is " << sum2 << endl;
	cout << "The largest value of all is " << largest << endl;

	return 0;
}

/*
	SAMPLE OUTPUT
	===Printing the linked list===
	Node 1's first value is 1
	Node 1's second value is 2
	Node 2's first value is 3
	Node 2's second value is 4
	Node 3's first value is 5
	Node 3's second value is 6
	Node 4's first value is 7
	Node 4's second value is 8
	Node 5's first value is 9
	Node 5's second value is 10
	The sum of the first values is 25
	The sum of the second values is 30
	The largest value of all is 10

	Press any key to close this window . . .
*/