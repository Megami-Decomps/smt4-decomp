/* NON_MATCHING: romwright 0.5.0 decompilation of `btlUnitCheckAgainstActivePeers` (_code @ 0x3389d0, 0x1d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(int [50], int);

typedef struct fn_003389d0_arg0 fn_003389d0_arg0;
struct fn_003389d0_arg0 {
    unsigned char pad_0x0[0xc];
    float field_0xc; /* +0xc */
    unsigned char pad_0x10[0x40];
    void *field_0x50; /* +0x50 */
    unsigned char pad_0x54[0x16];
    short field_0x6a; /* +0x6a */
};

extern int btlGetMainState(void);
/* Supplied declaration required: sysMemClear. */


unsigned int btlUnitCheckAgainstActivePeers(fn_003389d0_arg0 *param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  float in_s0;
  int aiStack_e0 [50];
  
  if ((param_2 & 0x60000) == 0) {
    return 0;
  }
  if (((unsigned int)param_1->field_0x50 & 0x10) == 0) {
    temp_v0 = btlGetMainState();
    sysMemClear(aiStack_e0,200);
    temp_v1 = 0;
    temp_v3 = *(int *)(temp_v0 + 0x1ed4);
    temp_v0 = 0;
    do {
      temp_v2 = temp_v0 * 0x1d0 + 0x740 + temp_v3;
      temp_v4 = *(unsigned int *)(temp_v2 + 0x50);
      if (((((temp_v4 & 1) != 0 && (temp_v4 & 2) != 0) && (temp_v4 & 0x80) != 0) && ((temp_v4 & 0x10) == 0))
         && (*(short *)(temp_v2 + 0x6a) != param_1->field_0x6a)) {
        aiStack_e0[temp_v1] = temp_v2;
        temp_v1 = temp_v1 + 1;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x32);
    if ((param_2 & 0x20000) != 0) {
      if (temp_v1 == 0) {
        temp_v4 = 0;
      }
      else {
        temp_v4 = temp_v1 & 1;
        if (temp_v4 != 0) {
          in_s0 = param_1->field_0xc;
        }
        temp_v0 = 0;
        if (temp_v4 != 0) {
          do {
            if (*(float *)(aiStack_e0[temp_v0] + 0xc) < in_s0) {
              return 1;
            }
            temp_v0 = temp_v0 + 1;
          } while (temp_v0 < (int)temp_v4);
        }
      }
      if (temp_v4 < temp_v1) {
        do {
          if ((*(float *)(aiStack_e0[temp_v4] + 0xc) < param_1->field_0xc) ||
             (*(float *)(aiStack_e0[temp_v4 + 1] + 0xc) < param_1->field_0xc)) {
            return 1;
          }
          temp_v4 = temp_v4 + 2;
        } while (temp_v4 < temp_v1);
      }
    }
    else if ((param_2 & 0x40000) != 0) {
      if (temp_v1 == 0) {
        temp_v4 = 0;
      }
      else {
        temp_v4 = temp_v1 & 1;
        if (temp_v4 != 0) {
          in_s0 = param_1->field_0xc;
        }
        temp_v0 = 0;
        if (temp_v4 != 0) {
          do {
            if (in_s0 < *(float *)(aiStack_e0[temp_v0] + 0xc)) {
              return 1;
            }
            temp_v0 = temp_v0 + 1;
          } while (temp_v0 < (int)temp_v4);
        }
      }
      if (temp_v4 < temp_v1) {
        do {
          if (param_1->field_0xc < *(float *)(aiStack_e0[temp_v4] + 0xc)) {
            return 1;
          }
          if (param_1->field_0xc < *(float *)(aiStack_e0[temp_v4 + 1] + 0xc)) {
            return 1;
          }
          temp_v4 = temp_v4 + 2;
        } while (temp_v4 < temp_v1);
      }
    }
  }
  return 0;
}

} /* extern "C" */
