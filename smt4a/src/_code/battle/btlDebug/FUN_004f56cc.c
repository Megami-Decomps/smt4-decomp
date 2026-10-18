/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f56cc` (_code @ 0x4f56cc, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057a6e8; /* 0x57a6e8 */

/* Supplied declaration required: FUN_0031cb74. */


void FUN_004f56cc(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0x3588) == 0) {
    temp_v0 = DAT_0057a6e8;
    if (param_2 != 0) {
      temp_v0 = param_2;
    }
    if (0 < temp_v0) {
      FUN_0031cb74(temp_v0);
      *(int *)(param_1 + 0x3588) = temp_v0;
    }
  }
  return;
}
