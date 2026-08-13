# Write your MySQL query statement below
select email as EMAIL 
from Person 
group by email
having count(email)>1;