//A. Beautiful Matrix
#include<iostream>
using namespace std;
int distantce(int i,int j)
{   int step=0;
    while (i!=2||j!=2)
    {
        if(i!=2)
        {if(i<=2)
        {
            i++;
            step++;
        }
        else if(i>=2)
            {step++;
            i--;
            }
        }
        if(j!=2)
        {
            if(j<=2)
            {j++;
            step++;}
            else if(j>=2)
            {step++;
            j--;
            }
        }
    }
    
    return step;
}
int main()
{   
    int k=0;
    int x[5][5];
    for(int i=0;i<5;i++)
    {for(int j=0;j<5;j++)
    {
        cin>>x[i][j];
        if(x[i][j]==1)
        {
            k=distantce(i,j);
        }
    }}
    cout<<k<<endl;
}

//optimized approach

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int x[5][5];
//     int r = 0, c = 0;
    
//     // Read the matrix and find the position of '1'
//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 5; j++) {
//             cin >> x[i][j];
//             if (x[i][j] == 1) {
//                 r = i;
//                 c = j;
//             }
//         }
//     }
    
//     // Calculate the minimum number of moves
//     int moves = abs(r - 2) + abs(c - 2);
//     cout << moves << endl;
    
//     return 0;
// }