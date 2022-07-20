# Write your MySQL query statement below
select user_id ,concat(substr(upper(name),1,1),substr(lower(name),2)) as name from Users order by user_id; 