#include <iostream>

using namespace std;


void initializeMailboxes(bool mailboxes[]);
void performOperations(bool mailboxes[]);
void displayClosedMailboxes(const bool mailboxes[]);

int main()
{
    bool mailboxes[151] = {false};

    initializeMailboxes(mailboxes);

    performOperations(mailboxes);

    displayClosedMailboxes(mailboxes);

    return 0;
}

void initializeMailboxes(bool mailboxes[])
{
    for (int i = 2; i <= 150; i += 2) 
    {
        mailboxes[i] = true;
    }
}

void performOperations(bool mailboxes[])
{
    for (int i = 3; i <= 150; i += 1)
    {
        for (int j = i; j <= 150; j += i)
        {
            mailboxes[j] = !mailboxes[j];
        }
    }
}

void displayClosedMailboxes(const bool mailboxes[])
{
    for (int i = 1; i <= 150; i += 1)
    {
        if (mailboxes[i] == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
