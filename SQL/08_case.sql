select first_name, age,
case
	when age<=30 then 'young'
    when age between 31 AND 50 then 'old'
    when age >50 then 'retirement time'
end as Age_brakcet
from parks_and_recreation.employee_demographics;


-- a table on salary for new bonused or salary raise --
-- < 50000 = 5% raise
-- > 50000 = 7% raise
-- finance = 10%

select first_name, last_name, salary,
case
	when salary < 50000 then salary + (salary * 0.05)
    when salary >= 50000 then salary + (salary * 0.07)
end as new_salary,
case
	when dept_id = 6 then salary*0.1
end as bonus
from parks_and_recreation.employee_salary;

select *
from parks_and_recreation.employee_salary;

select *
from parks_and_recreation.parks_departments;