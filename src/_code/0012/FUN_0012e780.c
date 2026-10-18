/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012e780` (_code @ 0x12e780, 0x3cc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_004217ec; /* 0x4217ec */
extern unsigned int DAT_00476634; /* 0x476634 */
extern unsigned int DAT_004efd6c; /* 0x4efd6c */
extern unsigned int DAT_004efd70; /* 0x4efd70 */
extern unsigned int DAT_004efd74; /* 0x4efd74 */
extern unsigned int DAT_004efd78; /* 0x4efd78 */
extern unsigned int DAT_004efd7c; /* 0x4efd7c */
extern unsigned int DAT_004efd80; /* 0x4efd80 */
extern unsigned int DAT_004efd84; /* 0x4efd84 */
extern unsigned int DAT_004efd88; /* 0x4efd88 */
extern unsigned int DAT_004efd8c; /* 0x4efd8c */
extern unsigned int DAT_004efd90; /* 0x4efd90 */
extern unsigned int DAT_004efd94; /* 0x4efd94 */
extern unsigned int DAT_004efd98; /* 0x4efd98 */

/* Supplied declaration required: FUN_002af370. */
extern int *FUN_002b52b4(int, int *, unsigned int *, int);
/* Supplied declaration required: FUN_002bfedc. */
extern int FUN_002bfefc(unsigned int *);


int * FUN_0012e780(int param_1,unsigned int *param_2,int param_3,int *param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned char temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar8;
  unsigned int temp_v4;
  unsigned int *puVar10;
  int *piVar11;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  if ((param_2 == (unsigned int *)0x0) || ((~*param_2 & 0x40000012) != 0)) {
    param_2 = (unsigned int *)0x0;
  }
  temp_v1 = (**(romwright_code **)(*param_4 + 8))(param_4,0x220,4);
  if (temp_v1 == 0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = (int *)FUN_002b52b4(temp_v1,param_4,param_2,param_3);
    temp_v6 = 0x3f800000;
    *piVar11 = (int)&DAT_004217ec;
    piVar11[0x52] = 0;
    piVar11[0x53] = 0;
    piVar11[0x54] = 0;
    piVar11[0x55] = 0;
    piVar11[0x56] = 0;
    piVar11[0x57] = 0;
    piVar11[0x58] = 0;
    piVar11[0x59] = 0;
    piVar11[0x5a] = 0;
    temp_v5 = 0;
    piVar11[0x5b] = 0;
    piVar11[0x5c] = 0;
    piVar11[0x5d] = 0;
    piVar11[0x5e] = 0;
    piVar11[0x5f] = 0;
    piVar11[0x60] = 0;
    piVar11[0x61] = 0;
    piVar11[0x62] = *(int *)(param_3 + 0x10);
    if (((DAT_00476634 & 1) == 0) && (temp_v1 = FUN_002bfefc(&DAT_00476634), temp_v1 != 0)) {
      DAT_004efd6c = temp_v6;
      DAT_004efd70 = temp_v5;
      DAT_004efd74 = temp_v5;
      DAT_004efd78 = temp_v5;
      DAT_004efd7c = temp_v5;
      DAT_004efd80 = temp_v6;
      DAT_004efd84 = temp_v5;
      DAT_004efd88 = temp_v5;
      DAT_004efd8c = temp_v5;
      DAT_004efd90 = temp_v5;
      DAT_004efd94 = temp_v6;
      DAT_004efd98 = temp_v5;
    }
    FUN_002bfedc(piVar11 + 99,&DAT_004efd6c);
    if (((DAT_00476634 & 1) == 0) && (temp_v1 = FUN_002bfefc(&DAT_00476634), temp_v1 != 0)) {
      DAT_004efd6c = temp_v6;
      DAT_004efd70 = temp_v5;
      DAT_004efd74 = temp_v5;
      DAT_004efd78 = temp_v5;
      DAT_004efd7c = temp_v5;
      DAT_004efd80 = temp_v6;
      DAT_004efd84 = temp_v5;
      DAT_004efd88 = temp_v5;
      DAT_004efd8c = temp_v5;
      DAT_004efd90 = temp_v5;
      DAT_004efd94 = temp_v6;
      DAT_004efd98 = temp_v5;
    }
    FUN_002bfedc(piVar11 + 0x6f,&DAT_004efd6c);
    piVar11[0x7b] = 0;
    *(unsigned char *)(piVar11 + 0x7c) = 1;
    *(unsigned char *)(piVar11 + 0x7d) = 0;
    *(unsigned char *)((int)piVar11 + 0x1f5) = 1;
    *(unsigned char *)((int)piVar11 + 0x1f6) = 1;
    temp_v2 = 0;
    if (*(int *)(param_3 + 0x18) != 0) {
      temp_v2 = 2;
    }
    *(unsigned char *)((int)piVar11 + 0x1f7) = (*(int *)(param_3 + 0x14) != 0) | temp_v2;
    piVar11[0x7e] = 0;
    piVar11[0x7f] = 0;
    piVar11[0x80] = 0;
    piVar11[0x81] = 0;
    piVar11[0x82] = 0;
    piVar11[0x83] = 0;
    piVar11[0x84] = 0;
    piVar11[0x85] = 0;
    piVar11[0x86] = param_3;
    piVar11[0x87] = 0;
    *(unsigned char *)((int)piVar11 + 0x1f6) = (char)param_2[0x35] != '\0';
  }
  (**(romwright_code **)(*piVar11 + 0x24))(piVar11,param_4);
  if (param_1 == 0) {
    return piVar11;
  }
  piVar3 = *(int **)(param_1 + 0xc);
  if (piVar3 != (int *)0x0) {
    if (piVar3 == piVar11) {
      return piVar11;
    }
    FUN_002af370();
    if (piVar3 != (int *)0x0) {
      return piVar11;
    }
  }
  if (piVar11[3] != 0) {
    return piVar11;
  }
  temp_v4 = *(unsigned int *)(param_1 + 0x20);
  temp_v3 = temp_v4 & 0x3fffffff;
  if ((int)temp_v3 <= (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2) {
    if (temp_v3 != 0) {
      temp_v3 = temp_v3 << 1;
    }
    else {
      temp_v3 = 1;
    }
    if ((temp_v4 & 0x3fffffff) < temp_v3) {
      if ((*(int *)(param_1 + 0x14) == 0) || ((temp_v4 & 0xc0000000) != 0x40000000)) {
        temp_v0 = 0;
        if (temp_v0) {
          piVar11[3] = *(int *)(param_1 + 0x10);
        }
        return piVar11;
      }
      puVar4 = (unsigned int *)
               (**(romwright_code **)(**(int **)(param_1 + 0x14) + 8))
                         (*(int **)(param_1 + 0x14),temp_v3 << 2,0x20);
      temp_v1 = 0;
      puVar5 = *(unsigned int **)(param_1 + 0x18);
      puVar10 = *(unsigned int **)(param_1 + 0x1c);
      puVar8 = puVar4;
      if (puVar5 != puVar10) {
        do {
          if (puVar8 != (unsigned int *)0x0) {
            *puVar8 = *puVar5;
          }
          puVar5 = puVar5 + 1;
          puVar8 = puVar8 + 1;
        } while (puVar5 != puVar10);
        temp_v1 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) >> 2;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        (**(romwright_code **)(**(int **)(param_1 + 0x14) + 0xc))();
      }
      *(unsigned int **)(param_1 + 0x1c) = puVar4 + temp_v1;
      *(unsigned int **)(param_1 + 0x18) = puVar4;
      *(unsigned int *)(param_1 + 0x20) = (*(unsigned int *)(param_1 + 0x20) & 0xc0000000) | temp_v3;
    }
  }
  temp_v0 = 1;
  if (*(unsigned int **)(param_1 + 0x1c) != (unsigned int *)0x0) {
    **(unsigned int **)(param_1 + 0x1c) = (unsigned int)piVar11;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 4;
  if (temp_v0) {
    piVar11[3] = *(int *)(param_1 + 0x10);
  }
  return piVar11;
}
