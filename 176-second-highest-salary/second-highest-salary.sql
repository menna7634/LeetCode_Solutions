/* Write your T-SQL query statement below */

select MAX(Salary) as SecondHighestSalary from Employee  where salary not in (select max(salary)  from Employee)

