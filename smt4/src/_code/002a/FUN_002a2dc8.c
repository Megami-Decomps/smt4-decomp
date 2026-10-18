/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a2dc8` (_code @ 0x2a2dc8, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004dad84; /* 0x4dad84 */
extern unsigned char DAT_004dad85; /* 0x4dad85 */


void FUN_002a2dc8(int param_1)

{
  (&DAT_004dad84)[param_1 * 0x18] = 1;
  (&DAT_004dad85)[param_1 * 0x18] = 0;
  return;
}
