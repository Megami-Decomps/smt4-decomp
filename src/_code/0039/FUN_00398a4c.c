/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00398a4c` (_code @ 0x398a4c, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b9220(int, unsigned int);
extern unsigned int FUN_002bef7c(int);


void FUN_00398a4c(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002b9220(param_1 + 0x708,0);
  if (temp_v0 != 0) {
    *(unsigned char *)(param_1 + 1) = 2;
    *(unsigned int *)(param_1 + 0xc) = 0;
  }
  temp_v1 = FUN_002bef7c(param_1 + 0x708);
  *(unsigned int *)(param_1 + 0xa4) = temp_v1;
  return;
}
