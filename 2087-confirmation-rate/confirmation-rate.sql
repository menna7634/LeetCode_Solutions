/* Write your T-SQL query statement below */
select u.user_id , round (sum(CASE WHEN action = 'confirmed' then 1.00 else 0.00 end)/count(*) ,2) as confirmation_rate from Signups u left  join Confirmations c 
on u.user_id=c.user_id 
group by  u.user_id 