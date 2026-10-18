/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001181b0` (_code @ 0x1181b0, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_002dc6c0; /* 0x2dc6c0 */
extern unsigned int DAT_00465024; /* 0x465024 */

/* Supplied declaration required: FUN_002bb490. */
/* Supplied declaration required: FUN_002c4244. */


void FUN_001181b0(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  while (*param_1 != 4 && *param_1 != 5) {
    FUN_002c4244(&DAT_00465024);
    FUN_002bb490(&LAB_002dc6c0,0);
  }
  return;
}
