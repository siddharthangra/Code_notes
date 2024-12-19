-- Store procedures are used to store queries like as function in schemas-

create procedure large_salaries()
select *
from parks_and_recreation.employee_salary
where salary >= 50000;

call large_salaries();

delimiter $$
create procedure large_salaries2()
begin
	select *
    from parks_and_recreation.employee_salary
    where salary > 50000;
    select *
    from parks_and_recreation.employee_salary
    where salary > 10000;
end $$
delimiter ;

call large_salaries2();
-- in above there are now two table one for salary > 50000 and another for > 10000


-- Prompting input parameters in procedures
-- so in the below procedure we will be giving off the salary
-- of the employee whose employee_id is given as an input
delimiter $$
create procedure large_salaries3(employee_id_var int) -- the input variable
begin
	select salary
    from parks_and_recreation.employee_salary
    where employee_id = employee_id_var;
    
end $$
delimiter ;

call large_salaries3(1);
