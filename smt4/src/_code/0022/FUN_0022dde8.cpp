/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022dde8` (_code @ 0x22dde8, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int devilGetRecord(void);

/* Supplied declaration required: devilGetRecord. */


void FUN_0022dde8(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_2;
  devilGetRecord();
  if ((temp_v0 != 0) && (*(unsigned short *)(temp_v0 + 0x90) < 0x160)) {
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
