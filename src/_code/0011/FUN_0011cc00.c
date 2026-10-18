/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011cc00` (_code @ 0x11cc00, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004ead10; /* 0x4ead10 */

/* Supplied declaration required: FUN_00128e64. */


void FUN_0011cc00(char *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*param_1 != '\0') {
    FUN_00128e64(&DAT_004ead10);
    param_1[0x4c] = -1;
    param_1[0x4d] = -1;
    param_1[0x4e] = -1;
    param_1[0x4f] = -1;
    *param_1 = '\0';
  }
  return;
}
