
				TABLE-1

select*from client_master_23

CLIENTNO	NAME			ADDRESS1	ADDRESS2	CITY	PINCODE		STATE			BALDUE
c0001	rakesh joshi			-		  -		   mumbai	400054	 maharashtra		 15000
c0002	mayur patel		        -	      -	       madras	780001	 tamilnadu	             0
c0003	ishita mehta	        -	      -	       mumbai	400057	 maharashtra	      5000
c0004	amit solanki	        -	      -	      banglore	560001	 karnataka	             0
c0005	hiren pandya	        -	      -	       mumbai	400060	 maharashtra	      2000
c0006	dipak sharma	        -	      -	     mangalore	560050	 karnataka	             0





				TABLE-2
create table product_master_23
(productno varchar2(6),
description varchar2(15),
profitpercent number(4,2),
unitmaster varchar2(10),
qtyonhand number(8),
reorder1v1 number(8),
sellprice number(8,2),
costprice number(8,2)
);

insert into product_master_23 values('p08865','skirts',5,'piece',75,30,350,300);	
insert into product_master_23 values('p07975','lycra tops',5,'piece',70,30,300,175);	
insert into product_master_23 values('p07965','denim shirt',4,'piece',100,40,350,250);	
insert into product_master_23 values('p07885','pull overs',2.5,'piece',80,30,700,450);	
insert into product_master_23 values('p07868','trousers',2,'piece',150,50,850,550);	
insert into product_master_23 values('p07865','jeans',5,'piece',100,20,750,500);	
insert into product_master_23 values('p06734','cotton jeans',5,'piece',100,20,600,450);	
insert into product_master_23 values('p0345','shirts',6,'piece',150,50,500,350);	
insert into product_master_23 values('p00001','t-shrit',5,'piece',200,50,350,250);

select *from product_master_23


PRODUCTNO	DESCRIPTION	PROFITPERCENT	UNITMASTER	QTYONHAND	REORDER1V1	SELLPRICE	COSTPRICE
p00001		t-shrit			5			 piece		 200		  50	      350	      250
p00001		t-shrit			5			 piece	     200	      50	      350	      250
p0345		shirts			6			 piece	     150	      50	      500	      350
p06734		cotton jeans	5			 piece	     100	      20	      600	      450
p07865		jeans	        5	         piece	     100	      20	      750	      500
p07868		trousers	    2	         piece	     150	      50	      850	      550
p07885		pull overs	   2.5	         piece	      80	      30	      700	      450
p07965		denim shirt		4			 piece	     100	      40	      350	      250
p07975		lycra tops	    5	         piece	      70	      30	      300	      175
p08865	    skirts	        5	         piece	      75	      30	      350	      300



				TABLE-3
create table salesman_master_23
(salesmanno varchar(6)primary key,
salesname varchar(15)not null,
address1 varchar(10)not null,
address2 varchar(10),
city varchar(10),
pincode number(6),
state varchar(12),
salamt number(8,2)not null,
tgttoget number(6,2)not null,
ytdsales number(6,2)not null,
remarks varchar(10),
CONSTRAINT chk_salesmanno  CHECK (salesmanno LIKE 'S%'),
CONSTRAINT chk_salamt check (salamt!=0),
CONSTRAINT chk_tgttoget check (tgttoget!=0),
CONSTRAINT chk_ytdsales check (ytdsales!=0)
);


insert into salesman_master_23 values('S00001','aman','a/14','worli','mumbai',400002,'maharashtra',3000,100,50,'good');
insert into salesman_master_23 values('S00002','omkar','a65','nariman','mumbai',400001,'maharashtra',3000,200,100,'good');
insert into salesman_master_23 values('S00003','raj','p-7','bandra','mumbai',400032,'maharashtra',3000,200,100,'good');
insert into salesman_master_23 values('S00004','ashish','a/5','juhu','mumbai',400044,'maharashtra',3000,200,100,'good');



select*from salesman_master_23

SALESMANNO SALESNAME	ADDRESS1	ADDRESS2	CITY	PINCODE	STATE	    SALAMT	TGTTOGET	YTDSALES	REMARKS
S00001		aman		a/14		worli		mumbai	400002	maharashtra	 3000	 100	      50	    good
S00002		omkar		a65			nariman		mumbai	400001	maharashtra	 3000	 200	      100	    good
S00003		raj			p-7			bandra		mumbai	400032	maharashtra	 3000	 200	      100	    good
S00004	    ashish	    a/5	        juhu	    mumbai	400044	maharashtra	 3000	 200	      100	    good



				TABLE-4


CREATE TABLE sales_order_23
(
orderno     VARCHAR2(6) PRIMARY KEY,
clientno    VARCHAR2(6) REFERENCES client_master_23(clientno),
orderdate   DATE NOT NULL,
dellyaddr   varchar2(25),
salesmanno  VARCHAR(6) REFERENCES salesman_master_23(salesmanno),
delytype    CHAR(1),
billyn      CHAR(1),
delydate    DATE,
orderstatus VARCHAR2(10),

CONSTRAINT chk_orderno CHECK (orderno LIKE 'o%'),

CONSTRAINT chk_delytype CHECK (delytype IN ('p','f')),

CONSTRAINT chk_delydate CHECK (delydate > orderdate),

CONSTRAINT chk_orderstatus CHECK (orderstatus IN('in process','ful filled','backorder','cancelled'))
);
select sysdate from dual;
desc sales_order_23;
insert into sales_order_23 values('o19001','c0001','13-JUN-26','amreli','S00001','f','n','13-AUG-26','backorder');
insert into sales_order_23 values('o19002','c0002','25-JUN-26','rajkot','S00002','f','n','27-AUG-26','cancelled');
insert into sales_order_23 values('o46865','c0003','15-JUN-26','ahemedabad','S00001','f','n','12-AUG-26','ful filled');
insert into sales_order_23 values('o19003','c0004','03-JUN-26','rajkot','S00001','f','n','24-AUG-26','ful filled');
insert into sales_order_23 values('o46866','c0005','30-JUN-26','botad','S00001','f','n','29-AUG-26','cancelled');
insert into sales_order_23 values('o19008','c0006','15-JUN-26','amreli','S00001','f','n','05-AUG-26','ful filled');

SELECT * FROM sales_order_23

ORDERNO	CLIENTNO	ORDERDATE	DELLYADDR	SALESMANNO	DELYTYPE	BILLYN	DELYDATE	ORDERSTATUS
o19001	c0001		13-JUN-26	amreli		S00001			f			n	13-AUG-26	backorder
o19002	c0002		25-JUN-26	rajkot		S00002			f			n	27-AUG-26	cancelled
o46865	c0003		15-JUN-26	ahemedabad	S00001			f			n	12-AUG-26	ful filled
o19003	c0004		03-JUN-26	rajkot		S00001			f			n	24-AUG-26	ful filled
o46866	c0005		30-JUN-26	botad		S00001			f			n	29-AUG-26	cancelled
o19008	c0006		15-JUN-26	amreli		S00001			f			n	05-AUG-26	ful filled





					TABLE-5 


create table sales_oreder_datails_23
(orderno varchar(6) references sales_order_23,
productno varchar(6) references product_master_23,
qtyorhand number(8),
qtydise number(8),
productrate number(10,2)
);
drop table sales_oreder_datails_23
desc sales_order_23
desc product_master_23

insert into sales_oreder_datails_23 values('o19001','p07965',4,4,525);
insert into sales_oreder_datails_23 values('o19001','p07965',2,1,8400);
insert into sales_oreder_datails_23 values('o19001','p07885',2,1,5250);
insert into sales_oreder_datails_23 values('o19002','p00001',10,0,525);
insert into sales_oreder_datails_23 values('o46865','p07868',3,3,3150);
insert into sales_oreder_datails_23 values('o46865','p07868',3,1,5250);
insert into sales_oreder_datails_23 values('o46865','p00001',10,10,525);
insert into sales_oreder_datails_23 values('o46865','p0345',4,4,1050);
insert into sales_oreder_datails_23 values('o19003','p07868',2,2,1050);
insert into sales_oreder_datails_23 values('o19003','p06734',1,1,12000);
insert into sales_oreder_datails_23 values('o46866','p07965',1,0,8400);
insert into sales_oreder_datails_23 values('o46866','p07965',1,0,1050);
insert into sales_oreder_datails_23 values('o19008','p00001',10,5,525);
insert into sales_oreder_datails_23 values('o19008','p07965',5,3,1050);
insert into sales_oreder_datails_23 values('o19001','p07965',4,4,525);

select * from sales_oreder_datails_23