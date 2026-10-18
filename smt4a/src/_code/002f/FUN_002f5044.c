/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5044` (_code @ 0x2f5044, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0010724f; /* 0x10724f */

/* Supplied declaration required: FUN_002e4e92. */
/* Supplied declaration required: FUN_002e6e14. */


void FUN_002f5044(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = 0;
  if (param_1[1] != 0) {
    FUN_002e4e92(param_1[1],&LAB_0010724f);
    FUN_002e6e14();
    param_1[1] = 0;
  }
  return;
}
