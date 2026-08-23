/*
https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/description/
there are several cards arranged in a row
take left sind or right side ( maximum value )
n = 7  k = 4
 
[ 1, 2, 3, 4, 5,  6, 1]          x     k-x  
[ 1, 2, 3, 4,]          sum 10   4     (4-4) 0
[ 1, 2, 3]          [1] sum 7    3     (4-3) 1
[ 1, 2]         [6 , 1] sum 10   2     (4-2) 2
[1]         [5 , 6 ,1 ] sum 13   1     (4-1) 3
[]       [4, 5  , 6 ,1] sum 16   0     (4-0) 4


*/