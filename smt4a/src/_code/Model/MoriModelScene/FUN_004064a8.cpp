/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004064a8` (_code @ 0x4064a8, 0x224 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001006ec(int, int, int);
int FUN_00178b04(int, unsigned char *, int);
int setMinus1ReturnPtr(...);
int rt_memcpy_w(int, int, int);

extern unsigned char LAB_004066cc; /* 0x4066cc */

extern int *FUN_001006c2(int, unsigned int);
/* Supplied declaration required: FUN_001006ec. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: setMinus1ReturnPtr. */
/* Supplied declaration required: rt_memcpy_w. */


/* WARNING: Removing unreachable block (ram,0x004065bc) */
/* WARNING: Removing unreachable block (ram,0x004065c8) */

void FUN_004064a8(int param_1,int param_2,int param_3,unsigned int *param_4)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  int *piVar4;
  unsigned int temp_v2;
  int *piVar6;
  int *piVar7;
  unsigned int temp_v3;
  int *piVar9;
  int temp_v4;
  int *piVar11;
  unsigned int temp_v5;
  
  puVar2 = (unsigned char *)0x80;
  FUN_00178b04(0x80,&LAB_004066cc,0xff);
  if (puVar2 == (unsigned char *)0x0) {
    temp_v4 = 0;
  }
  else {
    *puVar2 = 0;
    *(unsigned int *)(puVar2 + 4) = 0;
    temp_v4 = setMinus1ReturnPtr(puVar2 + 0x38);
    temp_v4 = setMinus1ReturnPtr(temp_v4 + 4);
    temp_v4 = setMinus1ReturnPtr(temp_v4 + 4);
    temp_v1 = setMinus1ReturnPtr(temp_v4 + 4);
    temp_v4 = temp_v1 - 0x44;
    *(unsigned int *)(temp_v1 + 0x30) = 0;
    *(unsigned int *)(temp_v1 + 0x34) = 0;
  }
  rt_memcpy_w(temp_v4 + 8,param_3,0x6c);
  *(unsigned char *)temp_v4 = *(char *)(param_3 + 0x29) != '\0';
  *(unsigned char *)(temp_v4 + 1) = 1;
  temp_v2 = param_4[1];
  temp_v3 = param_4[2];
  *(unsigned int *)(temp_v4 + 0x74) = *param_4;
  *(unsigned int *)(temp_v4 + 0x78) = temp_v2;
  *(unsigned int *)(temp_v4 + 0x7c) = temp_v3;
  param_1 = param_1 + param_2 * 0xc;
  piVar9 = (int *)(param_1 + 0x114);
  piVar11 = *(int **)(param_1 + 0x118);
  if (piVar11 == *(int **)(param_1 + 0x11c)) {
    temp_v0 = ((int)piVar11 - *piVar9) >> 2;
    if ((unsigned int)(((int)*(int **)(param_1 + 0x11c) - *piVar9) >> 2) <= temp_v0) {
      temp_v5 = temp_v0 + (temp_v0 >> 1) + (temp_v0 >> 3);
      if (temp_v5 < temp_v0 + 0x20) {
        temp_v5 = temp_v0 + 0x20;
      }
      piVar4 = (int *)FUN_001006c2(temp_v5 << 2,0);
      piVar7 = piVar4;
      for (piVar6 = (int *)*piVar9; piVar6 != piVar11; piVar6 = piVar6 + 1) {
        if (piVar7 != (int *)0x0) {
          *piVar7 = *piVar6;
        }
        piVar7 = piVar7 + 1;
      }
      piVar6 = (int *)((((int)piVar11 - *piVar9) & 0xfffffffcU) + (int)piVar4);
      if (piVar6 != (int *)0x0) {
        *piVar6 = temp_v4;
      }
      piVar7 = *(int **)(param_1 + 0x118);
      piVar6 = (int *)((((int)piVar11 - *piVar9) & 0xfffffffcU) + (int)piVar4);
      for (; piVar11 != piVar7; piVar11 = piVar11 + 1) {
        piVar6 = piVar6 + 1;
        if (piVar6 != (int *)0x0) {
          *piVar6 = *piVar11;
        }
      }
      temp_v4 = *piVar9;
      temp_v1 = *(int *)(param_1 + 0x118);
      FUN_001006ec(temp_v4,(*(int *)(param_1 + 0x11c) - temp_v4) >> 2,0);
      *(int **)(param_1 + 0x11c) = piVar4 + temp_v5;
      *(int **)(param_1 + 0x118) = piVar4 + ((temp_v1 - temp_v4) >> 2) + 1;
      *piVar9 = (int)piVar4;
      return;
    }
    *(int **)(param_1 + 0x118) = piVar11 + 1;
    if (piVar11 != (int *)0x0) {
      *piVar11 = piVar11[-1];
    }
    *piVar11 = temp_v4;
    return;
  }
  *(int **)(param_1 + 0x118) = piVar11 + 1;
  if (piVar11 != (int *)0x0) {
    *piVar11 = temp_v4;
  }
  return;
}

} /* extern "C" */
