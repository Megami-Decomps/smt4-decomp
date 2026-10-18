/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d9fe4` (_code @ 0x4d9fe4, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0019a7dc(void);
/* Supplied declaration required: FUN_002e6354. */


void FUN_004d9fe4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0019a7dc();
  if ((*(unsigned short *)(temp_v0 + 0x130) & 1) == 0) {
    if (*(short *)(temp_v0 + 0x62) == 0x4b1) {
      FUN_002e6354(temp_v0,300);
    }
    *(unsigned short *)(temp_v0 + 0x132) = 0;
    *(unsigned short *)(temp_v0 + 0x134) = 0;
    *(unsigned short *)(temp_v0 + 0x136) = 0;
  }
  return;
}
