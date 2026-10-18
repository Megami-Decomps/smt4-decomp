/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00465120` (_code @ 0x465120, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_001b1f04(void);
/* Supplied declaration required: FUN_001d0b28. */
/* Supplied declaration required: FUN_00463894. */
/* Supplied declaration required: nw_snd_internal_driver_Voice_Stop. */


void FUN_00465120(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  FUN_00463894(*(unsigned int *)(param_1 + 0x60));
  temp_v1 = 0;
  if (*(int *)(param_1 + 0x220) != 0) {
    do {
      if (*(int *)(param_1 + temp_v1 * 0x3c8 + 0x22c) != 0) {
        nw_snd_internal_driver_Voice_Stop();
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(unsigned int *)(param_1 + 0x220));
  }
  if (*(char *)(param_1 + 0xd) != '\0') {
    temp_v0 = FUN_001b1f04();
    FUN_001d0b28(temp_v0,param_1 + 0x44);
    *(unsigned char *)(param_1 + 0xd) = 0;
  }
  return;
}
