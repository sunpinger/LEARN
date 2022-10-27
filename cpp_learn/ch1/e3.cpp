#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int seq_size = 18;
    vector<int> fib_seq(seq_size);
    vector<int> lucas_seq(seq_size);
    vector<int> pell_seq(seq_size);
    vector<int> tri_seq(seq_size);
    vector<int> square_seq(seq_size);
    vector<int> pen_seq(seq_size);

    int elem_seq[seq_size] ={
        1,2,3, //Fibonacci
        3,4,7, //Lucas
        2,5,12, //Pell
        3,6,10, //Triangular
        4,9,16, //Square
        5,12,22 //Pentagonal
    };

    for(int i=0;i<3;i++){
        fib_seq[i] = elem_seq[i];
        lucas_seq[i] = elem_seq[i+3]; 
        pell_seq[i] = elem_seq[i+6];
        tri_seq[i] = elem_seq[i+9];
        square_seq[i] = elem_seq[i+12];
        pen_seq[i] = elem_seq[i+15];
    }

    for(int i=3;i<seq_size;i++){
        fib_seq[i] = fib_seq[i-1] + fib_seq[i-2];
        lucas_seq[i] = lucas_seq[i-1] +lucas_seq[i-2];
        pell_seq[i] = 2*pell_seq[i-1] + pell_seq[i-2];
        tri_seq[i] = tri_seq[i-1] + i + 1;
        square_seq[i] = (i+1)*(i+1);
        pen_seq[i] = pen_seq[i-1] + 3*i + 1;
    }
    
    /*
    vector<string> seqs(6); 
    seqs = {
        "fib_seq","lucas_seq","pell_seq",
        "tri_seq","square_seq","pen_seq"
    };

    for(int i=0; i<6;i++){
        cout <<  seqs[i] << ": ";
        for(int j =0;i<seq_size;i++){
            cout << seqs[i][j] << ' ';
        }
        cout << '\n';
    }
    */
    cout <<  "fib_seq" << ": ";
        for(int i =0;i<seq_size;i++){
            cout << fib_seq[i] << ' ';
        }
    cout << '\n';
    cout <<  "lucas_seq" << ": ";
        for(int i =0;i<seq_size;i++){
            cout << lucas_seq[i] << ' ';
        }
    cout << '\n';
    cout <<  "pell_seq" << ": ";
        for(int i =0;i<seq_size;i++){
            cout << pell_seq[i] << ' ';
        }
    cout << '\n';
    cout <<  "tri_seq" << ": ";
        for(int i =0;i<seq_size;i++){
            cout << tri_seq[i] << ' ';
        }
    cout << '\n';


    return 0;
}