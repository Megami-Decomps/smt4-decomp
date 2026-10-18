/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_Model_IsMeshVisible` (_code @ 0x453654, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned char nw_gfx_Model_IsMeshVisible(int param_1,int param_2)

{
  char temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v2 = (int)*(short *)(param_2 + 0x26);
  if (temp_v2 < 0) {
    if (*(char *)(param_2 + 0x24) == '\0') {
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x17c) != *(int *)(param_1 + 0x180)) {
      temp_v1 = *(int *)(param_1 + 0x17c) + temp_v2 * 8;
    }
    else {
      piVar3 = (int *)(*(int *)(param_1 + 8) + 0xd0);
      temp_v3 = *piVar3;
      if (temp_v3 != 0) {
        temp_v3 = (int)piVar3 + temp_v3;
      }
      else {
        temp_v3 = 0;
      }
      temp_v1 = 0;
      if (temp_v3 != 0) {
        piVar3 = (int *)(temp_v3 + temp_v2 * 0x10 + 0x28);
        temp_v2 = *piVar3;
        if (temp_v2 != 0) {
          temp_v1 = temp_v2 + (int)piVar3;
        }
      }
    }
    temp_v4 = *(char *)(temp_v1 + 4) != '\0';
    temp_v0 = '\0';
    if (temp_v4) {
      temp_v0 = *(char *)(param_2 + 0x24);
    }
    if (!temp_v4 || temp_v0 == '\0') {
      return 0;
    }
  }
  return 1;
}
