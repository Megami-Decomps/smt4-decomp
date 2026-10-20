/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146a84` (_code @ 0x146a84, 0x138 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


void FUN_00146a84(int param_1,int param_2)

{
  unsigned int *puVar1;
  int temp_v0;
  unsigned short *puVar3;
  int temp_v1;
  unsigned short *puVar5;
  unsigned short *puVar6;
  unsigned short *puVar7;
  int *piVar8;
  unsigned short *puVar9;
  
  piVar8 = (int *)(param_1 + 0x24);
  puVar9 = (unsigned short *)(*(int *)(param_2 - 0xc) + param_2);
  puVar7 = (unsigned short *)((param_2 - 0x10) - ((*(unsigned short *)(param_2 - 0xe) & 0x7fff) >> 8));
  temp_v0 = *(int *)(param_2 - 8);
  temp_v1 = *(int *)(param_2 - 4);
  if (temp_v0 != 0) {
    *(int *)(temp_v0 + 0xc) = temp_v1;
  }
  else {
    *(int *)(param_1 + 0x2c) = temp_v1;
  }
  if (temp_v1 != 0) {
    *(int *)(temp_v1 + 8) = temp_v0;
  }
  else {
    *(int *)(param_1 + 0x30) = temp_v0;
  }
  puVar6 = (unsigned short *)0x0;
  puVar3 = (unsigned short *)0x0;
  puVar5 = (unsigned short *)*piVar8;
  if ((unsigned short *)*piVar8 != (unsigned short *)0x0) {
    do {
      if (puVar7 <= puVar5) {
        if (puVar9 == puVar5) {
          puVar9 = (unsigned short *)((int)puVar5 + *(int *)(puVar5 + 2) + 0x10);
          temp_v1 = *(int *)(puVar5 + 4);
          temp_v0 = *(int *)(puVar5 + 6);
          if (temp_v1 != 0) {
            *(int *)(temp_v1 + 0xc) = temp_v0;
          }
          else {
            *piVar8 = temp_v0;
          }
          if (temp_v0 != 0) {
            *(int *)(temp_v0 + 8) = temp_v1;
          }
          else {
            *(int *)(param_1 + 0x28) = temp_v1;
          }
        }
        break;
      }
      puVar1 = (unsigned int *)(puVar5 + 6);
      puVar3 = puVar5;
      puVar5 = (unsigned short *)*puVar1;
    } while ((unsigned short *)*puVar1 != (unsigned short *)0x0);
    puVar6 = puVar3;
    if ((puVar3 != (unsigned short *)0x0) &&
       ((unsigned short *)((int)puVar3 + *(int *)(puVar3 + 2) + 0x10) == puVar7)) {
      puVar6 = *(unsigned short **)(puVar3 + 4);
      temp_v0 = *(int *)(puVar3 + 6);
      if (puVar6 != (unsigned short *)0x0) {
        *(int *)(puVar6 + 6) = temp_v0;
      }
      else {
        *piVar8 = temp_v0;
      }
      puVar7 = puVar3;
      if (temp_v0 != 0) {
        *(unsigned short **)(temp_v0 + 8) = puVar6;
      }
      else {
        *(unsigned short **)(param_1 + 0x28) = puVar6;
      }
    }
  }
  if ((unsigned int)((int)puVar9 - (int)puVar7) >= 0x10) {
    *puVar7 = 0x4652;
    puVar7[1] = 0;
    *(unsigned int *)(puVar7 + 2) = ((int)puVar9 - (int)puVar7) - 0x10;
    *(unsigned short **)(puVar7 + 4) = puVar6;
    *(unsigned int *)(puVar7 + 6) = 0;
    if (puVar6 != (unsigned short *)0x0) {
      temp_v0 = *(int *)(puVar6 + 6);
      *(unsigned short **)(puVar6 + 6) = puVar7;
    }
    else {
      temp_v0 = *piVar8;
      *piVar8 = (int)puVar7;
    }
    *(int *)(puVar7 + 6) = temp_v0;
    if (temp_v0 != 0) {
      *(unsigned short **)(temp_v0 + 8) = puVar7;
    }
    else {
      *(unsigned short **)(param_1 + 0x28) = puVar7;
    }
  }
  return;
}

} /* extern "C" */
