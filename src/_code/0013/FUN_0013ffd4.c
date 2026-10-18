/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013ffd4` (_code @ 0x13ffd4, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001407e8. */
/* Supplied declaration required: FUN_0014c00c. */
/* Supplied declaration required: FUN_0014c0d4. */
/* Supplied declaration required: FUN_002bb1bc. */
/* Supplied declaration required: FUN_002bb360. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


void FUN_0013ffd4(int param_1)

{
/* irregular: 7 native warning(s); review required */
  char temp_v0;
  
  temp_v0 = *(char *)(param_1 + 0x14);
  while( 1 ) {
    if (temp_v0 != '\0') {
      return;
    }
    FUN_002bb360();
    FUN_0014c0d4();
    if (*(char *)(param_1 + 0x14) != '\0') break;
    FUN_002c3aa8(param_1 + 8);
    FUN_002bb360();
    FUN_0014c00c();
    FUN_002c3a24(param_1 + 8);
    FUN_002bb1bc();
    FUN_001407e8();
    temp_v0 = *(char *)(param_1 + 0x14);
  }
  return;
}
