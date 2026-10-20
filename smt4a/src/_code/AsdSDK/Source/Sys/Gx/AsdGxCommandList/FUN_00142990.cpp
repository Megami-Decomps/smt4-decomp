/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00142990` (_code @ 0x142990, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005b3fec; /* 0x5b3fec */
extern unsigned int DAT_005b3ff8; /* 0x5b3ff8 */
extern unsigned int DAT_005b3ffc; /* 0x5b3ffc */


void FUN_00142990(unsigned int *param_1)

{
  DAT_005b3fec = 0;
  DAT_005b3ff8 = *param_1;
  DAT_005b3ffc = param_1[1];
  return;
}

} /* extern "C" */
