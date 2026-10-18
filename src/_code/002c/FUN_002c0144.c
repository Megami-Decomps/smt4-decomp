/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c0144` (_code @ 0x2c0144, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int uRam00000038; /* 0x38 */
extern unsigned char DAT_004c5819; /* 0x4c5819 */


unsigned char FUN_002c0144(void)

{
  uRam00000038 = 0;
  return DAT_004c5819;
}
