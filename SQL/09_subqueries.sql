-- Subquries are basically a query within another query

select *
from parks_and_recreation.employee_salary;

select *
from parks_and_recreation.employee_demographics
where employee_id IN
				( select employee_id
                from parks_and_recreation.employee_salary
                where dept_id = 1);
                
select first_name, salary,
(select avg(salary)
from parks_and_recreation.employee_salary)
from parks_and_recreation.employee_salary;


select gender, avg(age), max(age), min(age), count(age)
from parks_and_recreation.employee_demographics
group by gender;

select avg(max_age) as avg_of_max_age
from 
(select gender, avg(age), max(age) as max_age, min(age), count(age)
from parks_and_recreation.employee_demographics
group by gender) as new_table;
-- don't forget to name the new table --

