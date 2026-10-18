/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_PlayerHeap_Create` (_code @ 0x14c098, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char nw_snd_internal_PlayerHeap_Create(int param_1,int param_2,int param_3)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = param_3 + param_2;
  temp_v0 = (param_2 + 0x1fU) & 0xffffffe0;
  if (temp_v0 <= temp_v1) {
    *(unsigned int *)(param_1 + 0xc) = temp_v0;
    *(unsigned int *)(param_1 + 0x10) = temp_v1;
    *(unsigned int *)(param_1 + 0x14) = temp_v0;
  }
  return temp_v0 <= temp_v1;
}
