#include "sem2_lab2_q1.cpp"

class stack{
	public:
	Node* top;
	LinkedList ll;
	
	//Construct
	stack(){
		top=ll.head;
	}

	//Function for inserting on top
	void topinsert(int value){
		//insertAt(int pos, int value)
		ll.insertAt(1,value);
		// Top = new head
		top = ll.head;
	}

	//deleting from top
	void topdelete(){
		//void deleteAt(int pos)
		ll.deletiat(1);
		//top = new_head
		top = ll.head;
	}

	//if empty
	bool isEmpty(){
		if(top == NULL){return true;}
		return false;
	}

	//size of ll
	void size(){
		//Use countItems
		ll.countitems();
	}

	//display of top element
	void topDisplay(){
		cout << "The top is " << ll.head->data << endl;
	}

	// function for display
	void display(){
		ll.display();
	}
};
