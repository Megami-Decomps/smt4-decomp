/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0044582c` (_code @ 0x44582c, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 8 slot(s), 25 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned char sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned short sp3E; /* 0x3e: local_3e */
    unsigned short sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

/* Supplied declaration required: FUN_00448ca4. */


void FUN_0044582c(int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned short temp_v5;
  unsigned short temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9;
  int temp_v10;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  temp_v0 = (**(romwright_code **)(*param_1 + 8))(param_1,0x48,0x20);
  if (*param_2 == 0x20000004) {
    if (param_2[7] != 0) {
      param_2 = (int *)((int)param_2 + param_2[7] + 0x1c);
    }
    else {
      param_2 = (int *)0x0;
    }
  }
  temp_v10 = 0x80518058;
  uStack_2c = 0x8d628057;
  uStack_28 = 0x8056;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  temp_v9 = 0;
  temp_v3 = param_2[7];
  temp_v4 = param_2[6];
  temp_v5 = *(unsigned short *)((int)&temp_v10 + param_2[0xd] * 2);
  temp_v6 = 0;
  temp_v8 = 0;
  temp_v7 = param_2[0xc] & 0xfcffffff;
  temp_v1 = *param_2;
  temp_v2 = temp_v1 == 0x20000009;
  if (!temp_v2) {
    temp_v1 = temp_v1 - 0x20000011;
    temp_v2 = temp_v1 == 0;
  }
  if ((!temp_v2) && (temp_v1 == 0x10)) {
    temp_v9 = 1;
  }
  if (temp_v0 != 0) {
    FUN_00448ca4(temp_v0,param_1,&temp_v3);
  }
  return;
}
