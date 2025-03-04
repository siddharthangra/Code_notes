SELECT *
from parks_and_recreation.employee_demographics;

Select * 
from parks_and_recreation.employee_salary;

SELECT *
from parks_and_recreation.employee_demographics AS dem
INNER JOIN parks_and_recreation.employee_salary AS sal
	ON  dem.employee_id = sal.employee_id - 1;
    
-- INNER JOIN --
-- it joins the columns and the rows with same elements, that's why
-- as you can see employee_id 2 is not in dataset cause it's not present in salary table
-- also remember that in case of similar column names in tables, you have to specify the dataset as well


-- OUTER JOIN --
-- it has a left join and a right join
-- using any just signify that, it will print that whole table but for another table, it'll print 
-- all columns printed in left/right join 
SELECT *
from parks_and_recreation.employee_demographics AS dem
LEFT JOIN parks_and_recreation.employee_salary AS sal
	ON  dem.employee_id = sal.employee_id; 
-- the data set won't have employee_id 2 as demographics don't have it 

SELECT *
from parks_and_recreation.employee_demographics AS dem
RIGHT JOIN parks_and_recreation.employee_salary AS sal
	ON  dem.employee_id = sal.employee_id; 
    
    
-- SELF JOIN --

