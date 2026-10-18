/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_detail_PrepareToJumpToHomeMenu` (_code @ 0x147904, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0015abf0(void);
/* Supplied declaration required: FUN_00170474. */
/* Supplied declaration required: FUN_0018b868. */
/* Supplied declaration required: FUN_0018b964. */
/* Supplied declaration required: FUN_001bcd48. */


void nn_applet_CTR_detail_PrepareToJumpToHomeMenu(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_00170474(0xe);
  while( 1 ) {
    FUN_0018b868();
    temp_v0 = FUN_0015abf0();
    FUN_0018b964();
    if ((temp_v0 != -0x375f3010 && temp_v0 != -0x1f5f33f8) && temp_v0 != -0x375f33fe) break;
    FUN_001bcd48(10000000,0);
  }
  return;
}
