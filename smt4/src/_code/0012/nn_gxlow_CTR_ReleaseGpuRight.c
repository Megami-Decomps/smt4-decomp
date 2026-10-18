/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_gxlow_CTR_ReleaseGpuRight` (_code @ 0x129b7c, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002ad244(void);
extern int FUN_002ad254(void);
/* Supplied declaration required: FUN_002ad264. */
extern int FUN_002b3abc(void);
extern int nn_gxlow_CTR_Gpu_ReleaseRight(void);
/* Supplied declaration required: nn_gxlow_CTR_InterruptRelayQueueRx_SuppressPdcEvents. */


int nn_gxlow_CTR_ReleaseGpuRight(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002ad254();
  if (temp_v0 == 0) {
    temp_v0 = 0x202bf8;
  }
  else {
    FUN_002ad264(temp_v0);
    temp_v0 = nn_gxlow_CTR_Gpu_ReleaseRight();
    if ((-1 < temp_v0) && (temp_v1 = FUN_002b3abc(), temp_v1 != 0)) {
      temp_v1 = FUN_002ad244();
      nn_gxlow_CTR_InterruptRelayQueueRx_SuppressPdcEvents(temp_v1 + 0x30,1);
    }
  }
  return temp_v0;
}
