/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b433c` (_code @ 0x1b433c, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028186c(void);

extern int DAT_00447a10; /* 0x447a10 */

/* Supplied declaration required: FUN_0028186c. */


void FUN_001b433c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (DAT_00447a10 != 0) {
    temp_v0 = 0;
    do {
      if (*(int *)(DAT_00447a10 + temp_v0 * 0x18 + 0x1c) != 0) {
        FUN_0028186c();
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x10);
  }
  return;
}

} /* extern "C" */
