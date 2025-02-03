// BeeCrowd 1197 - Back to High School Physics.

/* A particle has initial velocity and constant acceleration. If its velocity after certain 
time is v then what will its displacement be in twice of that time?

Input:
The input will contain two integers in each line. Each line makes one set of input. These two 
integers denote the value of v (-100 ≤ v ≤ 100) and t(0 ≤ t ≤ 200) ( t means at the time the 
particle gains that velocity). The end of the input is determined by EOF.

Output:
For each line of input print a single integer in one line denoting the displacement in double 
of that time. */

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int V, T;
    while(cin >> V >> T)

        // Printa o dobro do produto dos dois números digitados.      
        printf("%d\n", 2*V*T);
  
    return 0;
}
