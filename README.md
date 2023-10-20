# CreditCardValidator
The Credit Card Validator project is a C++ program designed to validate credit card numbers using the Luhn algorithm. Credit card validation is a critical process for ensuring the accuracy and integrity of credit card information. The project offers a command-line interface (CLI) that allows users to input a credit card number, after which the program performs a series of checks to determine whether the provided number is valid or not.




Luhn Algorithm:

The Luhn algorithm, also known as the "modulus 10" or "mod 10" algorithm, is a simple yet effective method for validating a variety of identification numbers, including credit card numbers. It works by applying a series of mathematical operations to the digits in the card number and then checking if the result is divisible by 10.

The key steps of the Luhn algorithm are as follows:

1. Starting from the rightmost digit (the check digit) and moving left, double the value of every second digit.
2. If doubling a digit results in a number greater than 9, subtract 9 from that number.
3. Sum all the digits in the credit card number, including both the doubled and unchanged digits.
4. If the sum is divisible by 10 (i.e., the remainder is 0 when divided by 10), the credit card number is considered valid.




Functionalities:

1. User Input: The program prompts the user to enter a credit card number.
2. Conversion: It converts the user-provided string of digits into an array of integers for processing.
3. Masked Display: The program masks the middle digits of the credit card number, displaying only the first four and last four digits for security.
4. Luhn Algorithm: It applies the Luhn algorithm to validate the credit card number. This algorithm involves doubling certain digits, subtracting 9 if the result is greater than 9, and summing all the digits.
5. Card Type Recognition: The program recognizes and displays the brand of the credit card based on the first few digits of the card number. It identifies Visa, Mastercard, and American Express cards.
6. Validation Result: After processing the credit card number, the program informs the user whether the card is valid or invalid. If the sum of the digits is divisible by 10, it indicates that the card is valid; otherwise, it's considered invalid.




![Screenshot (285)](https://github.com/shreyakhapekar24/CreditCardValidator/assets/97623859/5885f431-a0e6-454c-9044-43d56cb81207)

