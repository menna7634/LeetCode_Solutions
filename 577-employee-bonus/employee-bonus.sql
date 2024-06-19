/* Write your T-SQL query statement below */

select E.name , B.bonus from Employee E full outer join Bonus B on E.empId=B.empId 
where  E.empId  not in (select empId from bonus) or B.bonus<1000