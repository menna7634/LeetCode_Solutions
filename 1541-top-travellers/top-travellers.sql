/* Write your T-SQL query statement below */

select u.name , isnull(sum(distance),0) as travelled_distance  from Users u
left outer join Rides r
on u.id = r.user_id
group by u.name , user_id
order by travelled_distance  desc , u.name asc