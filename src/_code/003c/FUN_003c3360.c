/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c3360` (_code @ 0x3c3360, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_003c3360(unsigned int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)(param_2 + 0x44a8);
  temp_v0 = *puVar1;
  if ((temp_v0 & 0x100000) != 0) {
    temp_v0 = (temp_v0 & 0xbffffdff) | 0x12004440;
  }
  else {
    if ((temp_v0 & 0x80000000) == 0) {
      *puVar1 = (temp_v0 & 0xadfffbbf) | 0x200;
      return;
    }
    temp_v0 = (temp_v0 & 0xfffffdff) | 0x52004440;
  }
  *puVar1 = temp_v0;
  return;
}
