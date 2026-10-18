/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00129b14` (_code @ 0x129b14, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002ad244(void);
extern int FUN_002ad254(void);
extern int FUN_002ad264(void);
extern int FUN_002b3abc(void);
/* Supplied declaration required: nn_gxlow_CTR_Gpu_AcquireRight. */
/* Supplied declaration required: nn_gxlow_CTR_InterruptRelayQueueRx_SuppressPdcEvents. */


int FUN_00129b14(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002ad254();
  if (temp_v0 == 0) {
    temp_v0 = 0x202bf8;
  }
  else {
    temp_v0 = FUN_002ad264();
    nn_gxlow_CTR_Gpu_AcquireRight(temp_v0,0xffff8001,0);
    if ((-1 < temp_v0) && (temp_v1 = FUN_002b3abc(), temp_v1 != 0)) {
      temp_v1 = FUN_002ad244();
      nn_gxlow_CTR_InterruptRelayQueueRx_SuppressPdcEvents(temp_v1 + 0x30,0);
    }
  }
  return temp_v0;
}
