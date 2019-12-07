
struct State {
  unsigned long block_id;
  struct Account* accounts;
};

void store_state(const struct State* state);