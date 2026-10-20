/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_hidlow_CTR_AccelerometerLifoRing_ReadData` (_code @ 0x13c410, 0x174 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int SBORROW4(...);

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp38; /* 0x38: local_38 */
} param_6_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */


void nn_hidlow_CTR_AccelerometerLifoRing_ReadData
               (unsigned int *param_1,int param_2,int param_3,int *param_4,long long *param_5,int *param_6)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned short *puVar9;
  int temp_v8;
  unsigned int temp_v9;
  
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
      temp_v2 = (unsigned int)*param_5;
      temp_v6 = *(int *)((int)param_5 + 4);
      if ((int)(temp_v6 - (temp_v4 + (temp_v2 < temp_v0))) < 0 ==
          (SBORROW4(temp_v6,temp_v4) != SBORROW4(temp_v6 - temp_v4,(unsigned int)(temp_v2 < temp_v0)))) {
        temp_v8 = temp_v7 - *param_6;
      }
      else if ((int)temp_v5 < 0) {
        temp_v8 = temp_v7 + 1;
      }
      else {
        temp_v8 = param_3;
        if ((int)(temp_v6 - (temp_v5 + (temp_v2 < temp_v1))) < 0 ==
            (SBORROW4(temp_v6,temp_v5) != SBORROW4(temp_v6 - temp_v5,(unsigned int)(temp_v2 < temp_v1)))) {
          temp_v8 = (temp_v7 - *param_6) + 8;
        }
      }
      temp_v6 = 0;
      if (param_3 < temp_v8) {
        temp_v8 = param_3;
      }
      if (0 < temp_v8) {
        do {
          temp_v3 = (int)((temp_v7 - temp_v6) + 8) % 8;
          puVar9 = (unsigned short *)(param_2 + temp_v6 * 6);
          temp_v6 = temp_v6 + 1;
          *puVar9 = *(unsigned short *)((int)param_1 + temp_v3 * 6 + 0x20);
          puVar9[1] = *(unsigned short *)((int)param_1 + temp_v3 * 6 + 0x22);
          puVar9[2] = *(unsigned short *)((int)param_1 + temp_v3 * 6 + 0x24);
        } while (temp_v6 < temp_v8);
      }
    } while (((param_1[4] != temp_v9) || (*param_1 != temp_v0 || param_1[1] != temp_v4)) ||
            (param_1[2] != temp_v1 || param_1[3] != temp_v5));
    *param_4 = temp_v8;
    *(unsigned int *)param_5 = temp_v0;
    *(unsigned int *)((int)param_5 + 4) = temp_v4;
    *param_6 = temp_v7;
  }
  return;
}

} /* extern "C" */
