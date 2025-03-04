SELECT gender, avg(age), max(age) , min(age), count(age)
FROM parks_and_recreation.employee_demographics
GROUP BY gender;

-- ORDER BY -- 
SELECT *
FROM parks_and_recreation.employee_demographics
ORDER BY first_name;

SELECT *
FROM parks_and_recreation.employee_demographics
ORDER BY first_name DESC;

SELECT *
FROM parks_and_recreation.employee_demographics
ORDER BY gender, age;
-- the column named first is sorted first --
-- i.e if I swap to ORDER BY age, gender... we won't see sorting in gender as there
-- aren't any similar values in age to use gender for sorting --