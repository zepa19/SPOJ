# [Size Contest!!! Reloaded!!](http://www.spoj.com/problems/JH1/)
> SPOJ Problem Set (challenge)  
> Problem code: JH1 

After seeing the popularity of the question size contest, Aradhya  thought of adding its new version.

The problem statement is really simple. You are given 'n' and and then next n lines contain 'n' numbers. You have to calculate p and q.

'p' is the sum of numbers at even places ,but we add them only if they are positive.
'q' is the sum of numbers at odd places,but we add them only when they are negative.

Then you need to find the absolute value of p and q.

If p is greater  than q or equal to q,then print "Some Mirrors Lie!".( without quotes )
If q is greater than p, then print "Every Girl Lies!"( without quotes )

### Input

	First line contains a integer t=number of test cases.
    Then each test case contains a number n. and next line conatin 'n' numbers separated by a space.
    1<=n<=100
    and the numbers are less than 10^18

### Output

	A single line for each test case as described above.

Example
-------

### Input:

	1
	5
	-1 2 -3 5 -4

### Output:

	Every Girl Lies!


> Added by:	Aradhya  
> Date:	2012-06-29  
> Time limit:	1s  
> Source limit:	250B  
> Memory limit:	1536MB  
> Cluster:	Cube (Intel G860)  
> Languages:	All  
> Resource:	Own Problem  
