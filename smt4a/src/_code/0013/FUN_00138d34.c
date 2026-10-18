/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138d34` (_code @ 0x138d34, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_005b3ce8; /* 0x5b3ce8 */
extern unsigned int DAT_00636f58; /* 0x636f58 */
extern unsigned int DAT_00636f5c; /* 0x636f5c */
extern unsigned int DAT_00636f60; /* 0x636f60 */
extern unsigned int DAT_00636f64; /* 0x636f64 */


void FUN_00138d34(void)

{
  DAT_00636f58 = 0x3f800000;
  DAT_00636f5c = 0x3f800000;
  DAT_00636f60 = 0x3f800000;
  DAT_00636f64 = 0x3f800000;
  DAT_005b3ce8 = &DAT_00636f58;
  return;
}
