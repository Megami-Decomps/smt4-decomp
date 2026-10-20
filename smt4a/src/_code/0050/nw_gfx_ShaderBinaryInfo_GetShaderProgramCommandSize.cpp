/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_ShaderBinaryInfo_GetShaderProgramCommandSize` (_code @ 0x5047f8, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_3_stack;


int nw_gfx_ShaderBinaryInfo_GetShaderProgramCommandSize(int param_1,int param_2,int param_3)

{
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v4 = 0;
  temp_v1 = *(int *)(param_1 + param_2 * 4 + 8);
  temp_v2 = 0;
  if (temp_v2 < *(unsigned int *)(temp_v1 + 0x1c)) {
    do {
      temp_v0 = *(short *)(*(int *)(temp_v1 + 0x18) + temp_v1 + temp_v2 * 0x14);
      if (temp_v0 != 0) {
        if (temp_v0 == 1) {
          temp_v4 = temp_v4 + 8;
        }
        else if (temp_v0 == 2) {
          temp_v4 = temp_v4 + 0x18;
        }
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(unsigned int *)(temp_v1 + 0x1c));
  }
  temp_v4 = temp_v4 + 8;
  if (-1 < param_3) {
    temp_v3 = 0;
    temp_v1 = *(int *)(param_1 + param_3 * 4 + 8);
    temp_v2 = 0;
    if (temp_v2 < *(unsigned int *)(temp_v1 + 0x1c)) {
      do {
        temp_v0 = *(short *)(*(int *)(temp_v1 + 0x18) + temp_v1 + temp_v2 * 0x14);
        if (temp_v0 != 0) {
          if (temp_v0 == 1) {
            temp_v3 = temp_v3 + 8;
          }
          else if (temp_v0 == 2) {
            temp_v3 = temp_v3 + 0x18;
          }
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < *(unsigned int *)(temp_v1 + 0x1c));
    }
    temp_v4 = temp_v4 + temp_v3;
  }
  if (-1 < param_3) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 2;
  }
  temp_v1 = (8 - temp_v1) * 4;
  temp_v3 = temp_v1 + 0x60;
  if (-1 < param_3) {
    temp_v3 = temp_v1 + 0x78;
  }
  return temp_v3 + temp_v4;
}

} /* extern "C" */
