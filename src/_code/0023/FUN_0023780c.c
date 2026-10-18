/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023780c` (_code @ 0x23780c, 0x250 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_00236958. */
extern unsigned int *FUN_00237738(int, int, unsigned int *, int *);


int FUN_0023780c(unsigned int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int *piVar3;
  unsigned int *puVar4;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  temp_v3 = 0;
  if (param_1[10] == 0) {
    return 0;
  }
  temp_v1 = *(int *)(param_1[2] + 0x2c);
  if (temp_v1 == 0) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = (int)(param_1[2] + 0x2c) + temp_v1;
  }
  if (temp_v1 == 0) {
    temp_v4 = 0;
  }
  else {
    temp_v4 = *(int *)(temp_v1 + 0x28);
    if (temp_v4 != 0) {
      temp_v4 = temp_v4 + temp_v1 + 0x28;
    }
    else {
      temp_v4 = 0;
    }
  }
  temp_v1 = (**(romwright_code **)(*param_2 + 8))(param_2,0x68,4);
  if (temp_v1 != 0) {
    puVar1 = (unsigned int *)FUN_00237738(temp_v1,temp_v4,param_1,param_2);
    puVar2 = puVar1;
    FUN_00236958(puVar1,1);
    if ((int)puVar2 >= 0) {
      if (puVar1 == (unsigned int *)0x0) {
        temp_v3 = -0x80000000;
      }
    }
    else {
      if (puVar1 != (unsigned int *)0x0) {
        (**(romwright_code **)*puVar1)(puVar1);
        (**(romwright_code **)(*(int *)puVar1[1] + 0xc))((int *)puVar1[1],puVar1);
      }
      puVar1 = (unsigned int *)0x0;
      temp_v3 = -0x80000000;
    }
  }
  else {
    puVar1 = (unsigned int *)0x0;
    temp_v3 = -0x80000000;
  }
  if (temp_v3 == 0) {
    param_1[0x5c] = (unsigned int)puVar1;
    temp_v1 = 0;
    temp_v4 = *(int *)(puVar1[2] + 0x10);
    if (0 < temp_v4) {
      do {
        piVar3 = (int *)(*(int *)(param_1[0x5c] + 8) + 0x14);
        temp_v0 = *piVar3;
        if (temp_v0 != 0) {
          temp_v0 = (int)piVar3 + temp_v0;
        }
        else {
          temp_v0 = 0;
        }
        if (temp_v0 == 0) {
          temp_v0 = 0;
        }
        else {
          piVar3 = (int *)(temp_v0 + temp_v1 * 0x10 + 0x28);
          temp_v0 = *piVar3;
          if (temp_v0 != 0) {
            temp_v0 = temp_v0 + (int)piVar3;
          }
          else {
            temp_v0 = 0;
          }
        }
        puVar4 = param_1;
        switch(*(unsigned int *)(temp_v0 + 0x10)) {
        case 9:
          break;
        default:
          puVar4 = (unsigned int *)0x0;
          break;
        case 0xc:
          puVar4 = (unsigned int *)param_1[2];
          if ((puVar4 != (unsigned int *)0x0) && ((~*puVar4 & 0x40000002) != 0)) {
            puVar4 = (unsigned int *)0x0;
          }
          break;
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
          puVar4 = (unsigned int *)param_1[2];
        }
        *(unsigned int **)(*(int *)(param_1[0x5c] + 0x34) + temp_v1 * 4) = puVar4;
        temp_v2 = *(int *)(temp_v0 + 0x10);
        temp_v5 = temp_v2 == 9;
        if (temp_v5) {
          temp_v2 = *(int *)(temp_v0 + 0x14);
        }
        if (!(temp_v5 && temp_v2 == 0)) {
          *(int *)(*(int *)(param_1[0x5c] + 0x44) + temp_v1 * 4) = (int)puVar4 + *(int *)(temp_v0 + 8);
        }
        else {
          *(unsigned int **)(*(int *)(param_1[0x5c] + 0x44) + temp_v1 * 4) = param_1 + 0x13;
        }
        *(unsigned int *)(*(int *)(param_1[0x5c] + 0x24) + temp_v1 * 4) = 0;
        if (*(int *)(temp_v0 + 0x10) != 9) {
          *(unsigned int *)(*(int *)(param_1[0x5c] + 0x54) + temp_v1 * 4) =
               param_1[0x52] + *(int *)(temp_v0 + 8);
        }
        else {
          *(unsigned int **)(*(int *)(param_1[0x5c] + 0x54) + temp_v1 * 4) = param_1 + 0x53;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < temp_v4);
    }
    **(unsigned int **)(param_1[10] + 0xc) = param_1[0x5c];
  }
  return temp_v3;
}
