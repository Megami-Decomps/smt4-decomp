/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf6fc` (_code @ 0x2bf6fc, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e3c58; /* 0x4e3c58 */


unsigned int FUN_002bf6fc(int param_1)

{
  if ((((param_1 >> 6) & 1U) == 0) && (*(int *)(&DAT_004e3c58 + (param_1 >> 0x1f) * -4) == 1)) {
    return 1;
  }
  return 0;
}
