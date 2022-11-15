create table detail(id int, name char(20), address varchar(20), salary int);
insert into detail 
values(1,'rt','ttyuwe',20000);insert into detail
values(2,'trt','tyuwe',40000); insert into detail
values(3,'urt','uwe',25000); insert into detail 
values(4,'irt','yuwe',30000); insert into detail 
values(5,'ort','ruwe',37000); insert into detail 
values(6,'lrt','luwe',36000);
 CREATE OR ALTER PACKAGE 
c_package AS
--Adds a customer
PROCEDURE addCustomer(c_id detail.id%type,c_name detail.name%type,
c_addr detail.address%type,c_sal detail.salary%type);
--Removes a customer
PROCEDURE delCustomer(c_id detail.id%TYPE);
--Lists all customers
PROCEDURE listCustomer;
END c_package;
/
CREATE OR REPLACE PACKAGE BODY c_package AS
PROCEDURE addCustomer(c_id detail.id%type,
c_name detail.name%type,
c_addrdetail.address%type,
c_saldetail.salary%type)
IS
BEGIN
INSERT INTO detail (id,name,address,salary)
VALUES(c_id, c_name, c_addr, c_sal);
END addCustomer;


PROCEDURE delCustomer(c_id detail.id%type) IS
BEGIN
DELETE FROM detail
WHERE id = c_id;
END delCustomer;
PROCEDURE listCustomer IS
CURSOR c_customers is
SELECTname FROM detail;
TYPE c_list is TABLE OF detail.Name%type;
name_list c_list := c_list();
counter integer :=0;
BEGIN
FOR n IN c_customers LOOP
counter := counter +1;
name_list.extend;
name_list(counter) := n.name;
dbms_output.put_line('Customer(' ||counter|| ')'||name_list(counter));
END LOOP;
END listCustomer;
END c_package;
/
DECLARE
code detail.id%type:= 6;
BEGIN
c_package.addcustomer(7, 'Rajnish', 'Chennai', 3500);
c_package.addcustomer(8, 'Subham', 'Delhi', 7500);
c_package.listcustomer;
c_package.delcustomer(code);
c_package.listcustomer;
END;
/