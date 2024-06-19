/* Write your T-SQL query statement below */
select  distinct v.customer_id , count(v.customer_id) as count_no_trans from Visits v  full outer join Transactions t
on v.visit_id = t.visit_id where v.visit_id not in (select visit_id from  Transactions )
group by v.customer_id