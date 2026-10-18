/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001023e0` (_code @ 0x1023e0, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0044e363; /* 0x44e363 */
extern unsigned int DAT_004c641c; /* 0x4c641c */

extern int FUN_0011007c(void);
/* Supplied declaration required: FUN_00110258. */
/* Supplied declaration required: FUN_001294a8. */


void FUN_001023e0(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0011007c();
  if (temp_v0 == 0) {
    DAT_0044e363 = 1;
    FUN_001294a8(&DAT_004c641c,0x100);
    FUN_00110258(0x300,param_1 & 0xfffffff8,0xf);
  }
  return;
}
