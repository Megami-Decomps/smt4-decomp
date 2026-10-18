/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011f8b8` (_code @ 0x11f8b8, 0x110 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 10 slot(s), 33 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned char sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned short sp4E; /* 0x4e: local_4e */
    unsigned short sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

/* Supplied declaration required: FUN_0012c628. */


void FUN_0011f8b8(int *param_1,int *param_2)

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
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11;
  char temp_v12 [32];
  
  temp_v0 = (**(romwright_code **)(*param_1 + 8))(param_1,0x50,0x20);
  if (*param_2 == 0x20000004) {
    if (param_2[7] != 0) {
      param_2 = (int *)((int)param_2 + param_2[7] + 0x1c);
    }
    else {
      param_2 = (int *)0x0;
    }
  }
  temp_v12[0] = 'X';
  temp_v12[1] = -0x80;
  temp_v12[2] = 'Q';
  temp_v12[3] = -0x80;
  temp_v12[4] = 'W';
  temp_v12[5] = -0x80;
  temp_v12[6] = 'b';
  temp_v12[7] = -0x73;
  temp_v12[8] = 'V';
  temp_v12[9] = -0x80;
  temp_v12[10] = '\0';
  temp_v12[0xb] = '\0';
  temp_v12[0xc] = '\0';
  temp_v12[0xd] = '\0';
  temp_v12[0xe] = '\0';
  temp_v12[0xf] = '\0';
  temp_v12[0x10] = '\0';
  temp_v12[0x11] = '\0';
  temp_v12[0x12] = '\0';
  temp_v12[0x13] = '\0';
  temp_v12[0x14] = '\0';
  temp_v12[0x15] = '\0';
  temp_v12[0x16] = '\0';
  temp_v12[0x17] = '\0';
  temp_v12[0x18] = '\0';
  temp_v12[0x19] = '\0';
  temp_v12[0x1a] = '\0';
  temp_v12[0x1b] = '\0';
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v11 = 0;
  temp_v3 = param_2[7];
  temp_v4 = param_2[6];
  temp_v5 = *(unsigned short *)(temp_v12 + param_2[0xd] * 2);
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
    temp_v11 = 1;
  }
  if (temp_v0 != 0) {
    FUN_0012c628(temp_v0,param_1,&temp_v3);
  }
  return;
}
