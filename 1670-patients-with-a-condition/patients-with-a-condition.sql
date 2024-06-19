/* Write your T-SQL query statement below */
select * from Patients where conditions like 'DIAB1%' or conditions like '% DIAB1%' 

-- start with DIAD1 or contain DIAB1 with space before it 