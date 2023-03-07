//
//  main.c
//  test
//
//  Created by Ben Stager on 11/10/21.
//

#include <stdio.h>
#include <stdbool.h>

struct financialIdentity{
    double debt;
    double mortgage;
    double savings;
    double checking;
    double priceOfHouse;
    double downPayment;
    double add1Pay;
    
    int yearsWithDebt;
    int yearsRented;
    int debtPaid;
    
    bool ownsHouse;
    
    
} financialIdentity;

void savingsPlacement(struct financialIdentity *person, double interestRate);
   

void debt(struct financialIdentity *person, double interestRate, double add1pay);
    

void rent(struct financialIdentity *person, double rentAmount);
    

void house(struct financialIdentity *person, double mortgageAmount, double interestRate, int mortgageTerm);

int* simulate(struct financialIdentity *person, double yearlySalary, bool financiallyLiterate);
