/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00290e04` (_code @ 0x290e04, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: aeabi_uidivmod. */


void FUN_00290e04(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = 0;
  temp_v3 = *(int *)(param_1 + 0xc);
  if (0 < temp_v3) {
    do {
      temp_v2 = *(int *)(param_1 + 0x10) + temp_v1 * 0x14;
      aeabi_uidivmod(param_2,*(unsigned int *)(*(int *)(temp_v2 + 0xc) + 0xc));
      temp_v1 = temp_v1 + 1;
      *(unsigned int *)(temp_v2 + 4) = temp_v0;
      *(unsigned int *)(temp_v2 + 8) = 1;
    } while (temp_v1 < temp_v3);
  }
  return;
}
