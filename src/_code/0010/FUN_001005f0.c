/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001005f0` (_code @ 0x1005f0, 0xb6 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

/* Supplied declaration required: FUN_001009a2. */
/* Supplied declaration required: FUN_002c69cc. */
/* Supplied declaration required: FUN_002c69f8. */


void FUN_001005f0(int *param_1,int param_2,int param_3)

{
/* irregular: 1 unstructured edge(s); 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6 [8];
  int temp_v7;
  unsigned int temp_v8;
  int *piStack_20;
  int temp_v9;
  int iStack_18;
  
  temp_v3 = 0;
  temp_v2 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  piStack_20 = param_1;
  temp_v9 = param_2;
  iStack_18 = param_3;
  while (((*param_1 << 0x1a >= 0 || (param_1[7] > temp_v3)) &&
         ((param_3 > temp_v2 || (*(short *)(temp_v9 + temp_v2 * 2) != 0))))) {
    temp_v0 = FUN_001009a2(temp_v6,*(unsigned short *)(temp_v9 + temp_v2 * 2),&temp_v4);
    if (temp_v0 != -1) {
      if ((*param_1 << 0x1a < 0) && ((unsigned int)param_1[7] < (unsigned int)(temp_v3 + temp_v0))) break;
      temp_v3 = temp_v3 + temp_v0;
    }
    temp_v2 = temp_v2 + 1;
  }
  param_1[6] = param_1[6] - temp_v3;
  FUN_002c69cc(param_1);
  temp_v4 = 0;
  temp_v5 = 0;
  for (temp_v7 = 0; temp_v7 < temp_v2; temp_v7 = temp_v7 + 1) {
    temp_v8 = FUN_001009a2(temp_v6,*(unsigned short *)(temp_v9 + temp_v7 * 2),&temp_v4);
    if (temp_v8 != 0xffffffff) {
      for (temp_v1 = 0; temp_v1 < temp_v8; temp_v1 = temp_v1 + 1) {
        (*(romwright_code *)param_1[1])(temp_v6[temp_v1],param_1[2]);
      }
    }
  }
  param_1[8] = param_1[8] + temp_v3;
  FUN_002c69f8(param_1);
  return;
}
