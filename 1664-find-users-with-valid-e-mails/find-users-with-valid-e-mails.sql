/* Write your T-SQL query statement below */

select * from users where mail  like '[A-Za-z]%' 
and mail  not like '%[^A-Za-z0-9._-]%@leetcode.com'
and mail like '%@leetcode.com'

