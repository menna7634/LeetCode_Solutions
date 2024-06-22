/* Write your T-SQL query statement below */
WITH FirstOrderDates AS (
    SELECT customer_id, MIN(order_date) AS first_order_date
    FROM Delivery
    GROUP BY customer_id
)
SELECT 
    ROUND(
        SUM(IIF(d.order_date = d.customer_pref_delivery_date, 1, 0)) * 1.0 / COUNT(*), 
        4
    ) * 100 AS immediate_percentage
FROM Delivery d
JOIN FirstOrderDates f ON d.customer_id = f.customer_id AND d.order_date = f.first_order_date
