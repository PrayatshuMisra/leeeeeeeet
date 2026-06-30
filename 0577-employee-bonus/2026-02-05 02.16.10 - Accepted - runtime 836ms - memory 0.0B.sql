# Write your MySQL query statement below

-- SELECT e.name, b.bonus
-- FROM Employee e , Bonus b
-- WHERE e.empID=b.empID and (b.bonus<1000 or b.bonus is null);
-- here FROM wali query mein it is implicit INNER JOIN toh null drop automatically thus bad way.

SELECT e.name, b.bonus
FROM Employee e
LEFT JOIN Bonus b
ON e.empID = b.empID
WHERE b.bonus < 1000 OR b.bonus IS NULL;
