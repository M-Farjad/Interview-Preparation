-- Delete
DELETE FROM employees
WHERE emp_id = 101;

-- Insert
INSERT INTO employees (emp_id, name, salary, department_id)
VALUES (101, 'John Doe', 6000, 1);

-- Update
UPDATE employees
SET salary = 7000
WHERE emp_id = 101;

-- Select employees with salary between 4000 and 6000
SELECT emp_id, salary
FROM employees
WHERE salary BETWEEN 4000 AND 6000;

-- Select employees present in both tables
SELECT t1.emp_id, t1.name, t2.department_id
FROM table1 t1
INNER JOIN table2 t2
ON t1.emp_id = t2.emp_id;

-- Inner join employees with departments
SELECT e.name, d.department_name
FROM employees e
INNER JOIN departments d
ON e.department_id = d.department_id;

-- Find the second highest salary
SELECT MAX(salary) AS second_highest_salary
FROM employees
WHERE salary < (SELECT MAX(salary) FROM employees);

-- Sort Records by Salary
SELECT name, salary FROM employees ORDER BY salary DESC;

-- Having clause example
-- This query selects departments with an average salary greater than 5000
SELECT department, AVG(salary) AS average_salary
FROM employees
GROUP BY department
HAVING AVG(salary) > 5000;

-- Group by example
-- This query calculates the average salary for each department
SELECT department, AVG(salary) AS average_salary
FROM employees
GROUP BY department;

-- Aggregate functions example
SELECT COUNT(*) AS total_employees, AVG(salary) AS average_salary
FROM employees;

-- Select employees with salary between 4000 and 6000
-- This query retrieves employees whose salary is between 4000 and 6000
SELECT emp_id, salary
FROM employees
WHERE salary BETWEEN 4000 AND 6000;

-- 👉 Explanation:
-- SYSDATE → current date
-- ADD_MONTHS(SYSDATE, -n) → date n months ago
-- hire_date >= → employees hired in last n months
SELECT *
FROM employees
WHERE hire_date >= ADD_MONTHS(SYSDATE, -n);

-- like
-- Select employees with names starting with 'J'
SELECT name FROM employees WHERE name LIKE 'J%';
-- Select employees with names containing 'a'
SELECT name FROM employees WHERE name LIKE '%a%';
-- Select employees with names ending with 'n'
SELECT name FROM employees WHERE name LIKE '%n';
-- Select employees with names containing 'a' and ending with 'n'
SELECT name FROM employees WHERE name LIKE '%a%n';
-- Select employees with names starting with 'J' or 'A'
SELECT name FROM employees WHERE name LIKE 'J%' OR name LIKE 'A%';

-- Distinct
SELECT DISTINCT department_id FROM employees;

-- Limit
SELECT * FROM employees LIMIT 5;
-- skip first 1 record
SELECT * FROM employees LIMIT 5 OFFSET 1;

-- Add a column
ALTER TABLE employees ADD COLUMN age INT;

--Create a new table
CREATE TABLE departments (
    department_id INT PRIMARY KEY,
    department_name VARCHAR(50)
);

-- Delete a Table
DROP TABLE IF EXISTS old_employees;

 
-- Select employees present in both tables
-- This query retrieves employees that are present in both table1 and table2
SELECT t1.emp_id
FROM table1 t1
INNER JOIN table2 t2
ON t1.emp_id = t2.emp_id;
-- not supported by all SQL dialects
-- SELECT emp_id
-- FROM table1
-- INTERSECT
-- SELECT emp_id
-- FROM table2;


-- Find the second highest salary
-- This query retrieves the second highest salary from the employees table
SELECT MAX(salary) AS second_highest_salary
FROM employees
WHERE salary < (SELECT MAX(salary) FROM employees);

-- Find the second highest salary using a different method
-- This query retrieves the second highest salary using a subquery
SELECT DISTINCT salary
FROM employees
WHERE salary < (SELECT MAX(salary) FROM employees)
ORDER BY salary DESC
LIMIT 1;

-- Find the second highest salary using a window function
SELECT DISTINCT salary
FROM (
    SELECT salary, 
           DENSE_RANK() OVER (ORDER BY salary DESC) AS rank
    FROM employees
) AS ranked_salaries
WHERE rank = 2;

-- Find the second highest salary using a CTE
WITH RankedSalaries AS (
    SELECT salary, 
           DENSE_RANK() OVER (ORDER BY salary DESC) AS rank
    FROM employees
)
SELECT salary
FROM RankedSalaries
WHERE rank = 2;

-- cascade, restrict, set null
-- Foreign Key Rules
-- Ensure Referential Integrity:
-- Foreign key values in the employees table must exist in the departments table.
-- Behavior on Parent Table Changes:
-- CASCADE: Changes in the parent table automatically apply to child rows.
-- SET NULL: Setting a foreign key to NULL if the parent row is deleted or updated.
-- RESTRICT: Prevent changes in the parent if a foreign key reference exists.
CREATE TABLE employees (
    emp_id INT PRIMARY KEY,
    name VARCHAR(50),
    department_id INT,
    FOREIGN KEY (department_id) REFERENCES departments(department_id)
    ON DELETE SET NULL
    ON UPDATE CASCADE
);
