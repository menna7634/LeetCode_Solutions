/* Write your T-SQL query statement below */
select user_id ,  CONCAT(
        UPPER(LEFT(name, 1)),
        LOWER(Right(name, LEN(name) - 1))
    ) AS name from Users order by user_id



-- Upper(str) Convert what str all to uppercases
-- LEFT() function extracts a number of characters from a string (starting from left)
-- RIght() function extracts a number of characters from a string (starting from right)