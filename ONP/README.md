# [Transform the Expression](http://www.spoj.com/problems/ONP/)
> SPOJ Problem Set (classical)  
> Problem code: ONP 


Transform the algebraic expression with brackets into RPN form (Reverse Polish Notation). Two-argument operators: +, -, *, /, ^ (priority from the lowest to the highest), brackets ( ). Operands: only letters: a,b,...,z. Assume that there is only one RPN form (no expressions like a*b*c).

### Input

	t [the number of expressions <= 100]
    expression [length <= 400]
    [other expressions]

### Output

	The expressions in RPN form, one per line.

Example
-------

### Input:

	3
    (a+(b*c))
    ((a+b)*(z+x))
    ((a+t)*((b+(a+c))^(c+d)))

### Output:

	abc*+
    ab+zx+*
    at+bac++cd+^*


> Added by:	Michał Małafiejski
> Date:	2004-05-01
> Time limit:	5s
> Source limit:	50000B
> Memory limit:	1536MB
> Cluster:	Cube (Intel G860)
> Languages:	All except: NODEJS PERL 6 VB.net
> Resource:	-
