/* Write your T-SQL query statement below */

SELECT 
    sell_date, 
    COUNT(DISTINCT product) AS num_sold, 
    STUFF((SELECT ',' + product
           FROM Activities a2
           WHERE a1.sell_date = a2.sell_date
           GROUP BY product
           ORDER BY product
           FOR XML PATH('')), 1, 1, '') AS products
FROM 
    Activities a1
GROUP BY 
    sell_date
ORDER BY 
    sell_date;

--The STUFF function is used to replace the first character (in this case, the leading comma) with an empty string -->(,1,1,'') means start at position 1, delete 1 character (the leading comma), and replace it with an empty string
-- for xml path This converts the concatenated results into XML format to concatenate strings from multiple rows into one row