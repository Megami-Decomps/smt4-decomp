/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00139750` (_code @ 0x139750, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004eac5c; /* 0x4eac5c */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_00155ccc. */
/* Supplied declaration required: FUN_002c526c. */


void FUN_00139750(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*(int *)(param_1 + 0x14) != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      if (*(char *)(param_1 + 0x18) == '\0') {
        *(unsigned int *)(param_1 + 8) = 0;
        *(unsigned int *)(param_1 + 0xc) = 0;
      }
      else {
        software_interrupt(0x20);
        if (*(int *)(param_1 + 0x14) < 0) {
          FUN_002c526c();
        }
        FUN_00155ccc(&DAT_004eac5c,param_1);
      }
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      software_interrupt(0x23);
      *(int *)(param_1 + 0x14) = 0;
    }
  }
  return;
}
