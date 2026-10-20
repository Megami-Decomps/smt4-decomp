/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4b10` (_code @ 0x2a4b10, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0044e460; /* 0x44e460 */

extern unsigned int nn_dsp_CTR_DSP_FlushDataCache(unsigned int, unsigned int, unsigned int, unsigned int);


unsigned int FUN_002a4b10(unsigned int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  
  if (DAT_0044e460 != 0) {
    temp_v0 = nn_dsp_CTR_DSP_FlushDataCache(DAT_0044e460,0xffff8001,param_1,param_2);
    return temp_v0;
  }
  return 0xc8a0a7f8;
}

} /* extern "C" */
