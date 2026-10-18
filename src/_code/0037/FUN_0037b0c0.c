/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b0c0` (_code @ 0x37b0c0, 0x148 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
} param_3_stack;

/* Supplied declaration required: FUN_002b5124. */
/* Supplied declaration required: FUN_002b5148. */
extern int FUN_002bb218(void);
/* Supplied declaration required: FUN_0037bf60. */


void FUN_0037b0c0(int param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11 [4];
  unsigned int temp_v12;
  
  FUN_0037bf60(temp_v11,*param_2);
  temp_v1 = FUN_002bb218();
  temp_v8 = temp_v1;
  FUN_002b5148(temp_v1,0x10);
  *(unsigned int *)(temp_v8 + 0xc) = *(unsigned int *)(temp_v1 + 0x184);
  *(unsigned char *)(temp_v8 + 4) = 0xe;
  *(int *)(temp_v8 + 0x10) = param_1 + 0xf4;
  *(unsigned int *)(temp_v8 + 0x3c) = *param_3;
  *(unsigned int *)(temp_v8 + 0x14) = temp_v12;
  *(unsigned int *)(temp_v8 + 0x18) = param_2[1];
  *(unsigned int *)(temp_v8 + 0x28) = param_2[5];
  *(unsigned char *)(temp_v8 + 0x38) = *(unsigned char *)(param_2 + 9);
  *(unsigned int *)(temp_v8 + 0x1c) = param_2[2];
  *(unsigned int *)(temp_v8 + 0x2c) = param_2[6];
  *(unsigned char *)(temp_v8 + 0x39) = *(unsigned char *)((int)param_2 + 0x25);
  *(unsigned int *)(temp_v8 + 0x20) = param_2[3];
  *(unsigned int *)(temp_v8 + 0x30) = param_2[7];
  *(unsigned char *)(temp_v8 + 0x3a) = *(unsigned char *)((int)param_2 + 0x26);
  *(unsigned int *)(temp_v8 + 0x24) = param_2[4];
  *(unsigned int *)(temp_v8 + 0x34) = param_2[8];
  *(unsigned char *)(temp_v8 + 0x3b) = *(unsigned char *)((int)param_2 + 0x27);
  FUN_002b5124(temp_v1,temp_v8);
  temp_v8 = param_3[2];
  if (0 < temp_v8) {
    temp_v0 = *(unsigned char *)(param_3 + 1);
    temp_v2 = FUN_002bb218();
    temp_v1 = temp_v2;
    FUN_002b5148(temp_v2,7);
    *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v2 + 0x184);
    *(unsigned char *)(temp_v1 + 4) = 0xf;
    *(int *)(temp_v1 + 0x10) = param_1 + 0xf4;
    *(unsigned int *)(temp_v1 + 0x14) = (unsigned int)temp_v0;
    *(int *)(temp_v1 + 0x18) = temp_v8;
    FUN_002b5124(temp_v2);
  }
  temp_v3 = param_2[1];
  temp_v4 = param_2[2];
  temp_v5 = param_2[3];
  temp_v6 = param_2[4];
  temp_v7 = param_2[5];
  temp_v9 = param_2[6];
  temp_v10 = param_2[7];
  *(unsigned int *)(param_1 + 0x52c) = *param_2;
  *(unsigned int *)(param_1 + 0x530) = temp_v3;
  *(unsigned int *)(param_1 + 0x534) = temp_v4;
  *(unsigned int *)(param_1 + 0x538) = temp_v5;
  *(unsigned int *)(param_1 + 0x53c) = temp_v6;
  *(unsigned int *)(param_1 + 0x540) = temp_v7;
  *(unsigned int *)(param_1 + 0x544) = temp_v9;
  *(unsigned int *)(param_1 + 0x548) = temp_v10;
  temp_v3 = param_2[9];
  *(unsigned int *)(param_1 + 0x54c) = param_2[8];
  *(unsigned int *)(param_1 + 0x550) = temp_v3;
  *(unsigned char *)(param_1 + 0x556) = 1;
  return;
}
