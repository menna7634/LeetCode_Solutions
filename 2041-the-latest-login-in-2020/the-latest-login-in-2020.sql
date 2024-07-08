/* Write your T-SQL query statement below */
select user_id , last_stamp from (
select user_id , time_stamp as last_stamp , row_number() over (PARTITION BY user_id order by time_stamp desc) as rn
from Logins where year(time_stamp)=2020) as ranked
where rn=1
