/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017fbc4` (_code @ 0x17fbc4, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043e0f8; /* 0x43e0f8 */

/* Supplied declaration required: FUN_002bee58. */


void FUN_0017fbc4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0043e0f8;
  *(unsigned int *)(DAT_0043e0f8 + 8) = 4;
  FUN_002bee58(temp_v0 + 0x3c,1);
  return;
}
