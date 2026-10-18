/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012a758` (_code @ 0x12a758, 0x1a8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_6_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */


void FUN_0012a758(unsigned int *param_1,int param_2,int param_3,int *param_4,unsigned int *param_5,unsigned int *param_6)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int *puVar9;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  
  *param_4 = 0;
  if (0 < param_3) {
    if (param_3 >= 8) {
      param_3 = 7;
    }
    do {
      temp_v5 = param_1[4];
      temp_v8 = *param_1;
      temp_v9 = param_1[1];
      temp_v0 = param_1[2];
      temp_v3 = param_1[3];
      temp_v6 = temp_v5;
      if ((int)temp_v5 < 1) {
        if (temp_v5 != 0) {
          return;
        }
        if (temp_v3 == temp_v9 && temp_v0 == temp_v8) {
          if ((int)temp_v9 < 0) {
            return;
          }
          temp_v6 = 7;
        }
      }
      temp_v1 = *param_5;
      temp_v4 = param_5[1];
      if ((int)(temp_v4 - (temp_v9 + (temp_v1 < temp_v8))) < 0 ==
          (SBORROW4(temp_v4,temp_v9) != SBORROW4(temp_v4 - temp_v9,(unsigned int)(temp_v1 < temp_v8)))) {
        temp_v10 = temp_v6 - *param_6;
      }
      else if ((int)temp_v3 < 0) {
        temp_v10 = temp_v6 + 1;
      }
      else {
        temp_v10 = param_3;
        if ((int)(temp_v4 - (temp_v3 + (temp_v1 < temp_v0))) < 0 ==
            (SBORROW4(temp_v4,temp_v3) != SBORROW4(temp_v4 - temp_v3,(unsigned int)(temp_v1 < temp_v0)))) {
          temp_v10 = (temp_v6 - *param_6) + 8;
        }
      }
      temp_v7 = 0;
      if (param_3 < temp_v10) {
        temp_v10 = param_3;
      }
      if (0 < temp_v10) {
        do {
          puVar9 = (unsigned int *)(param_2 + temp_v7 * 0x10);
          temp_v2 = (int)((temp_v6 - temp_v7) + 8) % 8;
          *puVar9 = param_1[temp_v2 * 4 + 10];
          temp_v7 = temp_v7 + 1;
          puVar9[1] = param_1[temp_v2 * 4 + 0xb];
          puVar9[2] = param_1[temp_v2 * 4 + 0xc];
          *(short *)(puVar9 + 3) = (short)param_1[temp_v2 * 4 + 0xd];
          *(unsigned short *)((int)puVar9 + 0xe) = *(unsigned short *)((int)param_1 + temp_v2 * 0x10 + 0x36);
        } while (temp_v7 < temp_v10);
      }
    } while (((param_1[4] != temp_v5) || (*param_1 != temp_v8 || param_1[1] != temp_v9)) ||
            (temp_v3 != param_1[3] || temp_v0 != param_1[2]));
    *param_4 = temp_v10;
    param_5[1] = temp_v9;
    *param_5 = temp_v8;
    *param_6 = temp_v6;
  }
  return;
}
