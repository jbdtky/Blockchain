#include <stdio.h>

#include "block.h"

void print_block(const struct Block* block) {
  printf("Block[id=%u, timestamp=%u, merkle_hash=%s, transactions_length=%u]\n", 
  block->id, 
  block->timestamp, 
  block->merkle_hash, 
  block->transactions_length);
}


int validate_block(const struct Block* block) {
  struct Transaction current_tx, prev_tx;

  print_block(block);

  for (int i=0; i<block->transactions_length; ++i) {
    current_tx = block->transactions[i];
    Transaction:print_transaction(&current_tx);
  }
  return 0;
}