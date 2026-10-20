/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001131f8` (_code @ 0x1131f8, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_004c6400; /* 0x4c6400 */
extern unsigned int DAT_004c6408; /* 0x4c6408 */
extern unsigned int DAT_004c640c; /* 0x4c640c */


void FUN_001131f8(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
  DAT_004c6400 = param_3;
  DAT_004c6408 = param_1;
  DAT_004c640c = param_2;
  return;
}

} /* extern "C" */
