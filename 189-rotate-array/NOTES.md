**first approach**
using intermediate array
space complexity O(n)
time compexity O(n)


**another approach is doing bubble rotate**
1 2 3 4 5 6 7 for k =3
like in bubble sort we will go on swapping element like here
we will form k iteration
each time will will swap the last element with the adjacent untill it reaches the 0th index
for k=3
after 1st iteration
7 1 2 3 4 5 6
after 2nd iteration
6 7 1 2 3 4 5
after 3rd iteration
5 6 7 1 2 3 4
​
time complexity O(k.nums.size())
​
**one more approach is reversal**
for that first reverse elements from 0 to  nums.size()-1-k (-1 since starting from zero ,its position)
then rotate nums.size()-k to nums.size() elements
then rotate whole vector;
we will get the desired array after k rotaion time complexity O(n) and space O(1).
​
​
​
​
