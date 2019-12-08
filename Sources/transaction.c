#include "transaction.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

char* serialize_transaction(const struct Transaction* transaction) {
  char* seralized_transaction = (char*) malloc(sizeof(struct Transaction));
  strcpy(seralized_transaction, "test"); // TODO: Remove it
  return seralized_transaction;
}