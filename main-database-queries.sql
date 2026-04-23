-- CREATE DATABASE ISLAMIC_BANK;
-- USE ISLAMIC_BANK;
-- CREATE TABLE branch (
--     branch_id INT AUTO_INCREMENT PRIMARY KEY,
--     branch_name VARCHAR(100) NOT NULL,
--     city VARCHAR(50) NOT NULL,
--     branch_code VARCHAR(20) NOT NULL UNIQUE,
--     contact_number VARCHAR(20)
-- );
-- CREATE TABLE customer (
--     customer_id INT AUTO_INCREMENT PRIMARY KEY,
--     first_name VARCHAR(50) NOT NULL,
--     last_name VARCHAR(50) NOT NULL,
--     cnic VARCHAR(15) NOT NULL UNIQUE,
--     phone VARCHAR(20) NOT NULL,
--     street VARCHAR(100),
--     city VARCHAR(50),
--     postal_code VARCHAR(10),
--     customer_type VARCHAR(20) DEFAULT 'regular'
-- );
-- CREATE TABLE account (
--     account_id INT AUTO_INCREMENT PRIMARY KEY,
--     account_type VARCHAR(20) NOT NULL CHECK (account_type IN ('savings','current')),
--     balance DECIMAL(12,2) DEFAULT 0 CHECK (balance >= 0),
--     open_date DATE DEFAULT (CURRENT_DATE),
--     customer_id INT NOT NULL,
--     branch_id INT NOT NULL,

--     FOREIGN KEY (customer_id)
--         REFERENCES customer(customer_id)
--         ON DELETE CASCADE
--         ON UPDATE CASCADE,

--     FOREIGN KEY (branch_id)
--         REFERENCES branch(branch_id)
--         ON DELETE RESTRICT
--         ON UPDATE CASCADE
-- );
-- CREATE TABLE employee (
--     employee_id INT AUTO_INCREMENT PRIMARY KEY,
--     first_name VARCHAR(50) NOT NULL,
--     last_name VARCHAR(50) NOT NULL,
--     designation VARCHAR(50) NOT NULL,
--     salary DECIMAL(10,2) NOT NULL CHECK (salary > 0)
-- );
-- CREATE TABLE employee_branch (
--     employee_id INT,
--     branch_id INT,

--     PRIMARY KEY (employee_id, branch_id),

--     FOREIGN KEY (employee_id)
--         REFERENCES employee(employee_id)
--         ON DELETE CASCADE
--         ON UPDATE CASCADE,

--     FOREIGN KEY (branch_id)
--         REFERENCES branch(branch_id)
--         ON DELETE CASCADE
--         ON UPDATE CASCADE
-- );
-- CREATE TABLE transactions (
--     transaction_id INT AUTO_INCREMENT PRIMARY KEY,
--     transaction_date DATETIME DEFAULT CURRENT_TIMESTAMP,
--     amount DECIMAL(12,2) NOT NULL CHECK (amount > 0),
--     transaction_type VARCHAR(20) NOT NULL 
--         CHECK (transaction_type IN ('Deposit','Withdrawal','Transfer Sent','Transfer Received')),
--     account_id INT NOT NULL,

--     FOREIGN KEY (account_id)
--         REFERENCES account(account_id)
--         ON DELETE CASCADE
--         ON UPDATE CASCADE
-- );
-- CREATE TABLE loan (
--     loan_id INT AUTO_INCREMENT PRIMARY KEY,
--     loan_type VARCHAR(50) NOT NULL,
--     amount DECIMAL(12,2) NOT NULL CHECK (amount > 0),
--     issue_date DATE DEFAULT (CURRENT_DATE),
--     status VARCHAR(20) DEFAULT 'pending'
-- );
-- CREATE TABLE customer_loan (
--     customer_id INT,
--     loan_id INT,

--     PRIMARY KEY (customer_id, loan_id),

--     FOREIGN KEY (customer_id)
--         REFERENCES customer(customer_id)
--         ON DELETE CASCADE
--         ON UPDATE CASCADE,

--     FOREIGN KEY (loan_id)
--         REFERENCES loan(loan_id)
--         ON DELETE CASCADE
--         ON UPDATE CASCADE
-- );
-- CREATE TABLE beneficiary (
--     beneficiary_id INT AUTO_INCREMENT PRIMARY KEY,
--     name VARCHAR(100) NOT NULL,
--     account_number VARCHAR(30) NOT NULL,
--     bank_name VARCHAR(50) NOT NULL
-- );
-- CREATE TABLE account_beneficiary (
--     account_id INT,
--     beneficiary_id INT,

--     PRIMARY KEY (account_id, beneficiary_id),

--     FOREIGN KEY (account_id)
--         REFERENCES account(account_id)
--         ON DELETE CASCADE
--         ON UPDATE CASCADE,

--     FOREIGN KEY (beneficiary_id)
--         REFERENCES beneficiary(beneficiary_id)
--         ON DELETE CASCADE
--         ON UPDATE CASCADE
-- );

-- ALTER TABLE customer
-- ADD email VARCHAR(100) UNIQUE,
-- ADD password VARCHAR(100) NOT NULL;

-- ALTER TABLE account
-- ADD account_number VARCHAR(30) UNIQUE NOT NULL;

-- *** QUERIES BY HAZRAT TO MAKE DATABASE ENDS HERE. ***

-- DESCRIBE BRANCH;
-- DESCRIBE CUSTOMER;
-- DESCRIBE ACCOUNT;
-- DESCRIBE EMPLOYEE;
-- DESCRIBE EMPLOYEE_BRANCH;
-- DESCRIBE TRANSACTIONS;
-- DESCRIBE LOAN;
-- DESCRIBE CUSTOMER_LOAN;
-- DESCRIBE BENEFICIARY;
-- DESCRIBE ACCOUNT_BENEFICIARY;

-- USE ISLAMIC_BANK;
-- SELECT * FROM account;
-- SELECT * FROM account_beneficiary;
-- SELECT * FROM beneficiary;
-- SELECT * FROM branch;
-- SELECT * FROM customer;
-- SELECT * FROM customer_loan;
-- SELECT * FROM employee;
-- SELECT * FROM employee_branch;
-- SELECT * FROM loan;
-- SELECT * FROM transactions;
