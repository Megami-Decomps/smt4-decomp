/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012c54c` (_code @ 0x12c54c, 0x13c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_4_stack;

extern unsigned char DAT_00420f74; /* 0x420f74 */


void FUN_0012c54c(unsigned int *param_1,unsigned int param_2,unsigned int *param_3,int *param_4)

{
  int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int unaff_r4;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  param_1[1] = param_2;
  *param_1 = (unsigned int)&DAT_00420f74;
  param_1[2] = 0;
  *(unsigned char *)(param_1 + 9) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  temp_v2 = param_3[1];
  temp_v3 = param_3[2];
  temp_v4 = param_3[3];
  temp_v5 = param_3[4];
  temp_v6 = param_3[5];
  temp_v7 = param_3[6];
  temp_v8 = param_3[7];
  param_1[0xb] = *param_3;
  param_1[0xc] = temp_v2;
  param_1[0xd] = temp_v3;
  param_1[0xe] = temp_v4;
  param_1[0xf] = temp_v5;
  param_1[0x10] = temp_v6;
  param_1[0x11] = temp_v7;
  param_1[0x12] = temp_v8;
  param_1[0x13] = (unsigned int)param_4;
  param_1[3] = param_4[6];
  param_1[4] = param_4[7];
  temp_v0 = param_4[0xd];
  if (temp_v0 == 0) {
    unaff_r4 = 0x8058;
  }
  else if (temp_v0 == 2) {
    unaff_r4 = 0x8057;
  }
  else if (temp_v0 == 3) {
    unaff_r4 = 0x8d62;
  }
  else if (temp_v0 == 4) {
    unaff_r4 = 0x8056;
  }
  param_1[6] = 0;
  param_1[5] = unaff_r4;
  temp_v0 = *param_4;
  if (temp_v0 != 0x20000009) {
    if (temp_v0 != 0x20000011) {
      if (temp_v0 != 0x20000021) {
        return;
      }
      temp_v0 = param_4[0xe];
      if (temp_v0 != 0) {
        temp_v0 = temp_v0 + (int)(param_4 + 0xe);
      }
      else {
        temp_v0 = 0;
      }
      temp_v1 = *(int *)(temp_v0 + 0x18);
      if (temp_v1 != 0) {
        param_1[7] = temp_v1;
        return;
      }
      piVar2 = (int *)(temp_v0 + 0xc);
      temp_v0 = *piVar2;
    }
    else {
      temp_v0 = param_4[0xe];
      if (temp_v0 != 0) {
        temp_v0 = temp_v0 + (int)(param_4 + 0xe);
      }
      else {
        temp_v0 = 0;
      }
      temp_v1 = *(int *)(temp_v0 + 0x18);
      if (temp_v1 != 0) {
        param_1[7] = temp_v1;
        return;
      }
      piVar2 = (int *)(temp_v0 + 0xc);
      temp_v0 = *piVar2;
    }
  }
  else {
    temp_v0 = param_4[0xe];
    if (temp_v0 != 0) {
      temp_v0 = temp_v0 + (int)(param_4 + 0xe);
    }
    else {
      temp_v0 = 0;
    }
    temp_v1 = *(int *)(temp_v0 + 0x18);
    if (temp_v1 != 0) {
      param_1[7] = temp_v1;
      return;
    }
    piVar2 = (int *)(temp_v0 + 0xc);
    temp_v0 = *piVar2;
  }
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = temp_v0 + (int)piVar2;
  }
  param_1[7] = temp_v1;
  return;
}
