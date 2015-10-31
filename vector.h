#include <iostream>

using namespace std;

template <class T>
class vector
{
	T *v;
	int size;
public:
		vector(int m)
		{
			v = new T[size=m];
			for(int i=0;i<size;i++)
				this->v[i] = '\0';
		}
		
		T findSum(void)
		{
			T sum;
			for(int i=0;i<size;i++)
			{
				sum+=this->v[i];
			}
			return sum;
		}
		
		void display(void)
		{
			for(int i=0;i<size;i++)
				cout << v[i] << "\t";
			cout << "\n";
		}
		
		void resize(int n)
		{
			v = new int[size=n];
			for(int i=0;i<size;i++)
				this->v[i] = '\0';
		}
		
		void insert(int x)
		{
			for(int i=0;i<size;i++)
			{
				if(this->v[i] == '\0')
				{
					this->v[i] = x;
					break;
				}
			}
		}
		
		void push_back(T x)
		{
			for(int i=size-1;i>=0;i--)
			{
				if(this->v[i] == '\0')
				{
					this->v[i] = x;
					break;
				}
			}
		}
		
		int count(int start, int end, T search)
		{
			int c =0;
			for(int i=start;i<=end;i++)
			{
				if(this->v[i] == search)
					++c;
			}
			return c;
		}
		
		~vector()
		{
			delete[] v;
		}
};
