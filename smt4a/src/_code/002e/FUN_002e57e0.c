/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e57e0` (_code @ 0x2e57e0, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005f1a50; /* 0x5f1a50 */

extern unsigned int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_00270c58. */
/* Supplied declaration required: FUN_003847ac. */


unsigned int FUN_002e57e0(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(2);
  temp_v2 = FUN_00236038(1);
  FUN_003847ac(temp_v2,temp_v1);
  DAT_005f1a50 = 0xffffffff;
  FUN_00270c58(temp_v0);
  return 3;
}
