/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b66cc` (_code @ 0x1b66cc, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern unsigned int *DAT_005b40e0; /* 0x5b40e0 */

/* Supplied declaration required: FUN_001bc730. */
/* Supplied declaration required: FUN_001bc768. */


void FUN_001b66cc(int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar8;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  
  temp_v5 = *(int *)(*(int *)(param_1 + 8) + 8);
  temp_v7 = (unsigned int)(*(int *)(param_3 + 8) != 2);
  temp_v0 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x14);
  if (temp_v7 != 1) {
    temp_v0 = temp_v0 | 2;
  }
  else {
    temp_v0 = temp_v0 & 0xfffffffd;
  }
  *(unsigned int *)(temp_v5 + 0x14) = temp_v0;
  if (temp_v7 != 0) {
    temp_v0 = temp_v0 | 4;
  }
  else {
    temp_v0 = temp_v0 & 0xfffffffb;
  }
  *(unsigned int *)(temp_v5 + 0x14) = temp_v0;
  piVar8 = *(int **)(param_2 + 0x220);
  temp_v8 = piVar8[2];
  temp_v5 = (**(romwright_code **)(*piVar8 + 0x1c))(piVar8);
  temp_v1 = (**(romwright_code **)(*piVar8 + 0x24))(piVar8);
  temp_v6 = 0;
  if (temp_v6 < param_4) {
    do {
      puVar1 = DAT_005b40e0;
      temp_v3 = *(int *)(temp_v8 + 0x1c);
      if (*(int *)(param_3 + 4) != 0) {
        temp_v2 = param_3 + 4 + *(int *)(param_3 + 4);
      }
      else {
        temp_v2 = 0;
      }
      temp_v2 = *(int *)(temp_v2 + temp_v6 * 4);
      if (temp_v3 != 0) {
        temp_v3 = temp_v8 + 0x1c + temp_v3;
      }
      else {
        temp_v3 = 0;
      }
      temp_v4 = 0;
      if (temp_v3 != 0) {
        piVar8 = (int *)(temp_v3 + temp_v2 * 0x10 + 0x28);
        temp_v4 = *piVar8;
        if (temp_v4 == 0) {
          temp_v4 = 0;
        }
        else {
          temp_v4 = (int)piVar8 + temp_v4;
        }
      }
      temp_v3 = temp_v5;
      if ((((*(unsigned int *)(temp_v4 + 4) & 0x200) >> 9) & ~temp_v7) != 0) {
        temp_v3 = temp_v1;
      }
      temp_v3 = *(int *)(temp_v3 + 4);
      if (temp_v6 != 0) {
        FUN_001bc730(DAT_005b40e0);
        DAT_005b40e0 = DAT_005b40e0 + 0xc;
      }
      else {
        *DAT_005b40e0 = 0x80000019;
        puVar1[1] = 0xf02c0;
        FUN_001bc768(puVar1 + 2,temp_v3 + temp_v2 * 0x30,(param_4 * 0xc00000 - 0x100000U) | 0xf02c1);
        DAT_005b40e0 = DAT_005b40e0 + 0xf;
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < param_4);
  }
  DAT_005b40e0 = DAT_005b40e0 + 1;
  return;
}
