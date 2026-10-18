/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_dbm_RomPathTool_PathParser_Initialize` (_code @ 0x4312dc, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int nn_dbm_RomPathTool_PathParser_Initialize(unsigned int *param_1,short *param_2)

{
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  if (*param_2 != 0x2f) {
    temp_v1 = 0xe0e046c9;
  }
  else {
    temp_v0 = param_2[1];
    while (temp_v0 == 0x2f) {
      temp_v0 = param_2[2];
      param_2 = param_2 + 1;
    }
    *param_1 = (unsigned int)param_2;
    param_1[1] = (unsigned int)param_2;
    param_1[2] = (unsigned int)(param_2 + 1);
    temp_v0 = param_2[1];
    while (temp_v0 == 0x2f) {
      temp_v2 = param_1[2];
      param_1[2] = (unsigned int)(temp_v2 + 2);
      temp_v0 = *(short *)(temp_v2 + 2);
    }
    temp_v1 = 0;
  }
  return temp_v1;
}
