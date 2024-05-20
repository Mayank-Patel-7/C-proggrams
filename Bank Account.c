#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

// Define the BankAccount structure
struct BankAccount {
    int account_number;
    char account_holder_name[50];
    char account_type[20];
    float balance;
};

// Function to create a new bank account
struct BankAccount create_account(int acc_number, char name[], char type[], float initial_balance) {
    struct BankAccount new_account;
    new_account.account_number = acc_number;
    strcpy(new_account.account_holder_name, name);
    strcpy(new_account.account_type, type);
    new_account.balance = initial_balance;
    return new_account;
}

// Function to deposit money into an account
void deposit(struct BankAccount *account, float amount) {
    account->balance += amount;
    printf("Amount deposited successfully.\n");
}

// Function to withdraw money from an account
void withdraw(struct BankAccount *account, float amount) {
    if (amount <= account->balance) {
        account->balance -= amount;
        printf("Amount withdrawn successfully.\n");
    } else {
        printf("Insufficient balance.\n");
    }
}

// Function to display account details
void display_account_details(struct BankAccount account) {
    printf("Account Number: %d\n", account.account_number);
    printf("Account Holder Name: %s\n", account.account_holder_name);
    printf("Account Type: %s\n", account.account_type);
    printf("Balance: %.2f\n", account.balance);
}

int main() {
    // Create a new bank account
    struct BankAccount account1 = create_account(1001, "John Doe", "Savings", 5000.00);

    // Display initial account details
    printf("Initial Account Details:\n");
    display_account_details(account1);

    // Deposit some amount
    deposit(&account1, 2000.00);

    // Display updated account details after deposit
    printf("\nAccount Details after Deposit:\n");
    display_account_details(account1);

    // Withdraw some amount
    withdraw(&account1, 1000.00);

    // Display updated account details after withdrawal
    printf("\nAccount Details after Withdrawal:\n");
    display_account_details(account1);

    getch();
    return 0;
}
