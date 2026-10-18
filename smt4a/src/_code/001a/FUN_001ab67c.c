/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ab67c` (_code @ 0x1ab67c, 0x194 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_11: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
} param_11_stack;

/* Supplied declaration required: FUN_001a73fc. */


void FUN_001ab67c(int param_1,int param_2,int param_3,unsigned int param_4,unsigned long long param_5,
                 unsigned long long param_6,unsigned long long param_7,unsigned int param_8,unsigned int param_9,
                 unsigned int param_10,unsigned long long param_11)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int *puVar4;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned long long temp_v11;
  unsigned char uStack0000002c;
  unsigned char temp_v12 [12];
  int temp_v13;
  unsigned int temp_v14;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int temp_v15;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  
  temp_v11 = (unsigned long long)param_9;
  temp_v3 = param_2;
  temp_v16 = param_9;
  while( 1 ) {
    temp_v0 = temp_v3 * 2;
    temp_v2 = temp_v0 + 2;
    if (param_3 <= temp_v2) break;
    temp_v1 = param_1 + temp_v2 * 0x30;
    temp_v1 = FUN_001a73fc(&uStack0000002c,temp_v1,temp_v1 - 0x30);
    temp_v16 = (unsigned int)temp_v11;
    if (temp_v1 != 0) {
      temp_v2 = temp_v0 + 1;
    }
    puVar1 = (unsigned int *)(param_1 + temp_v3 * 0x30);
    puVar4 = (unsigned int *)(param_1 + temp_v2 * 0x30);
    temp_v4 = puVar4[1];
    temp_v5 = puVar4[2];
    temp_v6 = puVar4[3];
    temp_v7 = puVar4[4];
    temp_v8 = puVar4[5];
    temp_v9 = puVar4[6];
    temp_v10 = puVar4[7];
    *puVar1 = *puVar4;
    puVar1[1] = temp_v4;
    puVar1[2] = temp_v5;
    puVar1[3] = temp_v6;
    puVar1[4] = temp_v7;
    puVar1[5] = temp_v8;
    puVar1[6] = temp_v9;
    puVar1[7] = temp_v10;
    temp_v4 = puVar4[9];
    temp_v5 = puVar4[10];
    temp_v6 = puVar4[0xb];
    puVar1[8] = puVar4[8];
    puVar1[9] = temp_v4;
    puVar1[10] = temp_v5;
    puVar1[0xb] = temp_v6;
    temp_v3 = temp_v2;
  }
  if (temp_v2 == param_3) {
    temp_v2 = param_1 + temp_v2 * 0x30;
    puVar1 = (unsigned int *)(param_1 + temp_v3 * 0x30);
    temp_v4 = *(unsigned int *)(temp_v2 - 0x2c);
    temp_v5 = *(unsigned int *)(temp_v2 - 0x28);
    temp_v6 = *(unsigned int *)(temp_v2 - 0x24);
    temp_v7 = *(unsigned int *)(temp_v2 - 0x20);
    temp_v8 = *(unsigned int *)(temp_v2 - 0x1c);
    temp_v9 = *(unsigned int *)(temp_v2 - 0x18);
    temp_v10 = *(unsigned int *)(temp_v2 - 0x14);
    temp_v3 = temp_v0 + 1;
    *puVar1 = *(unsigned int *)(temp_v2 - 0x30);
    puVar1[1] = temp_v4;
    puVar1[2] = temp_v5;
    puVar1[3] = temp_v6;
    puVar1[4] = temp_v7;
    puVar1[5] = temp_v8;
    puVar1[6] = temp_v9;
    puVar1[7] = temp_v10;
    temp_v4 = *(unsigned int *)(temp_v2 - 0x10);
    temp_v5 = *(unsigned int *)(temp_v2 - 0xc);
    temp_v6 = *(unsigned int *)(temp_v2 - 8);
    puVar1[0xb] = *(unsigned int *)(temp_v2 - 4);
    puVar1[8] = temp_v4;
    puVar1[9] = temp_v5;
    puVar1[10] = temp_v6;
  }
  temp_v14 = (unsigned int)param_5;
  uStack_7c = (unsigned int)((unsigned long long)param_5 >> 0x20);
  uStack_78 = (unsigned int)param_6;
  temp_v15 = (unsigned int)((unsigned long long)param_6 >> 0x20);
  uStack_70 = (unsigned int)param_7;
  uStack_6c = (unsigned int)((unsigned long long)param_7 >> 0x20);
  uStack_5c = (unsigned int)param_11;
  uStack_58 = (unsigned int)((unsigned long long)param_11 >> 0x20);
  temp_v0 = (temp_v3 - 1) - ((temp_v3 - 1) >> 0x1f);
  temp_v13 = param_4;
  uStack_68 = param_8;
  temp_v17 = param_10;
  while (temp_v2 = temp_v0 >> 1, param_2 < temp_v3) {
    puVar1 = (unsigned int *)(param_1 + temp_v2 * 0x30);
    temp_v0 = FUN_001a73fc(temp_v12,puVar1,&temp_v13);
    if (temp_v0 == 0) break;
    temp_v4 = puVar1[1];
    temp_v5 = puVar1[2];
    temp_v6 = puVar1[3];
    temp_v7 = puVar1[4];
    temp_v8 = puVar1[5];
    temp_v9 = puVar1[6];
    temp_v10 = puVar1[7];
    puVar4 = (unsigned int *)(param_1 + temp_v3 * 0x30);
    *puVar4 = *puVar1;
    puVar4[1] = temp_v4;
    puVar4[2] = temp_v5;
    puVar4[3] = temp_v6;
    puVar4[4] = temp_v7;
    puVar4[5] = temp_v8;
    puVar4[6] = temp_v9;
    puVar4[7] = temp_v10;
    temp_v4 = puVar1[9];
    temp_v5 = puVar1[10];
    temp_v6 = puVar1[0xb];
    puVar4[8] = puVar1[8];
    puVar4[9] = temp_v4;
    puVar4[10] = temp_v5;
    puVar4[0xb] = temp_v6;
    temp_v0 = (temp_v2 - 1) - ((temp_v2 - 1) >> 0x1f);
    temp_v3 = temp_v2;
  }
  puVar1 = (unsigned int *)(param_1 + temp_v3 * 0x30);
  *puVar1 = temp_v13;
  puVar1[1] = temp_v14;
  puVar1[2] = uStack_7c;
  puVar1[3] = uStack_78;
  puVar1[4] = temp_v15;
  puVar1[5] = uStack_70;
  puVar1[6] = uStack_6c;
  puVar1[7] = uStack_68;
  puVar1[8] = temp_v16;
  puVar1[9] = temp_v17;
  puVar1[10] = uStack_5c;
  puVar1[0xb] = uStack_58;
  return;
}
