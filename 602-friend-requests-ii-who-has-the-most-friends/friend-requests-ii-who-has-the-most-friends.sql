/* Write your T-SQL query statement below */
select top(1) * from ( 
select distinct requester_id as id ,sum(1) as num 
 from (
select requester_id  from RequestAccepted 
union all
select accepter_id from RequestAccepted 
) as new 
group by requester_id ) as res order by num desc