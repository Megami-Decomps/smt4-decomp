/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e0798` (_code @ 0x2e0798, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f69c; /* 0x57f69c */


void FUN_002e0798(int param_1)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  puVar2 = (unsigned int *)(DAT_0057f69c + 0x2db8);
  *(int *)(DAT_0057f69c + 0x2db4) = *(int *)(DAT_0057f69c + 0x2db4) + param_1;
  temp_v0 = *puVar2 + param_1;
  *puVar2 = temp_v0;
  temp_v1 = 9999;
  if (temp_v0 < 10000) {
    temp_v1 = temp_v0;
  }
  *(unsigned int *)(DAT_0057f69c + 0x2db8) = temp_v1;
  return;
}
