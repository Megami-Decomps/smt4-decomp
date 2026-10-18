/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011cce0` (_code @ 0x11cce0, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004ead10; /* 0x4ead10 */

/* Supplied declaration required: FUN_00128f40. */


void FUN_0011cce0(char *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != '\0') {
    FUN_00128f40(&DAT_004ead10);
    param_1[0x4c] = -1;
    param_1[0x4d] = -1;
    param_1[0x4e] = -1;
    param_1[0x4f] = -1;
    *param_1 = '\0';
  }
  return;
}
