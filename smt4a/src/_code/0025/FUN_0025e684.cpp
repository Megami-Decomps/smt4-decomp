/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025e684` (_code @ 0x25e684, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002613f0(int);

/* Supplied declaration required: FUN_002613f0. */


unsigned short FUN_0025e684(int param_1)

{
/* irregular: 1 native warning(s); review required */
  short *psVar1;
  int temp_v0;
  int temp_v1;
  
  if (param_1 != 0) {
    temp_v1 = 0;
    do {
      psVar1 = (short *)FUN_002613f0(temp_v1);
      if (*psVar1 == *(short *)(param_1 + 0x62)) {
        temp_v0 = FUN_002613f0(temp_v1);
        if (((*(short *)(temp_v0 + 2) == 0) &&
            (temp_v0 = FUN_002613f0(temp_v1), *(short *)(temp_v0 + 4) == 0)) &&
           (temp_v1 = FUN_002613f0(temp_v1), *(short *)(temp_v1 + 6) == 0)) {
          return 0;
        }
        return 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x18);
  }
  return 0;
}

} /* extern "C" */
