/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012acdc` (_code @ 0x12acdc, 0x210 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_00420ca8; /* 0x420ca8 */

/* Supplied declaration required: FUN_002af604. */
extern int *FUN_002b5498(int, int *, unsigned int *, unsigned int);


int * FUN_0012acdc(int param_1,unsigned int *param_2,unsigned int param_3,int *param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int temp_v2;
  unsigned int *puVar8;
  unsigned int temp_v3;
  int *piVar10;
  
  if ((param_2 == (unsigned int *)0x0) || ((~*param_2 & 0x40000222) != 0)) {
    param_2 = (unsigned int *)0x0;
  }
  temp_v1 = (**(romwright_code **)(*param_4 + 8))(param_4,0x188,4);
  if (temp_v1 == 0) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = (int *)FUN_002b5498(temp_v1,param_4,param_2,param_3);
    piVar10[0x52] = 0;
    *piVar10 = (int)&DAT_00420ca8;
    piVar10[0x5c] = 0;
    piVar10[0x5d] = 0;
    piVar10[0x5e] = 0;
    temp_v2 = param_2[0x38];
    temp_v3 = param_2[0x39];
    piVar10[0x5f] = param_2[0x37];
    piVar10[0x60] = temp_v2;
    piVar10[0x61] = temp_v3;
  }
  (**(romwright_code **)(*piVar10 + 0x24))(piVar10,param_4);
  if (param_1 == 0) {
    return piVar10;
  }
  piVar3 = *(int **)(param_1 + 0xc);
  if (piVar3 != (int *)0x0) {
    if (piVar3 == piVar10) {
      return piVar10;
    }
    FUN_002af604();
    if (piVar3 != (int *)0x0) {
      return piVar10;
    }
  }
  if (piVar10[3] != 0) {
    return piVar10;
  }
  temp_v3 = *(unsigned int *)(param_1 + 0x20);
  temp_v2 = temp_v3 & 0x3fffffff;
  if ((int)temp_v2 <= (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2) {
    if (temp_v2 != 0) {
      temp_v2 = temp_v2 << 1;
    }
    else {
      temp_v2 = 1;
    }
    if ((temp_v3 & 0x3fffffff) < temp_v2) {
      if ((*(int *)(param_1 + 0x14) == 0) || ((temp_v3 & 0xc0000000) != 0x40000000)) {
        temp_v0 = 0;
        if (temp_v0) {
          piVar10[3] = *(int *)(param_1 + 0x10);
        }
        return piVar10;
      }
      puVar4 = (unsigned int *)
               (**(romwright_code **)(**(int **)(param_1 + 0x14) + 8))
                         (*(int **)(param_1 + 0x14),temp_v2 << 2,0x20);
      temp_v1 = 0;
      puVar5 = *(unsigned int **)(param_1 + 0x18);
      puVar8 = *(unsigned int **)(param_1 + 0x1c);
      puVar6 = puVar4;
      if (puVar5 != puVar8) {
        do {
          if (puVar6 != (unsigned int *)0x0) {
            *puVar6 = *puVar5;
          }
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        } while (puVar5 != puVar8);
        temp_v1 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0xc))();
      }
      *(unsigned int **)(param_1 + 0x1c) = puVar4 + temp_v1;
      *(unsigned int **)(param_1 + 0x18) = puVar4;
      *(unsigned int *)(param_1 + 0x20) = (*(unsigned int *)(param_1 + 0x20) & 0xc0000000) | temp_v2;
    }
  }
  temp_v0 = 1;
  if (*(unsigned int **)(param_1 + 0x1c) != (unsigned int *)0x0) {
    **(unsigned int **)(param_1 + 0x1c) = (unsigned int)piVar10;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
  if (temp_v0) {
    piVar10[3] = *(int *)(param_1 + 0x10);
  }
  return piVar10;
}
