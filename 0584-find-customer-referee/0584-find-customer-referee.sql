/* Write your PL/SQL query statement below */
select name from Customer where (referee_id!=2 and referee_id is not null) or (referee_id is null);