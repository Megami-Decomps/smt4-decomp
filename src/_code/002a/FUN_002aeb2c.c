/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aeb2c` (_code @ 0x2aeb2c, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002b96f0(void);
/* Supplied declaration required: FUN_002c0a6c. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_002aeb2c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002b96f0();
  if (temp_v0 != 0) {
    if (*(int *)(temp_v0 + 0xc) != 0) {
      FUN_002c4360();
      *(unsigned int *)(temp_v0 + 0xc) = 0;
    }
    if (*(int *)(temp_v0 + 8) != 0) {
      FUN_002c0a6c();
      *(unsigned int *)(temp_v0 + 8) = 0;
    }
    *(unsigned int *)(temp_v0 + 0x10) = 0;
    *(unsigned int *)(temp_v0 + 0x1c) = 0;
  }
  return;
}
