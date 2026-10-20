/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00189830` (_code @ 0x189830, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0058928c; /* 0x58928c */

extern unsigned int nn_dsp_CTR_DSP_GetSemaphoreEventHandle(unsigned int, unsigned int);


unsigned int FUN_00189830(unsigned int param_1)

{
  unsigned int temp_v0;
  
  if (DAT_0058928c != 0) {
    temp_v0 = nn_dsp_CTR_DSP_GetSemaphoreEventHandle(DAT_0058928c,param_1);
    return temp_v0;
  }
  return 0xc8a0a7f8;
}

} /* extern "C" */
