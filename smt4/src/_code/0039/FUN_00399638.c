/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00399638` (_code @ 0x399638, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00292f28(unsigned int);
/* Supplied declaration required: FUN_002bf818. */
extern int FUN_002c09d0(unsigned int);


void FUN_00399638(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c09d0(0x400);
  if ((temp_v0 != 0) && (temp_v0 = FUN_00292f28(0x76), temp_v0 != 0)) {
    temp_v0 = 0;
    do {
      if (temp_v0 <= *(int *)(param_1 + 0x14)) {
        FUN_002bf818(param_1 + temp_v0 * 0x8c + 0x618);
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
