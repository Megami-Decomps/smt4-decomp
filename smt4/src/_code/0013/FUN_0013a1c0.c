/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a1c0` (_code @ 0x13a1c0, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e460; /* 0x44e460 */

/* Supplied declaration required: nn_dsp_CTR_DSP_RecvDataIsReady. */


int FUN_0013a1c0(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0044e460 != 0) {
    temp_v0 = DAT_0044e460;
    nn_dsp_CTR_DSP_RecvDataIsReady(DAT_0044e460,param_1,param_2);
    return temp_v0;
  }
  return -0x375f5808;
}
