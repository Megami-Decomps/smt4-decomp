/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012a900` (_code @ 0x12a900, 0x174 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
} param_6_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */


void FUN_0012a900(unsigned int *param_1,int param_2,int param_3,int *param_4,unsigned int *param_5,unsigned int *param_6)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned short *puVar9;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  
  *param_4 = 0;
  if (0 < param_3) {
    if (param_3 >= 8) {
      param_3 = 7;
    }
    do {
      temp_v9 = param_1[4];
      temp_v0 = *param_1;
      temp_v4 = param_1[1];
      temp_v1 = param_1[2];
      temp_v5 = param_1[3];
      temp_v7 = temp_v9;
      if ((int)temp_v9 < 1) {
        if (temp_v9 != 0) {
          return;
        }
        if (temp_v0 == temp_v1 && temp_v4 == temp_v5) {
          if ((int)temp_v4 < 0) {
            return;
          }
          temp_v7 = 7;
        }
      }
      temp_v6 = *param_5;
      temp_v2 = param_5[1];
      if ((int)(temp_v2 - (temp_v4 + (temp_v6 < temp_v0))) < 0 ==
          (SBORROW4(temp_v2,temp_v4) != SBORROW4(temp_v2 - temp_v4,(unsigned int)(temp_v6 < temp_v0)))) {
        temp_v8 = temp_v7 - *param_6;
      }
      else if ((int)temp_v5 < 0) {
        temp_v8 = temp_v7 + 1;
      }
      else {
        temp_v8 = param_3;
        if ((int)(temp_v2 - (temp_v5 + (temp_v6 < temp_v1))) < 0 ==
            (SBORROW4(temp_v2,temp_v5) != SBORROW4(temp_v2 - temp_v5,(unsigned int)(temp_v6 < temp_v1)))) {
          temp_v8 = (temp_v7 - *param_6) + 8;
        }
      }
      temp_v10 = 0;
      if (param_3 < temp_v8) {
        temp_v8 = param_3;
      }
      if (0 < temp_v8) {
        do {
          puVar9 = (unsigned short *)(param_2 + temp_v10 * 8);
          temp_v3 = (int)((temp_v7 - temp_v10) + 8) % 8;
          temp_v10 = temp_v10 + 1;
          *puVar9 = (short)param_1[temp_v3 * 2 + 8];
          puVar9[1] = *(unsigned short *)((int)param_1 + temp_v3 * 8 + 0x22);
          *(char *)(puVar9 + 2) = (char)param_1[temp_v3 * 2 + 9];
        } while (temp_v10 < temp_v8);
      }
    } while (((param_1[4] != temp_v9) || (*param_1 != temp_v0 || param_1[1] != temp_v4)) ||
            (param_1[2] != temp_v1 || param_1[3] != temp_v5));
    *param_4 = temp_v8;
    *param_5 = temp_v0;
    param_5[1] = temp_v4;
    *param_6 = temp_v7;
  }
  return;
}
