#include"queueusingll.cpp"

class stbyq{
	public:
	Node* top;
	queue q1;
	queue q2;
	//Construct
	stbyq()
	{
		top=q1.end;
	}
//Push function
void push(int value)
{
	//Using enqueue
	q1.enqueue(value);
}

//del
void pop()
{
	//if stack is empty
	if(q1.end==NULL)
	{
		cout<< "You're removing too much! STOP!" << endl;
		return;
	}
	else
	{
		//Take all the elements to q2
		while(q1.end->next!=NULL)
		{
			q2.enqueue(q1.front->data);
			q1.dequeue();
		}
		//Delete the  last element
		q1.dequeue();
		while(q2.end!=NULL)
		{
			q1.enqueue(q2.front->data);
			q2.dequeue();
		}
	}
}

//to check if its empty
bool isEmpty()
{
	q1.isEmpty();
}

//to check the size
void size(){
	q1.size();
}

//top display
void topdisdp(){
	cout << "The top is " << q1.end->data << endl;
}

// funnction for display
void display(){
	q1.display();
}

};
