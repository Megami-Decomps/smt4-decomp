/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002563d4` (_code @ 0x2563d4, 0x40 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b6e60(void);
/* Supplied declaration required: FUN_002c4b30. */


void FUN_002563d4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002b6e60();
  if ((*(unsigned short *)(temp_v0 + 0x608) & 1) == 0) {
    if (*(short *)(temp_v0 + 0x46) == 0x4b1) {
      FUN_002c4b30(temp_v0,0x604);
    }
    *(unsigned short *)(temp_v0 + 0x60a) = 0;
    *(unsigned short *)(temp_v0 + 0x60c) = 0;
    *(unsigned short *)(temp_v0 + 0x60e) = 0;
  }
  return;
}
