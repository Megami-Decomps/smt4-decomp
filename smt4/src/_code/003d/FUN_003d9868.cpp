/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d9868` (_code @ 0x3d9868, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002733a0(int);

extern int DAT_00439ad4; /* 0x439ad4 */

/* Supplied declaration required: FUN_002733a0. */


void FUN_003d9868(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00439ad4;
  if ((*(int *)(param_1 + 0x3214) == 0) && (0 < DAT_00439ad4)) {
    FUN_002733a0(DAT_00439ad4);
    *(int *)(param_1 + 0x3214) = temp_v0;
  }
  return;
}

} /* extern "C" */
