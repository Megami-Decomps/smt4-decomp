/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d1c34` (_code @ 0x1d1c34, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char LAB_001d1c4c; /* 0x1d1c4c */
extern unsigned int DAT_004398d0; /* 0x4398d0 */

extern unsigned int FUN_002c5c04(unsigned char *);


void FUN_001d1c34(void)

{
  DAT_004398d0 = FUN_002c5c04(&LAB_001d1c4c);
  return;
}

} /* extern "C" */
