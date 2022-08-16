# Solution
In this problem it is easy to realise that all reachable postion by grasshoper are of the form n*a+m*b.<br>If using certain set of operations, we can reach the postion say y, then we can reach every postion of the form ky, by repeating those operations.<br>The main theme of the problem is to realise that the samllest y that satisfies this condition is gcd(a,b), and the grasshopper can reach the location x if and only if gcd(a,b) divides x.

So the proof of this claim requires proving two thing.


### First
 If gcd(a,b) divides x then x can be represented in the form p*a+q*b for some p,q, using  [Extended euclids algorithm](<https://en.wikipedia.org/wiki/Extended_Euclidean_algorithm>).<br>
 So, gcd(a,b) = k<sub>1</sub>*a+k<sub>2</sub>*b.<br>
 Since gcd(a,b) divides x. <br>
 So x = k<sub>3</sub>* gcd(a,b).<br>
 So x = p*a+ qb . where p = k<sub>3</sub> *k<sub>1</sub> and q = k<sub>3</sub>* k<sub>2</sub><br>

### Second
If gcd(a,b) does not divides x, then the grasshopper can not reach x.<br>
Lets prove it using contradiction.<br>
Lets assume gcd(a,b) does not divide x, but grasshopper can reach x, So x can be written as x=p*a+q*b.<br>
Since gcd(a,b) divdes a and b it divides the all the linear combination of a and b. therefore it divides x.<br>
which is a contradiction. which completes the proof of our claim.<br>

So, the overall time complextity per test case is the [time complexity of finding gcd(a,b)](<https://www.geeksforgeeks.org/time-complexity-of-euclidean-algorithm/>) which is O(log<sub>∅</sub>min(a,b))<br>
where ∅ = golden ration ≈1.618 


## Bonus: 
The same logic can be applied if the grasshopper is restricted to make only.<br>
Small forward jumps and long backward jumps ***OR*** <br>
Small backward jumps and long forward jumps. <br>

You can try to prove this as exercise. <br>
*HINT*: Does there exist integers p,q such a*p+b*q=0 