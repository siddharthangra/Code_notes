SELECT gender,avg(age)
FROM parks_and_recreation.employee_demographics
GROUP BY gender
HAVING avg(age) > 35;

-- Having is used for defined function, where can't be --
SELECT occupation, avg(salary)
FROM parks_and_recreation.employee_salary
WHERE occupation LIKE '%manager%'
GROUP BY occupation
HAVING avg(salary) > 60000;


-- LIMIT --
SELECT *
FROM parks_and_recreation.employee_demographics
ORDER BY age DESC
LIMIT 3;

-- ALIASING --
-- this is basically changing the columns name --
SELECT gender, avg(age) AS mean_age
FROM parks_and_recreation.employee_demographics
group by gender
having mean_age > 40;
