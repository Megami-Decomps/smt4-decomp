/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d06e4` (_code @ 0x4d06e4, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001641c4(void);

/* Supplied declaration required: FUN_001641c4. */


void FUN_004d06e4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  if (temp_v0 < *(short *)(param_1 + 0x30)) {
    do {
      FUN_001641c4();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)(param_1 + 0x30));
  }
  *(unsigned short *)(param_1 + 0x30) = 0;
  return;
}

} /* extern "C" */
