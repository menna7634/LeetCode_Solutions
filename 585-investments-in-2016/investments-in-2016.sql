/* Write your T-SQL query statement below */

with res as(
select * ,
count(tiv_2015) over(partition by tiv_2015 order by tiv_2015) as count_row,
count(concat(lat,lon)) over(partition by lat,lon order by lat,lon) as count_lat_lon
from insurance
)
select sum(cast (tiv_2016 as decimal (10,2))) as tiv_2016
 from res
where count_row >1 and count_lat_lon = 1
