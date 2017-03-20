/* @src : https://www.hackerrank.com/challenges/cipher
 *
 * Given a binary message S of size N bits and an integer K, an encryption algorithm takes N bits as message and encrypts them as follows:
 * Message is written down K times, each time shifted by 0, 1, 2, ..., K-1 bits.
 * If message is 1001010 and K = 4, then it looks so:
	1001010
	 1001010
	  1001010
	   1001010

 * Now XOR of the above representation is calculated, for example, XOR-ing the numbers in the above case is like:
	1001010
	 1001010
	  1001010
	   1001010
	----------
	1110100110
 * Given the encrypted data, can you decrypt it to the actual binary message?
 * Input: The first line contains two integers N and K.
		   The second line contains a string S of length N+K-1 consisting of ones and zeros.

 * Output: The decrypted string of length N consisting of ones and zeros.
 * EXAMPLE I/P: 6 2
				 1110001

 * EXAMPLE O/P: 101111
	EXPLANATION: 1 0 1 1 1 1
				   1 0 1 1 1 1
				 -------------
				 1 1 1 0 0 0 1
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*ABHINAV GUPTA ABHIG605@GMAIL.COM*/
int arr[1000002];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,k;
    scanf("%d%d\n",&n,&k);
    int start=0,current=0;
    for(int i=0;i<n;i++) {
        if ( (i - start) == k)
            current ^= arr[start++];
        arr[i] = ( getchar() - '0') ^ current;
        printf("%d",arr[i]);
        current^=arr[i];
    }
    printf("\n");
    return 0;
}