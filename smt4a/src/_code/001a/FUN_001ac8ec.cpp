/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ac8ec` (_code @ 0x1ac8ec, 0x250 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(int, double);

typedef int romwright_code(...);
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */


void FUN_001ac8ec(float *param_1)

{
/* irregular: irregular input(s): in_s0; 2 native warning(s); review required */
  romwright_code *pcVar1;
  float temp_v0;
  float in_s0;
  unsigned long long temp_v1;
  float temp_v2;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float temp_v3;
  float fStack_34;
  float fStack_30;
  float temp_v4;
  
  param_1[0x18] = in_s0;
  temp_v0 = param_1[0x23];
  if (temp_v0 != 0.0f) {
    temp_v1 = CONCAT44(0x40a00000,param_1[0x1d] * in_s0);
    do {
      if ((*(unsigned int *)((int)temp_v0 + 0x68) & 0x100) != 0) {
        temp_v4 = *(float *)((int)temp_v0 + 0x60);
        if ((*(unsigned int *)((int)temp_v0 + 0x84) & 1) != 0) {
          temp_v4 = temp_v4 * (float)temp_v1;
        }
        temp_v3 = *(float *)((int)temp_v0 + 0x20) * temp_v4;
        fStack_34 = *(float *)((int)temp_v0 + 0x24) * temp_v4;
        fStack_30 = *(float *)((int)temp_v0 + 0x28) * temp_v4;
        temp_v4 = *(float *)((int)temp_v0 + 0x2c) * temp_v4;
        pcVar1 = *(romwright_code **)((unsigned int)*(unsigned short *)(*(int *)((int)temp_v0 + 0x90) + 4) * 0x44 + 0x5b32a0);
        DAT_006472dc = temp_v3;
        DAT_006472e0 = fStack_34;
        DAT_006472e4 = fStack_30;
        DAT_006472e8 = temp_v4;
        if (pcVar1 != (romwright_code *)0x0) {
          (*pcVar1)(*(unsigned int *)(*(int *)((int)temp_v0 + 0x90) + 8),&temp_v3);
        }
      }
      else {
        pcVar1 = *(romwright_code **)((unsigned int)*(unsigned short *)(*(int *)((int)temp_v0 + 0x90) + 4) * 0x44 + 0x5b329c);
        if (pcVar1 != (romwright_code *)0x0) {
          (*pcVar1)(*(unsigned int *)(*(int *)((int)temp_v0 + 0x90) + 8));
        }
      }
      if ((*(unsigned int *)((int)temp_v0 + 0x68) & 0x80) != 0) {
        DAT_006472e0 = param_1[0x11] + param_1[1];
        if ((*(unsigned int *)((int)temp_v0 + 0x68) & 4) != 0) {
          DAT_006472e0 = (float)((unsigned long long)temp_v1 >> 0x20);
        }
        DAT_006472f8 = (float)temp_v1;
        DAT_006472ec = *(float *)((int)temp_v0 + 0x40) * DAT_006472f8;
        DAT_006472f0 = *(float *)((int)temp_v0 + 0x44) * DAT_006472f8;
        DAT_006472f4 = *(float *)((int)temp_v0 + 0x48) * DAT_006472f8;
        DAT_006472f8 = *(float *)((int)temp_v0 + 0x4c) * DAT_006472f8;
        temp_v2 = param_1[0x10] + *param_1 + DAT_006472ec;
        fStack_44 = DAT_006472e0 + DAT_006472f0;
        fStack_40 = param_1[0x12] + param_1[2] + DAT_006472f4;
        fStack_3c = param_1[0x13] + param_1[3] + DAT_006472f8;
        pcVar1 = *(romwright_code **)((unsigned int)*(unsigned short *)(*(int *)((int)temp_v0 + 0x90) + 4) * 0x44 + 0x5b3294);
        DAT_006472dc = temp_v2;
        DAT_006472e0 = fStack_44;
        DAT_006472e4 = fStack_40;
        DAT_006472e8 = fStack_3c;
        if (pcVar1 != (romwright_code *)0x0) {
          (*pcVar1)(*(unsigned int *)(*(int *)((int)temp_v0 + 0x90) + 8),&temp_v2);
        }
      }
      temp_v0 = *(float *)((int)temp_v0 + 0xac);
    } while (temp_v0 != 0.0f);
  }
  return;
}

} /* extern "C" */
