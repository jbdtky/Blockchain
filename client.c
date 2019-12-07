#include <stdio.h>
#include <stdlib.h>

#include "block.h"

int main(int argc, char const *argv[]) {
  struct Transaction* txs = (struct Transaction*) malloc(10*sizeof(struct Transaction));
  struct Transaction tx1 = { "account1", "account2", 0, 100, 0 };
  struct Transaction tx2 = { "account2", "account1", 0, 50, 0 };
  txs[0] = tx1;
  txs[1] = tx2;

  struct Block block = {
    0,
    0,
    "",
    txs,
    2
  };

  Block:validate_block(&block);

  return 0;
}
