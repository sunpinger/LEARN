#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <limits>

using namespace std;

void swap(int &val1, int &val2);
void display(const vector<int> &vec);
void display(const vector<int> *vec);
void bubble_sort(vector<int> &vec, ofstream &ofil);

int main()
{

	// testing swap function
	int a, b;
	a = 1;
	b = 2;
	cout << a << '\t' << b << endl;
	swap(a, b);
	cout << a << '\t' << b << endl;

	// testing display function
	vector<int> vec1(5);
	vec1 = {9, 7, 18, 213, 1};
	display(vec1);
	// display(&vec1);

	// testing bubble sort
	ofstream outfile("debug.txt", ios_base::app);
	bubble_sort(vec1, outfile);
	display(vec1);

	return 0;
}

void swap(int &val1, int &val2)
{
	int temp = val1;
	val1 = val2;
	val2 = temp;
}
void display(const vector<int> &vec)
{
	for (int ix = 0; ix < vec.size(); ++ix)
		cout << vec[ix] << ' ';
	cout << endl;
}
void display(const vector<int> *vec)
{
	if (!vec)
	{
		cout << "display(): the vector pointer is 0\n";
		return;
	}
	for (int ix = 0; ix < vec->size(); ++ix)
		cout << (*vec)[ix] << ' ';
	cout << endl;
}

void bubble_sort(vector<int> &vec, ofstream *ofil = 0)
{
	for (int ix = 0; ix < vec.size(); ++ix)
	{
		for (int jx = ix; jx < vec.size(); ++jx)
		{
			if (vec[ix] > vec[jx])
			{
				if (ofil != 0)
					(*ofil) << "about to call swap! ix: " << ix
							<< " jx: " << jx << "\t swapping: "
							<< vec[ix] << " with " << vec[jx] << endl;
				swap(vec[ix], vec[jx]);
			}
		}
	}
}