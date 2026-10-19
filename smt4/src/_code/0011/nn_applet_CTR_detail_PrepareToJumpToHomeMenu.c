/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_detail_PrepareToJumpToHomeMenu` (_code @ 0x1106a0, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_0011d858(void);
/* Supplied declaration required: FUN_002bb140. */
/* Supplied declaration required: FUN_002bb150. */
/* Supplied declaration required: FUN_002bb308. */
/* Supplied declaration required: FUN_002bb378. */


unsigned int nn_applet_CTR_detail_PrepareToJumpToHomeMenu(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_002bb140(0xe);
  while( 1 ) {
    FUN_002bb378();
    temp_v0 = FUN_0011d858();
    FUN_002bb308();
    if ((temp_v0 != 0xc8a0cff0 && temp_v0 != 0xe0a0cc08) && temp_v0 != 0xc8a0cc02) break;
    FUN_002bb150(10000000,0);
  }
  return temp_v0;
}
