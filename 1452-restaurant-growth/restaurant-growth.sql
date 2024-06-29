/* Write your T-SQL query statement below */
select d.visited_on, sum(c3.amount) as amount,
round(cast(sum(c3.amount) as float)/7, 2) as average_amount
from 
(
    select distinct c1.visited_on 
    from Customer c1
    join Customer c2 on datediff(day, c2.visited_on, c1.visited_on) >=6
) as d
inner join Customer c3 on datediff (day, c3.visited_on, d.visited_on) between 0 and 6
group by d.visited_on
order by d.visited_on 