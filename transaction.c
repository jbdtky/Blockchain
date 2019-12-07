#include "transaction.h"

#include <stdio.h>

void print_transaction(const struct Transaction* transaction) {
  printf("Transaction[fromAccountId=%s, toAccountId=%s, op=%u, amount=%u, timestamp=%u]\n", 
  transaction->fromAccountId, 
  transaction->toAccountId, 
  transaction->op, 
  transaction->amount, 
  transaction->timestamp);
}

int verify_transaction(const struct Transaction* transaction) {
  return 0;
}