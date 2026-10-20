/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_StreamBufferPool_Initialize` (_code @ 0x175b74, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int aeabi_uidivmod(unsigned int, int);


void nw_snd_internal_driver_StreamBufferPool_Initialize
               (unsigned int *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
  unsigned int temp_v0;
  
  if (param_4 == 0) {
    return;
  }
  param_1[1] = param_3;
  param_1[3] = param_4;
  *param_1 = param_2;
  temp_v0 = aeabi_uidivmod(param_3,param_4);
  param_1[5] = 0;
  param_1[2] = temp_v0 & 0xffffffe0;
  param_1[4] = 0;
  return;
}

} /* extern "C" */
