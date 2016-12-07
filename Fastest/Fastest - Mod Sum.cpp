/*
https://www.codingame.com/clashofcode/clash/report/275091dede70fc7bd0b5720ac564b6404152d6
The program:
You must find the sum of the mods of a list of numbers.
Modular arithmetic refers to the remainder of the divide function. A mod B = the remainder of A/B.

For example: 
5 mod 2 = 1
15 mod 6 = 3

INPUT:
Line 1: An integer M describing divisor.
Line 2: The number N of values.
Line 3: A list of N numbers E separated by spaces.

OUTPUT:
A single line: The sum of numbers E mod M in the list

CONSTRAINTS:
M > 1
1 ≤ N < 20

EXAMPLE:
Input
3
4
4 5 8 12
Output
5
 */
 
#include <iostream>
int main(){
    int c, M, N, E, i;
    std::cin >> M >> N;
    for (i = 0; i < N; i++) {
        std::cin >> E;
        c += E % M;
    }
    std::cout << c;
}