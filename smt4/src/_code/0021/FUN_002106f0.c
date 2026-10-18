/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002106f0` (_code @ 0x2106f0, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_004e3178; /* 0x4e3178 */

/* Supplied declaration required: FUN_002bda30. */


void FUN_002106f0(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  
  if (param_1 >= 2) {
    return;
  }
  piVar1 = (int *)(&DAT_004e3178)[param_1];
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      FUN_002bda30();
    }
    *(unsigned char *)(piVar1 + 3) = 1;
    piVar1[2] = 0;
  }
  return;
}
