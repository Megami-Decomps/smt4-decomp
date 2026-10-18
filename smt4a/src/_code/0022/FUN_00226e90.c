/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00226e90` (_code @ 0x226e90, 0x1b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_4_stack;


void FUN_00226e90(int param_1,int param_2,float *param_3,float *param_4)

{
/* irregular: irregular input(s): in_d1, in_s0, in_s1; 3 native warning(s); review required */
  float *pfVar1;
  float *pfVar2;
  float in_s0;
  float temp_v0;
  float in_s1;
  unsigned long long in_d1;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5 [3];
  unsigned int uStack_2c;
  float fStack_28;
  float afStack_24 [8];
  
  pfVar1 = temp_v5;
  pfVar2 = temp_v5;
  temp_v0 = (float)in_d1;
  uStack_2c = (int)((unsigned long long)in_d1 >> 0x20);
  param_2 = param_2 - 1;
  if (param_1 == 0) {
    temp_v1 = in_s1;
    temp_v2 = temp_v0;
    if (0 < param_2) {
      pfVar1 = &fStack_28;
      pfVar2 = afStack_24;
      do {
        temp_v4 = *pfVar1;
        pfVar1 = pfVar1 + 3;
        temp_v3 = *pfVar2;
        pfVar2 = pfVar2 + 3;
        if (temp_v4 < in_s1) {
          in_s1 = temp_v4;
        }
        if (temp_v3 < temp_v0) {
          temp_v0 = temp_v3;
        }
        if (temp_v1 < temp_v4) {
          temp_v1 = temp_v4;
        }
        if (temp_v2 < temp_v3) {
          temp_v2 = temp_v3;
        }
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    *param_3 = in_s1;
    param_3[1] = temp_v0;
    *param_4 = temp_v1;
    param_4[1] = temp_v2;
    return;
  }
  if (param_1 == 1) {
    temp_v1 = temp_v0;
    temp_v2 = in_s0;
    if (0 < param_2) {
      pfVar1 = afStack_24;
      do {
        pfVar2 = pfVar2 + 3;
        temp_v3 = *pfVar2;
        temp_v4 = *pfVar1;
        pfVar1 = pfVar1 + 3;
        if (temp_v3 < in_s0) {
          in_s0 = temp_v3;
        }
        if (temp_v4 < temp_v1) {
          temp_v1 = temp_v4;
        }
        if (temp_v2 < temp_v3) {
          temp_v2 = temp_v3;
        }
        if (temp_v0 < temp_v4) {
          temp_v0 = temp_v4;
        }
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    *param_3 = in_s0;
    param_3[1] = temp_v1;
    *param_4 = temp_v2;
    param_4[1] = temp_v0;
    return;
  }
  if (param_1 == 2) {
    temp_v0 = in_s1;
    temp_v1 = in_s0;
    if (0 < param_2) {
      pfVar2 = &fStack_28;
      do {
        pfVar1 = pfVar1 + 3;
        temp_v2 = *pfVar1;
        temp_v3 = *pfVar2;
        pfVar2 = pfVar2 + 3;
        if (temp_v2 < in_s0) {
          in_s0 = temp_v2;
        }
        if (temp_v3 < temp_v0) {
          temp_v0 = temp_v3;
        }
        if (temp_v1 < temp_v2) {
          temp_v1 = temp_v2;
        }
        if (in_s1 < temp_v3) {
          in_s1 = temp_v3;
        }
        param_2 = param_2 - 1;
      } while (param_2 != 0);
    }
    *param_3 = in_s0;
    param_3[1] = temp_v0;
    *param_4 = temp_v1;
    param_4[1] = in_s1;
  }
  return;
}
