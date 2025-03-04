-- CTE --
-- Common Table Expression --
-- it's used to define a subquery --

WITH name_of_tabel as
(
select gender, avg(salary) as avg_salary, max(salary) max_salary, 
min(salary) min_salary, count(salary) count_salary
from parks_and_recreation.employee_demographics as dem
join parks_and_recreation.employee_salary as sal
	on dem.employee_id = sal.employee_id
group by gender
) 
select avg(avg_salary)
from name_of_tabel;

-- I can't call the table outside this query simply cause I haven't stored it
-- this problem will be handled in the next file --


-- The name of columns can simpply be changed under () with name of table
WITH name_of_tabel(gender,avg_salary, max_salary, min_salary, count_salary) as
(
select gender, avg(salary) , max(salary) , 
min(salary) , count(salary) 
from parks_and_recreation.employee_demographics as dem
join parks_and_recreation.employee_salary as sal
	on dem.employee_id = sal.employee_id
group by gender
) 
select *
from name_of_tabel;




-- Hence we can join two tables as CTE, this will allow us to do easy changes in individual queries as well --
WITH CTE_example as
(
select employee_id, gender, birth_date
from parks_and_recreation.employee_demographics 
where birth_date >= 1985-09-12
),
CTE_example_2 as
(
select employee_id,salary, first_name
from parks_and_recreation.employee_salary
where salary > 50000
)
select *
from CTE_example
join CTE_example_2
	on CTE_example.employee_id = CTE_example_2.employee_id;


