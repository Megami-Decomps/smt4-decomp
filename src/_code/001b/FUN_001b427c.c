/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b427c` (_code @ 0x1b427c, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447a10; /* 0x447a10 */

/* Supplied declaration required: FUN_002c2430. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_001b427c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  do {
    temp_v0 = DAT_00447a10 + temp_v1 * 0x18;
    if (*(int *)(temp_v0 + 0x1c) != 0) {
      FUN_002c2430();
      *(unsigned int *)(temp_v0 + 0x1c) = 0;
    }
    if (*(int *)(temp_v0 + 0x18) != 0) {
      FUN_002c4360();
      *(unsigned int *)(temp_v0 + 0x18) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x10);
  if (DAT_00447a10 != 0) {
    FUN_002c4360();
    DAT_00447a10 = 0;
  }
  return;
}
