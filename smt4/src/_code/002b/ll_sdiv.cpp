/* NON_MATCHING: romwright 0.5.0 decompilation of `ll_sdiv` (_code @ 0x2b5960, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002aa278(int, int, int, unsigned int);


int ll_sdiv(int param_1,int param_2,int param_3,unsigned int param_4)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v1 = param_2 >> 1;
  temp_v0 = param_4 >> 1;
  if ((int)temp_v1 < 0) {
    temp_v3 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + (unsigned int)temp_v3);
  }
  if ((int)param_4 < 0) {
    temp_v3 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(param_4 + temp_v3);
  }
  temp_v2 = FUN_002aa278(param_1,param_2,param_3,param_4);
  if (((temp_v1 ^ temp_v0) & 0x40000000) != 0) {
    temp_v2 = -temp_v2;
  }
  return temp_v2;
}

} /* extern "C" */
