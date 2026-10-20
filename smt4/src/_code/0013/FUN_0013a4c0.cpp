/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013a4c0` (_code @ 0x13a4c0, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0044e460; /* 0x44e460 */

extern unsigned int nn_dsp_CTR_DSP_RecvData(unsigned int, unsigned short, unsigned short *);


unsigned int FUN_0013a4c0(unsigned short param_1,unsigned short *param_2)

{
  unsigned int temp_v0;
  
  if (DAT_0044e460 != 0) {
    temp_v0 = nn_dsp_CTR_DSP_RecvData(DAT_0044e460,param_1,param_2);
    return temp_v0;
  }
  return 0xc8a0a7f8;
}

} /* extern "C" */
