/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d097c` (_code @ 0x4d097c, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001641c4(void);

/* Supplied declaration required: FUN_001641c4. */


void FUN_004d097c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  if (temp_v0 < *(short *)(param_1 + 0x5a)) {
    do {
      FUN_001641c4();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)(param_1 + 0x5a));
  }
  *(unsigned short *)(param_1 + 0x5a) = 0;
  return;
}

} /* extern "C" */
