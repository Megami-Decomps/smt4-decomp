/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00153050` (_code @ 0x153050, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00464af8; /* 0x464af8 */


void FUN_00153050(unsigned int param_1)

{
  DAT_00464af8 = DAT_00464af8 & ~param_1;
  return;
}
