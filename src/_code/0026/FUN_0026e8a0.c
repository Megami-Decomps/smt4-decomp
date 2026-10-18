/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026e8a0` (_code @ 0x26e8a0, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e2ac; /* 0x43e2ac */


void FUN_0026e8a0(int param_1)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  puVar2 = (unsigned int *)(DAT_0043e2ac + 0x9870);
  *(int *)(DAT_0043e2ac + 0x986c) = *(int *)(DAT_0043e2ac + 0x986c) + param_1;
  temp_v0 = *puVar2 + param_1;
  *puVar2 = temp_v0;
  temp_v1 = 9999;
  if (temp_v0 < 10000) {
    temp_v1 = temp_v0;
  }
  *(unsigned int *)(DAT_0043e2ac + 0x9870) = temp_v1;
  return;
}
