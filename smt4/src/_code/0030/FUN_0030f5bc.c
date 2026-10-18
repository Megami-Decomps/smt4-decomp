/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f5bc` (_code @ 0x30f5bc, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447e28; /* 0x447e28 */

/* Supplied declaration required: FUN_002cc07c. */


void FUN_0030f5bc(void)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  
  temp_v0 = '\0';
  if (DAT_00447e28 != 0) {
    temp_v0 = *(char *)(DAT_00447e28 + 0x3c);
  }
  if (DAT_00447e28 == 0 || temp_v0 == '\0') {
    return;
  }
  FUN_002cc07c();
  return;
}
