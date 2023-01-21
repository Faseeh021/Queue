#include<iostream>
using namespace std;
class queue{
private:
	int rear;
	int front;
	int *arr;
	int size;
public:
	queue(int s)
	{
		rear = front = 0;
		arr =  new int[s];
		size = s;
	}
	void enQueue(int e)
	{
		if((rear+1)% size == front)
		{
			rear = front;
			arr[rear] = e;
		}
		else{
		
	    arr[rear] = e;
		
			rear++;
		}
	}
	int deQueue()
	{
		int x;
		if(front == rear)
		{
			cout << "queue is empty: "<<endl;
		}
		if(front == size-1)
		{
			front = 0;
		}
		else{
			front++;
			x = arr[front];
			if(front == rear)
			{
				rear = front = 0;
			}
			return x;
		}
	}
	int chk()
	{
		if(rear == front)
		{
			cout << "queue is empty: " << endl;
			return -1;
		}
		else{
			return arr[front++];
		}
	}
	bool isempty()
	{
		if(front == rear)
		{
			return true;
		}
		else{
			return false;
		}
	}
	bool isfull()
	{
		if(rear == size-1)
		{
			return true;
		}
		else{
			return false;
		}
	}
};

int main()
{
	int t;
	int size = 100;
	queue s(size);
    s.deQueue();
	s.enQueue(5);
	cout << s.chk() << endl;
	s.enQueue(10);
	cout << s.chk() << endl;
	s.enQueue(15);
	cout << s.chk() << endl;
	s.enQueue(20);
	cout << s.chk() << endl;
	t=s.deQueue();
	cout << s.chk() << endl;
	cout << t;
	
}