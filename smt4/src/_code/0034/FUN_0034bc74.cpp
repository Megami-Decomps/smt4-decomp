/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034bc74` (_code @ 0x34bc74, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_0023e378(unsigned int);


unsigned int FUN_0034bc74(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v3 = 1;
  temp_v1 = 0;
  do {
    temp_v2 = temp_v1 * 0x44 + 0x40;
    temp_v0 = FUN_0023e378(*(unsigned int *)(*(int *)(param_1 + 0x18) + temp_v2));
    if (temp_v0 == 0) {
      temp_v3 = 0;
    }
    else {
      *(unsigned int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x18) + temp_v2) + 8) + 0x3c) = 1;
      *(unsigned int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x18) + temp_v2) + 8) + 0x40) = 1;
      *(unsigned int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x18) + temp_v2) + 8) + 0x38) = 2;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  return temp_v3;
}

} /* extern "C" */
