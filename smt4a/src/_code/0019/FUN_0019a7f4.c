/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019a7f4` (_code @ 0x19a7f4, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001800b8. */
extern int FUN_001861c4(void);
/* Supplied declaration required: FUN_0019a5a0. */


void FUN_0019a7f4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_001861c4();
  if (temp_v0 != 0) {
    if (*(int *)(temp_v0 + 0xc) != 0) {
      FUN_0019a5a0();
      *(unsigned int *)(temp_v0 + 0xc) = 0;
    }
    if (*(int *)(temp_v0 + 8) != 0) {
      FUN_001800b8();
      *(unsigned int *)(temp_v0 + 8) = 0;
    }
    *(unsigned int *)(temp_v0 + 0x10) = 0;
    *(unsigned int *)(temp_v0 + 0x1c) = 0;
  }
  return;
}
