-- Length --
-- basically it tells the length of a string

select first_name, length(first_name), upper(first_name), lower(first_name)
from parks_and_recreation.employee_demographics
order by 2;

select trim("         so many spaces.           ");


select first_name,
left(first_name, 3),
right(first_name, 4),
substring(first_name,3,2),
birth_date,
substring(birth_date,6,2) AS month
from parks_and_recreation.employee_demographics;


select first_name, replace(first_name, 'a', 'z')
from parks_and_recreation.employee_demographics;

select first_name, locate('An', first_name)
from parks_and_recreation.employee_demographics;

select first_name, last_name, 
concat(first_name,' ', last_name) as full_name
from parks_and_recreation.employee_demographics;

