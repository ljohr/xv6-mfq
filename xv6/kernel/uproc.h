struct uproc {
  int pid;       // Process ID
  int ppid;      // Parent Process ID 
  int state;     // Process state
  int prio;
  int ticks;
  int block_count;
  int full_count;
  uint64 sz;     // Size of process memory (bytes)
  char name[16]; // Process name
};
