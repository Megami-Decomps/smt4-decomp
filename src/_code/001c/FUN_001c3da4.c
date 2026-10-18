/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c3da4` (_code @ 0x1c3da4, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044d198; /* 0x44d198 */

/* Supplied declaration required: FUN_0026df40. */


void FUN_001c3da4(unsigned short *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 != (unsigned short *)0x0) {
    FUN_0026df40(*param_1);
  }
  else {
    FUN_0026df40(0);
  }
  *(unsigned char *)(DAT_0044d198 + 0xe8) = param_1 == (unsigned short *)0x0;
  return;
}
