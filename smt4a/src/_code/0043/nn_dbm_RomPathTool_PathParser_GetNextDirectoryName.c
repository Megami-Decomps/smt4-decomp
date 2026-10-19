/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_dbm_RomPathTool_PathParser_GetNextDirectoryName` (_code @ 0x431348, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int nn_dbm_RomPathTool_PathParser_GetNextDirectoryName(int *param_1,int *param_2)

{
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  *param_2 = (param_1[1] - *param_1) >> 1;
  param_2[1] = *param_1;
  temp_v2 = param_1[2];
  temp_v1 = 0;
  *param_1 = temp_v2;
  do {
    temp_v0 = *(short *)(temp_v2 + temp_v1 * 2);
    if (temp_v0 == 0x2f) {
      if (temp_v1 >= 0x100) {
        temp_v1 = 0xe0e046c8;
      }
      else {
        temp_v2 = temp_v2 + temp_v1 * 2;
        param_1[1] = temp_v2;
        param_1[2] = temp_v2 + 2;
        temp_v0 = *(short *)(temp_v2 + 2);
        while (temp_v0 == 0x2f) {
          temp_v2 = param_1[2];
          param_1[2] = temp_v2 + 2;
          temp_v0 = *(short *)(temp_v2 + 2);
        }
        if (*(short *)param_1[2] == 0) {
          *(unsigned char *)(param_1 + 3) = 1;
        }
        temp_v1 = 0;
      }
      return temp_v1;
    }
    if (temp_v0 == 0) {
      temp_v2 = temp_v2 + temp_v1 * 2;
      param_1[1] = temp_v2;
      *(unsigned char *)(param_1 + 3) = 1;
      param_1[2] = temp_v2;
      temp_v1 = 0;
      return temp_v1;
    }
    temp_v1 = temp_v1 + 1;
  } while( 1 );
}
