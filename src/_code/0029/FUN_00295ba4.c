/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00295ba4` (_code @ 0x295ba4, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e128; /* 0x43e128 */

/* Supplied declaration required: FUN_002bd8e8. */


void FUN_00295ba4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043e128;
  *(unsigned int *)(DAT_0043e128 + 8) = 5;
  *(unsigned int *)(temp_v0 + 0x10) = 0x1e;
  FUN_002bd8e8(temp_v0 + 0x44,1,0);
  return;
}
