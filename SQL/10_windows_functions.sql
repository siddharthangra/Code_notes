-- finding avg salary of gender by join method --
select gender, avg(salary) as avg_salary
from parks_and_recreation.employee_demographics as dem
join parks_and_recreation.employee_salary as sal
	on dem.employee_id = sal.employee_id
group by gender;

-- Window functions --
select gender, avg(salary) Over()   -- this tells avg salary over whole dataset
from parks_and_recreation.employee_demographics as dem
join parks_and_recreation.employee_salary as sal
	on dem.employee_id = sal.employee_id;

select dem.first_name, dem.last_name, avg(salary) Over(partition by gender)   -- this tells avg salary of gender groups
from parks_and_recreation.employee_demographics as dem
join parks_and_recreation.employee_salary as sal
	on dem.employee_id = sal.employee_id;
    
    

select dem.first_name, dem.last_name, gender, salary,
sum(salary) Over(partition by gender order by dem.employee_id ) as rolling_total 
from parks_and_recreation.employee_demographics as dem
join parks_and_recreation.employee_salary as sal
	on dem.employee_id = sal.employee_id;
-- upon using sum(salary) we calculate the total earned by each gender
-- by using order we group it and add as we go down as per employee_id in each gender


select dem.first_name, dem.last_name, gender, salary,
avg(salary) Over(partition by gender order by dem.employee_id ) as rolling_avg 
from parks_and_recreation.employee_demographics as dem
join parks_and_recreation.employee_salary as sal
	on dem.employee_id = sal.employee_id;


select dem.first_name, dem.last_name, gender, salary,
row_number() over()
from parks_and_recreation.employee_demographics as dem
join parks_and_recreation.employee_salary as sal
	on dem.employee_id = sal.employee_id;
-- This basically give me row_number which I can mold acc. to needs --

select dem.first_name, dem.last_name, gender, salary,
row_number() over(partition by gender order by salary DEsc)
from parks_and_recreation.employee_demographics as dem
join parks_and_recreation.employee_salary as sal
	on dem.employee_id = sal.employee_id;


select dem.first_name, dem.last_name, gender, salary,
row_number() over(partition by gender order by salary DEsc) as row_num,
rank() over(partition by gender order by salary desc) as rank_num,
dense_rank() over(partition by gender order by salary desc ) as dense_rank_num
from parks_and_recreation.employee_demographics as dem
join parks_and_recreation.employee_salary as sal
	on dem.employee_id = sal.employee_id;
    
-- the difference b/w rank and dense_rank is that if you notice carefully
-- tom and jerry have same rank but in rank dwyer got 7 acc. to numerically rank
-- i.e it simply asssign rank in numerical manner tom and jerry are 5 cause first one to appear is 5
-- while dense_rank gives of actual rank i.e 6 to dwyer























