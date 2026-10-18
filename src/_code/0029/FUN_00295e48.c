/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00295e48` (_code @ 0x295e48, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e128; /* 0x43e128 */

/* Supplied declaration required: FUN_002bdac0. */


void FUN_00295e48(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043e128;
  *(unsigned int *)(DAT_0043e128 + 8) = 5;
  *(unsigned int *)(temp_v0 + 0x10) = 0x1e;
  FUN_002bdac0(temp_v0 + 0x44,1,0);
  return;
}
