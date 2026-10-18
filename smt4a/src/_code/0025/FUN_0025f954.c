/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025f954` (_code @ 0x25f954, 0x288 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp60; /* 0x60: local_60 */
} param_1_stack;

extern int DAT_00580208; /* 0x580208 */
extern int DAT_0058021c; /* 0x58021c */
extern int *DAT_00580234; /* 0x580234 */

/* Supplied declaration required: FUN_00226e90. */
/* Supplied declaration required: FUN_00237438. */


void FUN_0025f954(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  float *pfVar1;
  int *piVar2;
  int temp_v0;
  unsigned int *puVar4;
  unsigned int temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  
  temp_v1 = 0;
  if (DAT_00580234[5] != 0) {
    temp_v14 = 0x3eaaaaab;
    do {
      piVar2 = (int *)(DAT_00580234[4] + temp_v1 * 0x18);
      puVar4 = (unsigned int *)(DAT_0058021c + DAT_00580208 * 0xa8);
      temp_v0 = *DAT_00580234;
      pfVar1 = (float *)(temp_v0 + *piVar2 * 0x10);
      temp_v5 = *pfVar1;
      temp_v7 = pfVar1[1];
      temp_v6 = pfVar1[2];
      pfVar1 = (float *)(temp_v0 + piVar2[1] * 0x10);
      temp_v10 = *pfVar1;
      temp_v13 = pfVar1[1];
      temp_v11 = pfVar1[2];
      pfVar1 = (float *)(temp_v0 + piVar2[2] * 0x10);
      temp_v8 = *pfVar1;
      temp_v12 = pfVar1[1];
      temp_v9 = pfVar1[2];
      pfVar1 = (float *)(DAT_00580234[2] + piVar2[4] * 0x10);
      temp_v2 = *pfVar1;
      temp_v3 = pfVar1[1];
      temp_v4 = pfVar1[2];
      *(float *)&puVar4[0x17] = temp_v5;
      *(float *)&puVar4[0x18] = temp_v7;
      *(float *)&puVar4[0x19] = temp_v6;
      *(float *)&puVar4[0x1a] = temp_v10;
      *(float *)&puVar4[0x1b] = temp_v13;
      *(float *)&puVar4[0x1c] = temp_v11;
      *(float *)&puVar4[0x1d] = temp_v8;
      *(float *)&puVar4[0x1e] = temp_v12;
      *(float *)&puVar4[0x1f] = temp_v9;
      *(float *)&puVar4[3] = temp_v2;
      *(float *)&puVar4[4] = temp_v3;
      *(float *)&puVar4[5] = temp_v4;
      puVar4[6] = temp_v2 * temp_v5 + temp_v3 * temp_v7 + temp_v4 * temp_v6;
      temp_v2 = (float)temp_v14;
      puVar4[0x23] = (temp_v5 + temp_v10 + temp_v8) * temp_v2;
      puVar4[0x24] = (temp_v7 + temp_v13 + temp_v12) * temp_v2;
      puVar4[0x25] = (temp_v6 + temp_v11 + temp_v9) * temp_v2;
      *(unsigned char *)((int)puVar4 + 5) = 3;
      *(unsigned char *)(puVar4 + 1) = 1;
      *puVar4 = param_1;
      *(unsigned short *)((int)puVar4 + 6) = 0;
      *(unsigned char *)(puVar4 + 2) = 1;
      *(unsigned char *)((int)puVar4 + 9) = 0;
      *(unsigned short *)((int)puVar4 + 10) = 0;
      FUN_00237438((int)*(char *)(puVar4 + 1),0,puVar4 + 7,puVar4 + 0x13);
      FUN_00237438((int)*(char *)(puVar4 + 1),1,puVar4 + 10,puVar4 + 0x14);
      FUN_00237438((int)*(char *)(puVar4 + 1),2,puVar4 + 0xd,puVar4 + 0x15);
      FUN_00226e90((int)*(char *)(puVar4 + 1),(int)*(char *)((int)puVar4 + 5),puVar4 + 0x26,
                   puVar4 + 0x28);
      temp_v1 = temp_v1 + 1;
      DAT_00580208 = DAT_00580208 + 1;
    } while (temp_v1 < (unsigned int)DAT_00580234[5]);
  }
  return;
}
