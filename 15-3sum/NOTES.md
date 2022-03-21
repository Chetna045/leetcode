we will sort the elements so duplicate no. becomes adjacent
now check for condition  num.size()>3 otherwise return empty array
now one by one select elements till nums.size()-2 as at least 3 elements are required.
and subtract value of that element with req sum say (s) and initialize low to(i+1) and high to size-1
and iterate while low<high
if value of low +high==s;
push low high and i values in ans
then increment low and decrement high until its different than previous value since that i elemet can have more than 1 combination.
if value of low+high!=s
increment low and decrement high.