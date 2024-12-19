-- temporary table are used to form tables out of schemas--
-- i.e. you can't use them out of this file, but can use multiple times within this file

create temporary table name_of_table
( first_name varchar(50),
last_name varchar(50),
fav_movie varchar(100)
);

select *
from name_of_table;

insert into name_of_table
Values('Siddharth', 'Angra', 'La la land');


-- there is a better method to make temp. tables --
create temporary table salary_over_50k
select *
from parks_and_recreation.employee_salary
where salary > 50000;

select *
from salary_over_50k;