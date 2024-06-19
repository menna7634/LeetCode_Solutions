/* Write your T-SQL query statement below */

select t1.id from Weather t1 , Weather t2 where DATEDIFF(DAY,t2.recordDate,t1.recordDate)=1 and t1.temperature>t2.temperature