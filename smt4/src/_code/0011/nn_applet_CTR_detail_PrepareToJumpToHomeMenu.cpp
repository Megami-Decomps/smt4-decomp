/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_detail_PrepareToJumpToHomeMenu` (_code @ 0x1106a0, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bb140(int);
int threadSleepDuration(int, int);
int nn_applet_CTR_detail_CloseSession(void);
int FUN_002bb378(void);

extern unsigned int FUN_0011d858(void);
/* Supplied declaration required: FUN_002bb140. */
/* Supplied declaration required: threadSleepDuration. */
/* Supplied declaration required: nn_applet_CTR_detail_CloseSession. */
/* Supplied declaration required: FUN_002bb378. */


unsigned int nn_applet_CTR_detail_PrepareToJumpToHomeMenu(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_002bb140(0xe);
  while( 1 ) {
    FUN_002bb378();
    temp_v0 = FUN_0011d858();
    nn_applet_CTR_detail_CloseSession();
    if ((temp_v0 != 0xc8a0cff0 && temp_v0 != 0xe0a0cc08) && temp_v0 != 0xc8a0cc02) break;
    threadSleepDuration(10000000,0);
  }
  return temp_v0;
}

} /* extern "C" */
