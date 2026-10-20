/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a6c50` (_code @ 0x4a6c50, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);

/* Supplied declaration required: FUN_00184310. */


void FUN_004a6c50(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_2;
  FUN_00184310();
  if ((temp_v0 != 0) && (*(unsigned short *)(temp_v0 + 0x9c) < 0x27f)) {
    temp_v0 = 0;
    do {
      if (*(short *)(param_1 + temp_v0 * 2) == param_2) {
        *(unsigned char *)(temp_v0 + param_1 + 0x20) = 1;
        return;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x10);
    temp_v0 = 0;
    do {
      if (*(short *)(param_1 + temp_v0 * 2) == -1) {
        *(short *)(param_1 + temp_v0 * 2) = (short)param_2;
        *(unsigned char *)(temp_v0 + param_1 + 0x20) = 1;
        return;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x10);
  }
  return;
}

} /* extern "C" */
