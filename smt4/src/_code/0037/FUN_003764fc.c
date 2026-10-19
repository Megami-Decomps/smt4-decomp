/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003764fc` (_code @ 0x3764fc, 0x204 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_004218c8; /* 0x4218c8 */


unsigned int * FUN_003764fc(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: irregular input(s): in_r12 */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar6;
  int *piVar7;
  unsigned int *puVar8;
  unsigned int *in_r12;
  unsigned int *puVar9;
  
  temp_v2 = param_1[3];
  puVar1 = (unsigned int *)&DAT_004218c8;
  if (temp_v2 != 0) {
    param_2 = (unsigned int *)(temp_v2 + 0x18);
  }
  *param_1 = (unsigned int)&DAT_004218c8;
  if (temp_v2 != 0) {
    puVar1 = (unsigned int *)*param_2;
    puVar2 = (unsigned int *)param_2[1];
    while( 1 ) {
      if (puVar1 != puVar2) {
        in_r12 = (unsigned int *)*puVar1;
      }
      if (puVar1 == puVar2 || in_r12 == param_1) break;
      puVar1 = puVar1 + 1;
    }
    if (puVar1 != puVar2) {
      puVar8 = puVar1 + 1;
      temp_v0 = (int)puVar2 - (int)puVar8;
      if (0 < temp_v0 >> 2) {
        puVar2 = puVar1;
        if (temp_v0 * 0x20000000 < 0) {
          puVar9 = (unsigned int *)*puVar8;
          puVar8 = puVar1 + 2;
          if (puVar9 != param_1) {
            puVar2 = puVar1 + 1;
            *puVar1 = (unsigned int)puVar9;
          }
        }
        puVar1 = puVar2;
        for (temp_v0 = temp_v0 >> 3; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
          puVar2 = puVar1;
          if ((unsigned int *)*puVar8 != param_1) {
            puVar2 = puVar1 + 1;
            *puVar1 = (unsigned int)*puVar8;
          }
          puVar9 = puVar8 + 1;
          puVar8 = puVar8 + 2;
          puVar1 = puVar2;
          if ((unsigned int *)*puVar9 != param_1) {
            puVar1 = puVar2 + 1;
            *puVar2 = (unsigned int)*puVar9;
          }
        }
      }
    }
    puVar2 = *(unsigned int **)(temp_v2 + 0x1c);
    *(unsigned int **)(temp_v2 + 0x1c) = puVar1;
    if (puVar2 != puVar1) {
      param_1[3] = 0;
    }
  }
  puVar2 = (unsigned int *)param_1[0xd];
  if (puVar2 != (unsigned int *)0x0) {
    puVar8 = (unsigned int *)puVar2[3];
    for (puVar1 = (unsigned int *)puVar2[2]; puVar1 != puVar8; puVar1 = puVar1 + 1) {
      piVar6 = (int *)*puVar1;
      piVar7 = (int *)piVar6[1];
      if (piVar7 != (int *)0x0) {
        (**(romwright_code **)(*piVar6 + 4))(piVar6);
        (**(romwright_code **)(*piVar7 + 0xc))(piVar7,piVar6);
      }
    }
    puVar2[3] = puVar2[2];
    if ((int *)puVar2[1] != (int *)0x0 && puVar2[2] != 0) {
      (**(romwright_code **)(*(int *)puVar2[1] + 0xc))();
    }
    puVar1 = (unsigned int *)(**(romwright_code **)(*(int *)*puVar2 + 0xc))((int *)*puVar2,puVar2);
    param_1[0xd] = 0;
  }
  puVar2 = (unsigned int *)param_1[10];
  if (puVar2 != (unsigned int *)0x0) {
    puVar1 = (unsigned int *)(unsigned int)*(unsigned char *)(param_1 + 0xb);
  }
  if (puVar2 != (unsigned int *)0x0 && puVar1 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar2)(puVar2);
    (**(romwright_code **)(*(int *)puVar2[1] + 0xc))((int *)puVar2[1],puVar2);
  }
  piVar6 = (int *)param_1[6];
  temp_v0 = 1;
  temp_v2 = (param_1[7] - (int)piVar6) >> 2;
  if (temp_v2 + 1 >= 2) {
    do {
      temp_v1 = *piVar6;
      temp_v0 = temp_v0 + 1;
      piVar6 = piVar6 + 1;
      if (temp_v1 != 0) {
        *(unsigned int *)(temp_v1 + 0xc) = 0;
      }
    } while (temp_v0 < temp_v2 + 1);
  }
  param_1[7] = param_1[6];
  piVar6 = (int *)param_1[5];
  if (piVar6 != (int *)0x0) {
    temp_v0 = param_1[6];
  }
  if (piVar6 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar6 + 0xc))();
  }
  return param_1;
}
