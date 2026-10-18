/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a23c` (_code @ 0x13a23c, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e460; /* 0x44e460 */

/* Supplied declaration required: nn_dsp_CTR_DSP_SetSemaphoreMask. */


int FUN_0013a23c(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0044e460 != 0) {
    temp_v0 = DAT_0044e460;
    nn_dsp_CTR_DSP_SetSemaphoreMask(DAT_0044e460,param_1);
    return temp_v0;
  }
  return -0x375f5808;
}
