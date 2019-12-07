
struct Transaction {
  char fromAccountId[64];
  char toAccountId[64];
  unsigned int op;
  unsigned int amount;
  unsigned int timestamp;
  char* signature;
};

void print_transaction(const struct Transaction* transaction);
int verify_transaction(const struct Transaction* transaction);
char* serialize_transaction(const struct Transaction* transaction);