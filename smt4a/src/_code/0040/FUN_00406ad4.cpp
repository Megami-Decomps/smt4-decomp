/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00406ad4` (_code @ 0x406ad4, 0x390 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001006c2(...);
int FUN_001006ec(int, int, int);
int FUN_002e32a4(int, unsigned char *, unsigned char *, unsigned int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned char LAB_00406e64; /* 0x406e64 */

/* Supplied declaration required: FUN_001006c2. */
/* Supplied declaration required: FUN_001006ec. */
/* Supplied declaration required: FUN_002e32a4. */


void FUN_00406ad4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar6;
  int temp_v3;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int temp_v4;
  int *piVar11;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  temp_v4 = *(unsigned int *)(param_1 + 0x104);
  if (temp_v4 >= 0x20000000) {
    param_4 = 0x1fffffff;
    FUN_002e32a4(8,&LAB_00406e64,&LAB_00406e64,temp_v4,0x1fffffff);
  }
  if ((unsigned int)((*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x108)) >> 3) < temp_v4) {
    temp_v6 = (*(int *)(param_1 + 0x10c) - *(int *)(param_1 + 0x108)) >> 3;
    temp_v5 = temp_v6 + (temp_v6 >> 1) + (temp_v6 >> 3);
    if (temp_v5 < temp_v6 + 0x20) {
      temp_v5 = temp_v6 + 0x20;
    }
    if (temp_v5 <= temp_v4) {
      temp_v5 = temp_v4;
    }
    puVar1 = (unsigned int *)FUN_001006c2(temp_v5 << 3,0);
    puVar9 = *(unsigned int **)(param_1 + 0x10c);
    puVar8 = puVar1;
    for (puVar6 = *(unsigned int **)(param_1 + 0x108); puVar6 != puVar9; puVar6 = puVar6 + 2) {
      if (puVar8 != (unsigned int *)0x0) {
        temp_v8 = puVar6[1];
        *puVar8 = *puVar6;
        puVar8[1] = temp_v8;
      }
      puVar8 = puVar8 + 2;
    }
    FUN_001006ec(*(int *)(param_1 + 0x108),
                 (*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x108)) >> 3,0);
    temp_v3 = *(int *)(param_1 + 0x108);
    *(unsigned int **)(param_1 + 0x108) = puVar1;
    *(unsigned int *)(param_1 + 0x10c) = ((*(int *)(param_1 + 0x10c) - temp_v3) & 0xfffffff8U) + (int)puVar1;
    *(unsigned int **)(param_1 + 0x110) = puVar1 + temp_v5 * 2;
  }
  temp_v3 = 0;
  temp_v4 = *(unsigned int *)(param_1 + 0x104);
  if (0 < (int)temp_v4) {
    do {
      temp_v4 = temp_v4 & 0xffffff00;
      puVar6 = *(unsigned int **)(param_1 + 0x10c);
      piVar11 = (int *)(param_1 + 0x108);
      if (puVar6 != *(unsigned int **)(param_1 + 0x110)) {
        *(unsigned int **)(param_1 + 0x10c) = puVar6 + 2;
        if (puVar6 != (unsigned int *)0x0) {
          *puVar6 = 0x808080ff;
          puVar6[1] = temp_v4;
        }
      }
      else {
        temp_v6 = ((int)*(unsigned int **)(param_1 + 0x110) - *piVar11) >> 3;
        temp_v5 = ((int)puVar6 - *piVar11) >> 3;
        if (temp_v5 < temp_v6) {
          *(unsigned int **)(param_1 + 0x10c) = puVar6 + 2;
          if (puVar6 != (unsigned int *)0x0) {
            *puVar6 = puVar6[-2];
            puVar6[1] = puVar6[-1];
          }
          puVar8 = puVar6 + -2;
          temp_v0 = (int)puVar8 - (int)puVar6;
          if (0 < temp_v0 >> 3) {
            puVar1 = puVar6;
            if (temp_v0 * 0x10000000 < 0) {
              puVar8 = puVar6 + -4;
              puVar1 = puVar6 + -2;
              *puVar1 = *puVar8;
              puVar6[-1] = puVar6[-3];
            }
            for (temp_v0 = temp_v0 >> 4; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
              temp_v8 = puVar8[-1];
              puVar1[-2] = puVar8[-2];
              puVar1[-1] = temp_v8;
              temp_v8 = puVar8[-3];
              puVar1[-4] = puVar8[-4];
              puVar1[-3] = temp_v8;
              puVar1 = puVar1 + -4;
              puVar8 = puVar8 + -4;
            }
          }
          *puVar6 = 0x808080ff;
          puVar6[1] = temp_v4;
        }
        else {
          temp_v7 = temp_v5 + (temp_v5 >> 1) + (temp_v5 >> 3);
          if (temp_v7 < temp_v5 + 0x20) {
            temp_v7 = temp_v5 + 0x20;
          }
          puVar9 = (unsigned int *)FUN_001006c2(temp_v7 << 3,0,temp_v6,temp_v4,param_4);
          puVar1 = puVar9;
          for (puVar8 = (unsigned int *)*piVar11; puVar8 != puVar6; puVar8 = puVar8 + 2) {
            if (puVar1 != (unsigned int *)0x0) {
              temp_v8 = puVar8[1];
              *puVar1 = *puVar8;
              puVar1[1] = temp_v8;
            }
            puVar1 = puVar1 + 2;
          }
          puVar8 = (unsigned int *)((((int)puVar6 - *piVar11) & 0xfffffff8U) + (int)puVar9);
          if (puVar8 != (unsigned int *)0x0) {
            *puVar8 = 0x808080ff;
            puVar8[1] = temp_v4;
          }
          puVar1 = *(unsigned int **)(param_1 + 0x10c);
          puVar8 = (unsigned int *)((((int)puVar6 - *piVar11) & 0xfffffff8U) + (int)puVar9);
          for (; puVar6 != puVar1; puVar6 = puVar6 + 2) {
            puVar2 = puVar8 + 2;
            if (puVar2 != (unsigned int *)0x0) {
              temp_v8 = puVar6[1];
              *puVar2 = *puVar6;
              puVar8[3] = temp_v8;
            }
            puVar8 = puVar2;
          }
          temp_v0 = *piVar11;
          temp_v2 = *(int *)(param_1 + 0x10c);
          FUN_001006ec(temp_v0,(*(int *)(param_1 + 0x110) - temp_v0) >> 3,0);
          *(unsigned int **)(param_1 + 0x110) = puVar9 + temp_v7 * 2;
          *(unsigned int **)(param_1 + 0x10c) = puVar9 + ((temp_v2 - temp_v0) >> 3) * 2 + 2;
          *piVar11 = (int)puVar9;
        }
      }
      temp_v0 = param_1 + temp_v3 * 0xc;
      piVar11 = (int *)(temp_v0 + 0x114);
      if ((unsigned int)((*(int *)(temp_v0 + 0x11c) - *(int *)(temp_v0 + 0x114)) >> 2) < 8) {
        temp_v4 = (*(int *)(temp_v0 + 0x118) - *(int *)(temp_v0 + 0x114)) >> 2;
        temp_v5 = temp_v4 + (temp_v4 >> 1) + (temp_v4 >> 3);
        temp_v6 = temp_v4 + 0x20;
        if (temp_v4 + 0x20 <= temp_v5) {
          temp_v6 = temp_v5;
        }
        if (temp_v6 < 9) {
          temp_v6 = 8;
        }
        puVar1 = (unsigned int *)FUN_001006c2(temp_v6 << 2,0);
        puVar9 = *(unsigned int **)(temp_v0 + 0x118);
        puVar8 = puVar1;
        for (puVar6 = (unsigned int *)*piVar11; puVar6 != puVar9; puVar6 = puVar6 + 1) {
          if (puVar8 != (unsigned int *)0x0) {
            *puVar8 = *puVar6;
          }
          puVar8 = puVar8 + 1;
        }
        temp_v1 = *piVar11;
        for (temp_v2 = temp_v1; temp_v2 != *(int *)(temp_v0 + 0x118); temp_v2 = temp_v2 + 4) {
        }
        FUN_001006ec(temp_v1,(*(int *)(temp_v0 + 0x11c) - temp_v1) >> 2,0);
        temp_v2 = *piVar11;
        *piVar11 = (int)puVar1;
        *(unsigned int *)(temp_v0 + 0x118) = ((*(int *)(temp_v0 + 0x118) - temp_v2) & 0xfffffffcU) + (int)puVar1;
        *(unsigned int **)(temp_v0 + 0x11c) = puVar1 + temp_v6;
      }
      temp_v4 = *(unsigned int *)(param_1 + 0x104);
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < (int)temp_v4);
  }
  return;
}

} /* extern "C" */
