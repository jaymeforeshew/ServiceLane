#include <iostream>
#include <vector>

using namespace std;

/*
    Hacker Rank Challenge: Service Lane
    Problem Spec: hackerrank.com/challenges/service-lane
*/

int main() {
    
    int length, numCases;
    cin >> length >> numCases;

    // error check
    if( length < 2 || length > 100000 || numCases < 1 || numCases > 1000 ) {
        cout << "ERROR" << endl;
        return 1;
    }

    // take in freeway information
    int freeway[ length ];
    for( int i = 0; i < length; i++ ) {
        int val;
        cin >> val;
        freeway[ i ] = val;
    }
    vector< int > results;

    // do test cases
    for( int j = 0; j < numCases; j++ ) {
        
        // test case values
        int start;
        int fin;
        cin >> start >> fin;
        
        if( start > fin ) {
            cout << "ERROR" << endl;
            return 1;
        }

        int minVal = 3;

        for( int k = start; k <= fin; k++ ) {
            if( freeway[ k ] < minVal ) {
                minVal = freeway[ k ];       
            }
        }
        
        results.push_back( minVal );
    }
    // print results
    for( vector< int >::iterator it = results.begin(); it != results.end(); it++ ) {
        cout << (*it) << endl;
    }
}
