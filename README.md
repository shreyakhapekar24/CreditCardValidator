# CreditCardValidator
The Credit Card Validator project is a C++ program designed to validate credit card numbers using the Luhn algorithm. Credit card validation is a critical process for ensuring the accuracy and integrity of credit card information. The project offers a command-line interface (CLI) that allows users to input a credit card number, after which the program performs a series of checks to determine whether the provided number is valid or not.



Luhn Algorithm:

The Luhn algorithm, also known as the "modulus 10" or "mod 10" algorithm, is a simple yet effective method for validating a variety of identification numbers, including credit card numbers. It works by applying a series of mathematical operations to the digits in the card number and then checking if the result is divisible by 10.

The key steps of the Luhn algorithm are as follows:

1. Starting from the rightmost digit (the check digit) and moving left, double the value of every second digit.
2. If doubling a digit results in a number greater than 9, subtract 9 from that number.
3. Sum all the digits in the credit card number, including both the doubled and unchanged digits.
4. If the sum is divisible by 10 (i.e., the remainder is 0 when divided by 10), the credit card number is considered valid.



