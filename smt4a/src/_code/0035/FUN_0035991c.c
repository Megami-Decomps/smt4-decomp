/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035991c` (_code @ 0x35991c, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00169310. */
extern int FUN_001861c4(void);
/* Supplied declaration required: FUN_0019a840. */


int FUN_0035991c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_001861c4();
  if (temp_v0 != 0) {
    FUN_00169310();
    if (*(int *)(temp_v0 + 8) != 0) {
      *(unsigned int *)(*(int *)(temp_v0 + 8) + 8) = 0x30000;
      *(unsigned int *)(temp_v0 + 0x10) = *(unsigned int *)(temp_v0 + 0x10) | 0x40;
      if (*(int *)(temp_v0 + 8) != 0) {
        FUN_0019a840();
        *(unsigned int *)(temp_v0 + 0x10) = *(unsigned int *)(temp_v0 + 0x10) | 4;
      }
    }
  }
  return temp_v0;
}
