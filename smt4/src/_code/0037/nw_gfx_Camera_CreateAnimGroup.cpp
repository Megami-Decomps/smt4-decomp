/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_Camera_CreateAnimGroup` (_code @ 0x3724a4, 0x284 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002367c0(unsigned int *, int);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_002367c0. */
extern unsigned int *_ZN9Obj4218b0C1Ejjj(int, int, int, int *);


int nw_gfx_Camera_CreateAnimGroup(int param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  
  temp_v6 = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  piVar1 = (int *)(*(int *)(param_1 + 8) + 0x2c);
  temp_v4 = *piVar1;
  if (temp_v4 == 0) {
    temp_v4 = 0;
  }
  else {
    temp_v4 = (int)piVar1 + temp_v4;
  }
  if (temp_v4 == 0) {
    temp_v5 = 0;
  }
  else {
    temp_v5 = *(int *)(temp_v4 + 0x28);
    if (temp_v5 != 0) {
      temp_v5 = temp_v5 + temp_v4 + 0x28;
    }
    else {
      temp_v5 = 0;
    }
  }
  temp_v4 = (**(romwright_code **)(*param_2 + 8))(param_2,0x68,4);
  if (temp_v4 != 0) {
    puVar2 = (unsigned int *)_ZN9Obj4218b0C1Ejjj(temp_v4,temp_v5,param_1,param_2);
    puVar3 = puVar2;
    FUN_002367c0(puVar2,1);
    if ((int)puVar3 >= 0) {
      if (puVar2 == (unsigned int *)0x0) {
        temp_v6 = -0x80000000;
      }
    }
    else {
      if (puVar2 != (unsigned int *)0x0) {
        (**(romwright_code **)*puVar2)(puVar2);
        (**(romwright_code **)(*(int *)puVar2[1] + 0xc))((int *)puVar2[1],puVar2);
      }
      puVar2 = (unsigned int *)0x0;
      temp_v6 = -0x80000000;
    }
  }
  else {
    puVar2 = (unsigned int *)0x0;
    temp_v6 = -0x80000000;
  }
  if (temp_v6 == 0) {
    *(unsigned int **)(param_1 + 0x268) = puVar2;
    temp_v4 = 0;
    temp_v5 = *(int *)(puVar2[2] + 0x10);
    if (0 < temp_v5) {
      do {
        piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x268) + 8) + 0x14);
        temp_v3 = *piVar1;
        if (temp_v3 != 0) {
          temp_v3 = (int)piVar1 + temp_v3;
        }
        else {
          temp_v3 = 0;
        }
        if (temp_v3 == 0) {
          temp_v3 = 0;
        }
        else {
          piVar1 = (int *)(temp_v3 + temp_v4 * 0x10 + 0x28);
          temp_v3 = *piVar1;
          if (temp_v3 != 0) {
            temp_v3 = temp_v3 + (int)piVar1;
          }
          else {
            temp_v3 = 0;
          }
        }
        temp_v2 = *(int *)(temp_v3 + 0x10);
        temp_v0 = param_1;
        if (temp_v2 != 9) {
          if (temp_v2 != 10) {
            if (temp_v2 != 0xb) {
              temp_v0 = 0;
            }
            else {
              temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 0x260) + 0x10))();
            }
          }
          else {
            temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 600) + 0x10))();
          }
        }
        *(int *)(*(int *)(*(int *)(param_1 + 0x268) + 0x34) + temp_v4 * 4) = temp_v0;
        temp_v2 = *(int *)(temp_v3 + 0x10);
        temp_v7 = temp_v2 == 9;
        if (temp_v7) {
          temp_v2 = *(int *)(temp_v3 + 0x14);
        }
        if (!(temp_v7 && temp_v2 == 0)) {
          *(int *)(*(int *)(*(int *)(param_1 + 0x268) + 0x44) + temp_v4 * 4) =
               temp_v0 + *(int *)(temp_v3 + 8);
        }
        else {
          *(int *)(*(int *)(*(int *)(param_1 + 0x268) + 0x44) + temp_v4 * 4) = param_1 + 0x4c;
        }
        temp_v0 = 0;
        *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x268) + 0x24) + temp_v4 * 4) = 0;
        temp_v2 = *(int *)(temp_v3 + 0x10);
        if (temp_v2 != 9) {
          temp_v1 = 0;
          if (temp_v2 != 10) {
            if (temp_v2 == 0xb) {
              piVar1 = (int *)(*(int *)(param_1 + 0x26c) + 0xc0);
              temp_v0 = *piVar1;
              if (temp_v0 != 0) {
                temp_v1 = (int)piVar1 + temp_v0;
              }
              temp_v0 = temp_v1 + *(int *)(temp_v3 + 8);
            }
          }
          else {
            piVar1 = (int *)(*(int *)(param_1 + 0x26c) + 0xbc);
            temp_v0 = *piVar1;
            if (temp_v0 != 0) {
              temp_v1 = temp_v0 + (int)piVar1;
            }
            temp_v0 = temp_v1 + *(int *)(temp_v3 + 8);
          }
        }
        else if (*(int *)(temp_v3 + 0x14) == 0) {
          temp_v0 = param_1 + 0x270;
        }
        *(int *)(*(int *)(*(int *)(param_1 + 0x268) + 0x54) + temp_v4 * 4) = temp_v0;
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < temp_v5);
    }
    **(unsigned int **)(*(int *)(param_1 + 0x28) + 0xc) = *(unsigned int *)(param_1 + 0x268);
  }
  return temp_v6;
}

} /* extern "C" */
