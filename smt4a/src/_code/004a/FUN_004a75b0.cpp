/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a75b0` (_code @ 0x4a75b0, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);

/* Supplied declaration required: FUN_00184310. */


int FUN_004a75b0(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = (unsigned int)(unsigned char)param_1[1] - (unsigned int)(unsigned char)param_2[1];
  if (temp_v0 == 0) {
    temp_v1 = (unsigned int)*param_1;
    FUN_00184310();
    temp_v2 = (unsigned int)*param_2;
    FUN_00184310();
    temp_v0 = (unsigned int)*(unsigned short *)(temp_v2 + 6) - (unsigned int)*(unsigned short *)(temp_v1 + 6);
    if (temp_v0 == 0) {
      temp_v0 = (unsigned int)*param_1 - (unsigned int)*param_2;
    }
  }
  return temp_v0;
}

} /* extern "C" */
