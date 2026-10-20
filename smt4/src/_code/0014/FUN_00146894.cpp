/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146894` (_code @ 0x146894, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_callbackState; /* 0x44e458 */

extern unsigned int nn_dsp_CTR_DSP_ConvertProcessAddressFromDspDram(unsigned int, unsigned int, unsigned int *);


unsigned int FUN_00146894(unsigned int param_1,unsigned int *param_2)

{
  *param_2 = 0xffffffff;
  if ((*(int *)((unsigned char *)&g_callbackState + 0x8)) != 0) {
    nn_dsp_CTR_DSP_ConvertProcessAddressFromDspDram((*(int *)((unsigned char *)&g_callbackState + 0x8)),param_1,param_2);
  }
  return 0xc8a0a7f8;
}

} /* extern "C" */
