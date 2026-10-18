/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c388` (_code @ 0x31c388, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005f1a50; /* 0x5f1a50 */

extern unsigned int FUN_00236038(void);
/* Supplied declaration required: FUN_00270c58. */
/* Supplied declaration required: FUN_003b5050. */


unsigned int FUN_0031c388(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00236038();
  FUN_003b5050();
  DAT_005f1a50 = 0xffffffff;
  FUN_00270c58(temp_v0);
  return 3;
}
