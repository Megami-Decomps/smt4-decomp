/* NON_MATCHING: romwright 0.5.0 decompilation of `asdCecMessageBoxGetMessageSize` (_code @ 0x3e0564, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int nn_cec_CTR_MessageBox_GetMessHeader(unsigned int, int, unsigned int);


unsigned int asdCecMessageBoxGetMessageSize(unsigned int param_1,int param_2,unsigned int param_3)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = nn_cec_CTR_MessageBox_GetMessHeader(param_1,param_2,param_3);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned int *)(temp_v0 + 4);
  }
  return temp_v1;
}

} /* extern "C" */
