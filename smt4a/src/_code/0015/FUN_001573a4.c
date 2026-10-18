/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001573a4` (_code @ 0x1573a4, 0x178 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *FUN_001006c2(int, unsigned int);
/* Supplied declaration required: FUN_001006ec. */
extern unsigned char FUN_0016b034(int, int);
/* Supplied declaration required: FUN_0016d1f4. */


int * FUN_001573a4(unsigned int *param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int temp_v2;
  unsigned int *puVar7;
  unsigned int temp_v3;
  int temp_v4;
  int *piVar10;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[5] = param_4;
  param_1 = param_1 + 8;
  FUN_0016d1f4();
  piVar10 = (int *)(param_1 + -8);
  param_1[0x20] = 0;
  *(unsigned short *)(param_1 + 0x21) = 0xffff;
  *(unsigned short *)((int)param_1 + 0x86) = 0xffff;
  *(unsigned short *)(param_1 + 0x22) = 0xffff;
  param_1[0x23] = 0;
  param_1[-4] = param_3 + 0x10;
  param_1[0x24] = 0;
  if ((unsigned int)((param_1[-6] - *piVar10) / 0x30) < 0x400) {
    temp_v0 = (param_1[-7] - *piVar10) / 0x30;
    temp_v3 = temp_v0 + (temp_v0 >> 1) + (temp_v0 >> 3);
    if (temp_v3 < temp_v0 + 0x20) {
      temp_v3 = temp_v0 + 0x20;
    }
    if (temp_v3 < 0x401) {
      temp_v3 = 0x400;
    }
    puVar3 = (unsigned int *)FUN_001006c2(temp_v3 * 0x30,0);
    puVar7 = (unsigned int *)param_1[-7];
    puVar4 = puVar3;
    for (puVar5 = (unsigned int *)*piVar10; puVar5 != puVar7; puVar5 = puVar5 + 0xc) {
      if (puVar4 != (unsigned int *)0x0) {
        temp_v5 = puVar5[1];
        temp_v6 = puVar5[2];
        temp_v7 = puVar5[3];
        temp_v8 = puVar5[4];
        temp_v9 = puVar5[5];
        temp_v10 = puVar5[6];
        temp_v11 = puVar5[7];
        *puVar4 = *puVar5;
        puVar4[1] = temp_v5;
        puVar4[2] = temp_v6;
        puVar4[3] = temp_v7;
        puVar4[4] = temp_v8;
        puVar4[5] = temp_v9;
        puVar4[6] = temp_v10;
        puVar4[7] = temp_v11;
        temp_v5 = puVar5[9];
        temp_v6 = puVar5[10];
        temp_v7 = puVar5[0xb];
        puVar4[8] = puVar5[8];
        puVar4[9] = temp_v5;
        puVar4[10] = temp_v6;
        puVar4[0xb] = temp_v7;
      }
      puVar4 = puVar4 + 0xc;
    }
    FUN_001006ec(*piVar10,(param_1[-6] - *piVar10) / 0x30,0);
    temp_v2 = *piVar10;
    *piVar10 = (int)puVar3;
    param_1[-7] = (unsigned int)(puVar3 + ((param_1[-7] - temp_v2) / 0x30) * 0xc);
    param_1[-6] = (unsigned int)(puVar3 + temp_v3 * 0xc);
  }
  temp_v2 = 0;
  do {
    temp_v1 = FUN_0016b034(param_3,temp_v2);
    temp_v4 = temp_v2 + 1;
    *(unsigned char *)((int)piVar10 + temp_v2 + 0x18) = temp_v1;
    temp_v2 = temp_v4;
  } while (temp_v4 < 8);
  return piVar10;
}
