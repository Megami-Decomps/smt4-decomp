/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00189a04` (_code @ 0x189a04, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0058928c; /* 0x58928c */

extern unsigned int nn_dsp_CTR_DSP_RecvData(unsigned int, unsigned short, unsigned short *);


unsigned int FUN_00189a04(unsigned short param_1,unsigned short *param_2)

{
  unsigned int temp_v0;
  
  if (DAT_0058928c != 0) {
    temp_v0 = nn_dsp_CTR_DSP_RecvData(DAT_0058928c,param_1,param_2);
    return temp_v0;
  }
  return 0xc8a0a7f8;
}
