#include"stackusingll.cpp"

class Qbyst{
	public:
	Node* front;
	Node* end;
	stack s1;
	stack s2;

Qbyst(){
	end=s1.top;
}


// function for Enqueue
void enqueue(int value){
	//Just use push
	s1.push(value);
}

//function for dequeue
void dequeue()
{
	//If queue is empty
	if(s1.top==NULL)
	{
		cout << "You're deleting way too much! Stop.\n";
	return;	
	}

	else
{
		//Transfer the data to stack 2
		while(s1.top!=NULL)
		{
			s2.push(s1.top->data);
			s1.pop();
		}
		//pop 1 element from s2 and transfer everything back
		s2.pop();
		while(s2.top!=NULL)
		{
			s1.push(s2.top->data);
			s2.pop();
		}
	}
}
void size(){
	s1.size();
}

bool isEmpty(){
	s1.isEmpty();
}
//top element
void top(){
	//Use s1 stack top
	s1.topDisplay();
}
// function for display
void display(){
	s1.display();
}

};
