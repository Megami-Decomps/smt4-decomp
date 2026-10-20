/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_detail_PrepareToJumpToHomeMenu` (_code @ 0x147904, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00170474(int);
int nn_applet_CTR_detail_OpenSession(void);
int nn_applet_CTR_detail_CloseSession(void);
int svcSleepThread(int, int);

extern unsigned int FUN_0015abf0(void);
/* Supplied declaration required: FUN_00170474. */
/* Supplied declaration required: nn_applet_CTR_detail_OpenSession. */
/* Supplied declaration required: nn_applet_CTR_detail_CloseSession. */
/* Supplied declaration required: svcSleepThread. */


unsigned int nn_applet_CTR_detail_PrepareToJumpToHomeMenu(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_00170474(0xe);
  while( 1 ) {
    nn_applet_CTR_detail_OpenSession();
    temp_v0 = FUN_0015abf0();
    nn_applet_CTR_detail_CloseSession();
    if ((temp_v0 != 0xc8a0cff0 && temp_v0 != 0xe0a0cc08) && temp_v0 != 0xc8a0cc02) break;
    svcSleepThread(10000000,0);
  }
  return temp_v0;
}

} /* extern "C" */
