/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d1974` (_code @ 0x2d1974, 0x1d4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c4938(int [50], int);

typedef struct fn_002d1974_arg0 fn_002d1974_arg0;
struct fn_002d1974_arg0 {
    unsigned char pad_0x0[0xc];
    float field_0xc; /* +0xc */
    unsigned char pad_0x10[0x40];
    void *field_0x50; /* +0x50 */
    unsigned char pad_0x54[0xe];
    short field_0x62; /* +0x62 */
};

extern int FUN_002939f4(void);
/* Supplied declaration required: FUN_002c4938. */


unsigned int FUN_002d1974(fn_002d1974_arg0 *param_1,unsigned int param_2)

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
    temp_v0 = FUN_002939f4();
    FUN_002c4938(aiStack_e0,200);
    temp_v1 = 0;
    temp_v3 = *(int *)(temp_v0 + 0x1e98);
    temp_v0 = 0;
    do {
      temp_v2 = temp_v0 * 0x114 + 0x450 + temp_v3;
      temp_v4 = *(unsigned int *)(temp_v2 + 0x50);
      if (((((temp_v4 & 1) != 0 && (temp_v4 & 2) != 0) && (temp_v4 & 0x80) != 0) && ((temp_v4 & 0x10) == 0))
         && (*(short *)(temp_v2 + 0x62) != param_1->field_0x62)) {
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
