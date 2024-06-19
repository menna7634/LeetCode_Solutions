WITH TopUser AS
(
    SELECT TOP (1) u.name AS username
    FROM Users u
    JOIN MovieRating mr ON u.user_id = mr.user_id
    GROUP BY u.name
    ORDER BY COUNT(mr.user_id) DESC, u.name ASC
), 
TopMovie AS (
    SELECT TOP (1)
        m2.title AS title
    FROM
        MovieRating mr
    JOIN
        Movies m2 ON m2.movie_id = mr.movie_id
    WHERE
        MONTH(mr.created_at) = 2 AND YEAR(mr.created_at) = 2020
    GROUP BY
        m2.title
    ORDER BY
        AVG(CAST(mr.rating AS DECIMAL(10, 2))) DESC, m2.title ASC
)
SELECT 
    username AS results
FROM
    TopUser

UNION ALL

SELECT
    title
FROM
    TopMovie;
