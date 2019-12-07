#include "transaction.h"

struct Block {
  char block_hash[64];
  unsigned int id;
  unsigned int timestamp;
  char previous_block_hash[64];
  struct Transaction* transactions;
  unsigned int transactions_length;
};

void print_block(const struct Block* block);
int validate_block(const struct Block* block);
char* serialize_block(const struct Block* block);
void store_block(const struct Block* block);