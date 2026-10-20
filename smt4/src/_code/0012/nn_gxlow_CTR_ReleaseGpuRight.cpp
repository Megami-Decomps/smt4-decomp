/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_gxlow_CTR_ReleaseGpuRight` (_code @ 0x129b7c, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_gxlow_CTR_InterruptRelayQueueRx_SuppressPdcEvents(int, int);

extern int FUN_002ad244(void);
extern int FUN_002ad254(void);
extern unsigned int FUN_002ad264(void);
extern int nngxCheckVramBank(void);
extern unsigned int nn_gxlow_CTR_Gpu_ReleaseRight(unsigned int);
/* Supplied declaration required: nn_gxlow_CTR_InterruptRelayQueueRx_SuppressPdcEvents. */


unsigned int nn_gxlow_CTR_ReleaseGpuRight(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002ad254();
  if (temp_v0 == 0) {
    temp_v1 = 0x202bf8;
  }
  else {
    temp_v2 = FUN_002ad264();
    temp_v1 = nn_gxlow_CTR_Gpu_ReleaseRight(temp_v2);
    if ((-1 < (int)temp_v1) && (temp_v0 = nngxCheckVramBank(), temp_v0 != 0)) {
      temp_v0 = FUN_002ad244();
      nn_gxlow_CTR_InterruptRelayQueueRx_SuppressPdcEvents(temp_v0 + 0x30,1);
    }
  }
  return temp_v1;
}

} /* extern "C" */
