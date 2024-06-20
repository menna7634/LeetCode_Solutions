/* Write your T-SQL query statement below */

select Department , Employee , Salary from 
( select d.name as Department , e.name as Employee , e.salary as Salary , DENSE_RANK() 
over (PARTITION by d.id order by salary desc) as dn from Department D 
inner join Employee E on e.departmentId=d.id) as new
where dn<=3