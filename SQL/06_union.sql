select *
from parks_and_recreation.employee_demographics;

select *
from parks_and_recreation.employee_salary;

select first_name, last_name, 'old Man' as label
from parks_and_recreation.employee_demographics
where age > 40 AND gender = 'male'
Union
select first_name, last_name, 'old Lady' as label
from parks_and_recreation.employee_demographics
where age > 40 AND gender = 'female'
UNION
select first_name, last_name, 'highly paid employee' as label
from parks_and_recreation.employee_salary
where salary > 70000
order by first_name, last_name;

 