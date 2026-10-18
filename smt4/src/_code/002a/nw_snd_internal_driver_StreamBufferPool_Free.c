/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_driver_StreamBufferPool_Free` (_code @ 0x2a1fc8, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int aeabi_uidivmod(int, int);


void nw_snd_internal_driver_StreamBufferPool_Free(int *param_1,int param_2)

{
  unsigned int temp_v0;
  
  temp_v0 = aeabi_uidivmod(param_2 - *param_1,param_1[2]);
  *(unsigned char *)((int)param_1 + (temp_v0 >> 3) + 0x14) =
       *(unsigned char *)((int)param_1 + (temp_v0 >> 3) + 0x14) & ~(unsigned char)(1 << (temp_v0 & 7));
  param_1[4] = param_1[4] - 1;
  return;
}
