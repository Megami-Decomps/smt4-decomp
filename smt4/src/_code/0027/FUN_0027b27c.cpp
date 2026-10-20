/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027b27c` (_code @ 0x27b27c, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002d2efc(void);

extern int DAT_00447a60; /* 0x447a60 */

/* Supplied declaration required: FUN_002d2efc. */


void FUN_0027b27c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  do {
    if (*(char *)(DAT_00447a60 + temp_v0 * 0x3c + 0x24) != '\0') {
      FUN_002d2efc();
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x10);
  return;
}

} /* extern "C" */
