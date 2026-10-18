/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034ee48` (_code @ 0x34ee48, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


int FUN_0034ee48(int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = 0;
  temp_v0 = 0;
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x5c)) {
    do {
      temp_v2 = *(int *)(param_1 + 0x5c) + temp_v0;
      temp_v0 = temp_v0 + 1;
      if (*(char *)(param_1 + (temp_v2 & 3) * 0x14 + 0x18) == '\x01') {
        temp_v1 = temp_v1 + 1;
      }
    } while (temp_v0 < (unsigned int)(*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x5c)));
  }
  return temp_v1;
}
