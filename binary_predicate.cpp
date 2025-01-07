#include <iostream>
#include <vector>
#include <iterator>
#include <map>
#include <algorithm>

using namespace std;

// Define UserAccount struct
struct UserAccount {
    int balance;
    int daysSinceRegistered;
};

// Function to compute and print analytics based on the user accounts
void computeAnalytics(map<string, UserAccount>& accounts) {
    // Vector to store new accounts
    vector<UserAccount> newAccounts;

    // Extract the UserAccount from the map and insert into the vector
    transform(accounts.begin(), accounts.end(), back_inserter(newAccounts), [](const pair<string, UserAccount>& user) {
        return user.second;
    });

    // Remove accounts that are older than 15 days
    auto newEnd = remove_if(newAccounts.begin(), newAccounts.end(), [](const UserAccount& account) {
        return account.daysSinceRegistered > 15;
    });
    newAccounts.erase(newEnd, newAccounts.end());

    // Sort the new accounts by balance in descending order
    sort(newAccounts.begin(), newAccounts.end(), [](const UserAccount& lhs, const UserAccount& rhs) {
        return lhs.balance > rhs.balance;
    });

    // Output the balance of each account in the sorted order
    for (const UserAccount& account : newAccounts) {
        cout << account.balance << endl;
    }
}

int main() {
    // Map of user accounts (user name -> UserAccount)
    map<string, UserAccount> users = {
        {"Alice", UserAccount{500, 15}},
        {"Bob", UserAccount{1000, 50}},
        {"Charlie", UserAccount{600, 17}},
        {"Donald", UserAccount{1500, 4}}
    };

    // Call the function to compute analytics
    computeAnalytics(users);

    return 0;
}
