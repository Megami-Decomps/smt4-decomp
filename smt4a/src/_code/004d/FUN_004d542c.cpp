/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d542c` (_code @ 0x4d542c, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern float *DAT_00571508; /* 0x571508 */

extern int FUN_0032c430(unsigned int);
extern float *asdListBoxGetFloatValuePtr(unsigned int);


void FUN_004d542c(int param_1,unsigned int param_2,unsigned int param_3)

{
  float *pfVar1;
  int temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  
  temp_v2 = DAT_00571508[0x162];
  temp_v1 = DAT_00571508[0x160];
  temp_v3 = DAT_00571508[0x161];
  switch(param_3) {
  case 0:
    temp_v0 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    if (temp_v0 != 0) {
      temp_v1 = (float)((unsigned int)DAT_00571508[0x193] | 0x10000000);
    }
    else {
      temp_v1 = (float)((unsigned int)DAT_00571508[0x193] & 0xefffffff);
    }
    break;
  case 1:
    pfVar1 = (float *)asdListBoxGetFloatValuePtr(*(unsigned int *)(param_1 + 0x10));
    *DAT_00571508 = *pfVar1 - temp_v1;
    return;
  case 2:
    pfVar1 = (float *)asdListBoxGetFloatValuePtr(*(unsigned int *)(param_1 + 0x10));
    DAT_00571508[1] = *pfVar1 - temp_v3;
    return;
  case 3:
    pfVar1 = (float *)asdListBoxGetFloatValuePtr(*(unsigned int *)(param_1 + 0x10));
    DAT_00571508[2] = *pfVar1 - temp_v2;
    return;
  case 4:
    pfVar1 = (float *)asdListBoxGetFloatValuePtr(*(unsigned int *)(param_1 + 0x10));
    DAT_00571508[4] = *pfVar1 * 256.0f * 0.0027777778f - DAT_00571508[0x16d];
    return;
  case 5:
    pfVar1 = (float *)asdListBoxGetFloatValuePtr(*(unsigned int *)(param_1 + 0x10));
    DAT_00571508[3] = *pfVar1 - DAT_00571508[0x170];
    return;
  case 6:
    temp_v0 = FUN_0032c430(*(unsigned int *)(param_1 + 0x10));
    if (temp_v0 != 0) {
      temp_v1 = (float)((unsigned int)DAT_00571508[0x193] | 0x20000000);
    }
    else {
      temp_v1 = (float)((unsigned int)DAT_00571508[0x193] & 0xdfffffff);
    }
    break;
  default:
    return;
  }
  DAT_00571508[0x193] = temp_v1;
  return;
}

} /* extern "C" */
