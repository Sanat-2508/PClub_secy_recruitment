# The Game of Grasshopper

A Grasshopper is initially at position zero, and there is some food for Grasshopper at position x, but Grasshopper can make only two types of jumps, small jump and long jump, using long jumps he can jump forward or backwards by a distance of a, and small jumps he can jumps forward or backwards by a distance of b.
Can the Grasshopper reach to the food.

## Input

Each test contains multiple test cases. The first line of input contains a single integer ***t*** (1 ≤ ***t*** ≤ 10<sup>5</sup>) — the number of test cases. The following lines contain the descriptions of the test cases.

The only line of each test case contains three integers ***a***,***b*** and ***x*** (1 ≤ ***a*** , ***b*** , ***x*** ≤ 10<sup>9</sup>) — the distance travelled by long jump, the distance travelled by small jump and target location respectivly.

## Output

Output t lines to the output — a single line for each test case. Output "YES" if it is possible for the Grasshopper to get to the target location. Output "NO" otherwise.

## Example

### Input

5<br>
3 2 5<br>
8 5 3<br>
4 2 7<br>
17 7 3<br>
3 2 7<br>

### Output

Yes <br>
Yes <br>
No <br>
Yes <br>
Yes <br>

## Note

In the first test case, Grasshopper can make a small jump forward (0->2) and a long jump forward (2->5) to reach the target location<br>
In the second test case, Grasshopper can make a long forward jump followed (0->8) and a small jump backward (8->3) to reach the target location.<br>
In the third test case, its easy to show to whatever location that the Grasshopper lands on is a even number so it can never reach at 7.<br>
In the fourth test case, Grasshopper can make one long forward jumps (0->17) and the two small backwards jumps (17->10->3) to reach the target location. <br>
In the fifth test case, Grasshopper can make one long forward jump (0->3) and two forward small jumps (3->5->7) to reach the target location <br>
