/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00298fa0` (_code @ 0x298fa0, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char *questGetRuntimeStatus(void);
extern unsigned int FUN_00250ec0(unsigned int);


unsigned int FUN_00298fa0(unsigned int param_1,unsigned int param_2)

{
  unsigned char *pbVar1;
  unsigned int temp_v0;
  
  temp_v0 = 0;
  pbVar1 = (unsigned char *)questGetRuntimeStatus();
  switch(param_2) {
  case 0:
    temp_v0 = *pbVar1 & 1;
    break;
  case 1:
    temp_v0 = (*pbVar1 & 2) >> 1;
    break;
  case 2:
    temp_v0 = (*pbVar1 & 4) >> 2;
    break;
  case 3:
    temp_v0 = (*pbVar1 & 8) >> 3;
    break;
  case 4:
    temp_v0 = (*pbVar1 & 0x10) >> 4;
    break;
  case 5:
    temp_v0 = FUN_00250ec0(param_1);
  }
  return temp_v0;
}

} /* extern "C" */
