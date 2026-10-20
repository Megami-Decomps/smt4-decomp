/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00198930` (_code @ 0x198930, 0x294 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001006ec(int, int, int);

extern unsigned int *FUN_001006c2(int, unsigned int);
/* Supplied declaration required: FUN_001006ec. */


void FUN_00198930(int *param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  
  puVar4 = (unsigned int *)param_1[1];
  temp_v0 = ((int)puVar4 - *param_1) / 0x30;
  if ((unsigned int)((param_1[2] - *param_1) / 0x30) <= temp_v0) {
    temp_v2 = temp_v0 + (temp_v0 >> 1) + (temp_v0 >> 3);
    if (temp_v2 < temp_v0 + 0x20) {
      temp_v2 = temp_v0 + 0x20;
    }
    puVar2 = (unsigned int *)FUN_001006c2(temp_v2 * 0x30,0);
    puVar5 = puVar2;
    for (puVar4 = (unsigned int *)*param_1; puVar4 != param_2; puVar4 = puVar4 + 0xc) {
      if (puVar5 != (unsigned int *)0x0) {
        temp_v4 = puVar4[1];
        temp_v5 = puVar4[2];
        temp_v6 = puVar4[3];
        temp_v7 = puVar4[4];
        temp_v8 = puVar4[5];
        temp_v9 = puVar4[6];
        temp_v10 = puVar4[7];
        *puVar5 = *puVar4;
        puVar5[1] = temp_v4;
        puVar5[2] = temp_v5;
        puVar5[3] = temp_v6;
        puVar5[4] = temp_v7;
        puVar5[5] = temp_v8;
        puVar5[6] = temp_v9;
        puVar5[7] = temp_v10;
        temp_v4 = puVar4[9];
        temp_v5 = puVar4[10];
        temp_v6 = puVar4[0xb];
        puVar5[8] = puVar4[8];
        puVar5[9] = temp_v4;
        puVar5[10] = temp_v5;
        puVar5[0xb] = temp_v6;
      }
      puVar5 = puVar5 + 0xc;
    }
    puVar4 = puVar2 + (((int)param_2 - *param_1) / 0x30) * 0xc;
    if (puVar4 != (unsigned int *)0x0) {
      temp_v4 = param_3[1];
      temp_v5 = param_3[2];
      temp_v6 = param_3[3];
      temp_v7 = param_3[4];
      temp_v8 = param_3[5];
      temp_v9 = param_3[6];
      temp_v10 = param_3[7];
      *puVar4 = *param_3;
      puVar4[1] = temp_v4;
      puVar4[2] = temp_v5;
      puVar4[3] = temp_v6;
      puVar4[4] = temp_v7;
      puVar4[5] = temp_v8;
      puVar4[6] = temp_v9;
      puVar4[7] = temp_v10;
      temp_v4 = param_3[9];
      temp_v5 = param_3[10];
      temp_v6 = param_3[0xb];
      puVar4[8] = param_3[8];
      puVar4[9] = temp_v4;
      puVar4[10] = temp_v5;
      puVar4[0xb] = temp_v6;
    }
    puVar5 = (unsigned int *)param_1[1];
    puVar4 = puVar2 + (((int)param_2 - *param_1) / 0x30) * 0xc;
    for (; param_2 != puVar5; param_2 = param_2 + 0xc) {
      puVar3 = puVar4 + 0xc;
      if (puVar3 != (unsigned int *)0x0) {
        temp_v4 = param_2[1];
        temp_v5 = param_2[2];
        temp_v6 = param_2[3];
        temp_v7 = param_2[4];
        temp_v8 = param_2[5];
        temp_v9 = param_2[6];
        temp_v10 = param_2[7];
        *puVar3 = *param_2;
        puVar4[0xd] = temp_v4;
        puVar4[0xe] = temp_v5;
        puVar4[0xf] = temp_v6;
        puVar4[0x10] = temp_v7;
        puVar4[0x11] = temp_v8;
        puVar4[0x12] = temp_v9;
        puVar4[0x13] = temp_v10;
        temp_v4 = param_2[9];
        temp_v5 = param_2[10];
        temp_v6 = param_2[0xb];
        puVar4[0x14] = param_2[8];
        puVar4[0x15] = temp_v4;
        puVar4[0x16] = temp_v5;
        puVar4[0x17] = temp_v6;
      }
      puVar4 = puVar3;
    }
    temp_v3 = *param_1;
    temp_v1 = param_1[1];
    FUN_001006ec(temp_v3,(param_1[2] - temp_v3) / 0x30,0);
    *param_1 = (int)puVar2;
    param_1[1] = (int)(puVar2 + ((temp_v1 - temp_v3) / 0x30) * 0xc + 0xc);
    param_1[2] = (int)(puVar2 + temp_v2 * 0xc);
    return;
  }
  param_1[1] = (int)(puVar4 + 0xc);
  if (puVar4 != (unsigned int *)0x0) {
    *puVar4 = puVar4[-0xc];
    puVar4[1] = puVar4[-0xb];
    puVar4[2] = puVar4[-10];
    puVar4[3] = puVar4[-9];
    puVar4[4] = puVar4[-8];
    puVar4[5] = puVar4[-7];
    puVar4[6] = puVar4[-6];
    puVar4[7] = puVar4[-5];
    puVar4[8] = puVar4[-4];
    puVar4[9] = puVar4[-3];
    puVar4[10] = puVar4[-2];
    puVar4[0xb] = puVar4[-1];
  }
  puVar5 = puVar4 + -0xc;
  if ((int)puVar5 - (int)param_2 >= 0x30) {
    temp_v0 = ((int)puVar5 - (int)param_2) / 0x30;
    puVar2 = puVar4;
    if ((temp_v0 & 1) != 0) {
      puVar5 = puVar4 + -0x18;
      puVar2 = puVar4 + -0xc;
      *puVar2 = *puVar5;
      puVar4[-0xb] = puVar4[-0x17];
      puVar4[-10] = puVar4[-0x16];
      puVar4[-9] = puVar4[-0x15];
      puVar4[-8] = puVar4[-0x14];
      puVar4[-7] = puVar4[-0x13];
      puVar4[-6] = puVar4[-0x12];
      puVar4[-5] = puVar4[-0x11];
      puVar4[-4] = puVar4[-0x10];
      puVar4[-3] = puVar4[-0xf];
      puVar4[-2] = puVar4[-0xe];
      puVar4[-1] = puVar4[-0xd];
    }
    for (temp_v3 = (int)temp_v0 >> 1; temp_v3 != 0; temp_v3 = temp_v3 - 1) {
      temp_v4 = puVar5[-0xb];
      temp_v5 = puVar5[-10];
      temp_v6 = puVar5[-9];
      temp_v7 = puVar5[-8];
      temp_v8 = puVar5[-7];
      temp_v9 = puVar5[-6];
      temp_v10 = puVar5[-5];
      puVar2[-0xc] = puVar5[-0xc];
      puVar2[-0xb] = temp_v4;
      puVar2[-10] = temp_v5;
      puVar2[-9] = temp_v6;
      puVar2[-8] = temp_v7;
      puVar2[-7] = temp_v8;
      puVar2[-6] = temp_v9;
      puVar2[-5] = temp_v10;
      temp_v4 = puVar5[-4];
      temp_v5 = puVar5[-3];
      temp_v6 = puVar5[-2];
      puVar2[-1] = puVar5[-1];
      puVar2[-4] = temp_v4;
      puVar2[-3] = temp_v5;
      puVar2[-2] = temp_v6;
      temp_v4 = puVar5[-0x17];
      temp_v5 = puVar5[-0x16];
      temp_v6 = puVar5[-0x15];
      temp_v7 = puVar5[-0x14];
      temp_v8 = puVar5[-0x13];
      temp_v9 = puVar5[-0x12];
      temp_v10 = puVar5[-0x11];
      puVar2[-0x18] = puVar5[-0x18];
      puVar2[-0x17] = temp_v4;
      puVar2[-0x16] = temp_v5;
      puVar2[-0x15] = temp_v6;
      puVar2[-0x14] = temp_v7;
      puVar2[-0x13] = temp_v8;
      puVar2[-0x12] = temp_v9;
      puVar2[-0x11] = temp_v10;
      temp_v4 = puVar5[-0xf];
      temp_v5 = puVar5[-0xe];
      temp_v6 = puVar5[-0xd];
      puVar2[-0x10] = puVar5[-0x10];
      puVar2[-0xf] = temp_v4;
      puVar2[-0xe] = temp_v5;
      puVar2[-0xd] = temp_v6;
      puVar5 = puVar5 + -0x18;
      puVar2 = puVar2 + -0x18;
    }
  }
  temp_v4 = param_3[1];
  temp_v5 = param_3[2];
  temp_v6 = param_3[3];
  temp_v7 = param_3[4];
  temp_v8 = param_3[5];
  temp_v9 = param_3[6];
  temp_v10 = param_3[7];
  *param_2 = *param_3;
  param_2[1] = temp_v4;
  param_2[2] = temp_v5;
  param_2[3] = temp_v6;
  param_2[4] = temp_v7;
  param_2[5] = temp_v8;
  param_2[6] = temp_v9;
  param_2[7] = temp_v10;
  temp_v4 = param_3[9];
  temp_v5 = param_3[10];
  temp_v6 = param_3[0xb];
  param_2[8] = param_3[8];
  param_2[9] = temp_v4;
  param_2[10] = temp_v5;
  param_2[0xb] = temp_v6;
  return;
}

} /* extern "C" */
