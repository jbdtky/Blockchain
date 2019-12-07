#include "transaction.h"

struct Block {
  unsigned int id;
  unsigned int timestamp;
  char merkle_hash[64];
  struct Transaction* transactions;
  unsigned int transactions_length;
};

void print_block(const struct Block* block);
int validate_block(const struct Block* block);