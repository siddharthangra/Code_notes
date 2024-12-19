SELECT *
FROM parks_and_recreation.employee_salary
WHERE salary > 50000;

-- '=' , '>' , '<' , '!=' -- arithmethic operators as we know
-- Where is used to specify a condition.

-- AND & OR -- Logical operators
SELECT *
FROM parks_and_recreation.employee_demographics
WHERE first_name = 'Leslie' OR age > 40;

-- LIKE statement 
-- '%' can be used to specify anything, in prefix or suffix as per the position used at.

SELECT *
FROM parks_and_recreation.employee_demographics
WHERE first_name LIKE 'a%' ;

-- It gave any entry where the first_name starts with a and has anything at front 

-- '_' { underscore } is used to specify empty spaces 

SELECT *
FROM parks_and_recreation.employee_demographics
WHERE first_name LIKE 'a__';
-- used two underscore, i.e. signifying there are two more letters innit

SELECT *
FROM parks_and_recreation.employee_demographics
WHERE first_name LIKE 'a___';
-- simillarly using 3 underscore signifies the presence of three letters

SELECT *
FROM parks_and_recreation.employee_demographics
WHERE first_name LIKE 'a__%';