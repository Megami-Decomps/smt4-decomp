/* NON_MATCHING: romwright 0.5.0 decompilation of `rt_fpResultDispatch` (_code @ 0x1559ec, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif


unsigned int rt_fpResultDispatch(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_lr; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *in_lr;
  unsigned char temp_v1;
  
  if ((((int)*in_lr < 0) || (param_3 = param_2 * 2, param_3 < 0xff000001)) &&
     (param_1 * 2 < 0xff000001)) {
    if (param_1 * 2 == 0xff000000) {
      temp_v0 = ((int)param_1 >> 0x1f) * -3 + 2;
      if (param_3 == 0xff000000) {
        temp_v0 = (temp_v0 - ((int)param_2 >> 0x1f)) + 1;
      }
    }
    else {
      temp_v0 = param_2 >> 0x1f;
    }
  }
  else {
    temp_v0 = 8;
  }
  temp_v0 = (*in_lr >> temp_v0 * 3) & 7;
  switch(temp_v0) {
  case 4:
    break;
  case 5:
    param_2 = param_1;
    break;
  case 6:
  case 7:
    return 0x7fc00000;
  default:
                    /* WARNING: Could not recover jumptable at 0x00155a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    temp_v0 = (*(romwright_code *)(in_lr + temp_v0 + 1))();
    return temp_v0;
  }
  temp_v1 = romwright_subpiece_4_1_0(param_2 >> 0x1f,0);
  temp_v0 = param_2 * 2;
  if (temp_v0 != 0) {
    temp_v1 = temp_v0 < 0x1000001;
  }
  if (temp_v1 && (temp_v0 != 0 && temp_v0 != 0x1000000)) {
    param_2 = 0;
  }
  return param_2;
}

} /* extern "C" */
