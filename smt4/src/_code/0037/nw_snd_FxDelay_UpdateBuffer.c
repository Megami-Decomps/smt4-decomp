/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_FxDelay_UpdateBuffer` (_code @ 0x378c34, 0x100 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_4_stack;


void nw_snd_FxDelay_UpdateBuffer(int param_1,unsigned int param_2,int *param_3,unsigned int param_4)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  int unaff_r9;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  int temp_v9 [5];
  
  if (*(char *)(param_1 + 0x5e) != '\0') {
    temp_v3 = 0;
    temp_v9[0] = *param_3;
    temp_v9[1] = param_3[1];
    temp_v9[2] = param_3[2];
    temp_v9[3] = param_3[3];
    temp_v0 = *(int *)(param_1 + 0x48);
    if (*(char *)(param_1 + 0x5d) != '\0') {
      do {
        temp_v1 = param_1 + temp_v3 * 4;
        temp_v4 = temp_v9[temp_v3];
        temp_v5 = *(int *)(temp_v1 + 0x24);
        piVar7 = (int *)(temp_v1 + 0x34);
        temp_v2 = 0;
        temp_v1 = temp_v0 * 0xa0;
        if (param_4 != 0) {
          do {
            temp_v7 = *(int *)(temp_v5 + temp_v1 * 4);
            temp_v8 = temp_v7 < 0;
            if (temp_v8) {
              unaff_r9 = -temp_v7;
            }
            if (!temp_v8) {
              unaff_r9 = temp_v7;
            }
            temp_v6 = *(int *)(param_1 + 0x4c) * unaff_r9 >> 7;
            if (temp_v8) {
              temp_v6 = -temp_v6;
            }
            unaff_r9 = (*(int *)(param_1 + 0x50) * (*(int *)(temp_v4 + temp_v2 * 4) - temp_v6) +
                       *(int *)(param_1 + 0x54) * *piVar7) >> 7;
            *piVar7 = unaff_r9;
            *(int *)(temp_v5 + temp_v1 * 4) = unaff_r9;
            *(int *)(temp_v4 + temp_v2 * 4) = temp_v7;
            temp_v2 = temp_v2 + 1;
            temp_v1 = temp_v1 + 1;
          } while (temp_v2 < param_4);
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < *(unsigned char *)(param_1 + 0x5d));
    }
    temp_v3 = *(int *)(param_1 + 0x48) + 1;
    *(unsigned int *)(param_1 + 0x48) = temp_v3;
    if (*(unsigned int *)(param_1 + 0x44) <= temp_v3) {
      *(unsigned int *)(param_1 + 0x48) = 0;
    }
  }
  return;
}
