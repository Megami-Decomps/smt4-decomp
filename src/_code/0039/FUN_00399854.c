/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00399854` (_code @ 0x399854, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002931cc(unsigned int);
/* Supplied declaration required: FUN_002bf9f0. */
extern int FUN_002c0ba8(unsigned int);


void FUN_00399854(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c0ba8(0x400);
  if ((temp_v0 != 0) && (temp_v0 = FUN_002931cc(0x76), temp_v0 != 0)) {
    temp_v0 = 0;
    do {
      if (temp_v0 <= *(int *)(param_1 + 0x14)) {
        FUN_002bf9f0(param_1 + temp_v0 * 0x8c + 0x618);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 5);
    if (*(char *)(param_1 + 0x8d2) != '\0') {
      *(unsigned int *)(param_1 + 4) = 2;
      *(unsigned int *)(param_1 + 8) = 0;
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  return;
}
