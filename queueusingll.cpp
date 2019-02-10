#include"sem2_lab2_q1.cpp"

class queue{
	public:
	Node* front;
	Node* end;
	LinkedList ll;
	
	//Constructor
	queue(){
		end=ll.head;
		front=ll.tail;
	}

	//insert in last
	void enqueue(int value){
		//Use insertAt from LL
		ll.insertAt(1,value);
		//Update front and end
		end=ll.head;
		front=ll.tail;

	}

	//delete from front
	void dequeue(){
		ll.deleti();
		//You know the drill
		end=ll.head;
		front=ll.tail;
	}

	// to check if queue is empty
	bool isEmpty(){
		if(end == NULL){return true;}
		return false;
	}

	//size of queue
	void size(){
		ll.countitems();
	}

	//Display function
	void display(){
		ll.display();
	}

	//display in end
	void enddisp(){
		cout << "The head is " <<ll.head->data << endl;
	}

};
