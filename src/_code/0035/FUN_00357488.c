/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00357488` (_code @ 0x357488, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e6ef0; /* 0x4e6ef0 */

/* Supplied declaration required: FUN_00155ccc. */


void FUN_00357488(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00155ccc(&DAT_004e6ef0,param_1);
    return;
  }
  return;
}
