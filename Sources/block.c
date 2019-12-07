#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    print_transaction(&current_tx);
  }

  return 0;
}

char* serialize_block(const struct Block* block) {
  // Serialize the block + transactions
  return "test";
}

void store_block(const struct Block* block) {
  char* id_str = (char*) malloc(sizeof(unsigned int));
  sprintf(id_str, "%u", block->id);
  
  char* filename = (char*) malloc((strlen("block_")+strlen(id_str))*sizeof(char));
  strcat(filename, "block");
  strcat(filename, id_str);

  char* serialized_block = serialize_block(block);
  printf("Serialize block[%u]=[%s]\n", block->id, serialized_block);

  FILE* file = fopen(filename, "w");
  printf("Open the file[%s]\n", filename);

  printf("Write block[%u] in the file[%s]\n", block->id, filename);
  fprintf(file, "%s", serialized_block);

  printf("Close the file[%s]\n", filename);
  fclose(file);
}