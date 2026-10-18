/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f1a54` (_code @ 0x4f1a54, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_004f1a9c; /* 0x4f1a9c */

/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_003f9e80. */


void FUN_004f1a54(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if ((*(int *)(param_1 + 0x65c) != 0) && (*(int *)(param_1 + 0x658) == 0)) {
    temp_v0 = 0x48;
    FUN_00178b04(0x48,&LAB_004f1a9c,0x441);
    if (temp_v0 != 0) {
      FUN_003f9e80();
    }
    *(int *)(param_1 + 0x658) = temp_v0;
  }
  return;
}
