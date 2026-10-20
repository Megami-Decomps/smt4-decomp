/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00366348` (_code @ 0x366348, 0x2a4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_00421238; /* 0x421238 */
extern unsigned char DAT_004218c8; /* 0x4218c8 */


unsigned int * FUN_00366348(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: irregular input(s): in_r12; 1 native warning(s); review required */
  unsigned int *temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar4;
  int *piVar5;
  int *piVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int *in_r12;
  unsigned int *puVar9;
  
  *param_1 = (unsigned int)&DAT_00421238;
  puVar8 = (unsigned int *)param_1[0x4c];
  if (puVar8 != (unsigned int *)0x0) {
    puVar7 = (unsigned int *)puVar8[3];
    for (puVar4 = (unsigned int *)puVar8[2]; puVar4 != puVar7; puVar4 = puVar4 + 1) {
      piVar5 = (int *)*puVar4;
      piVar6 = (int *)piVar5[1];
      if (piVar6 != (int *)0x0) {
        (**(romwright_code **)(*piVar5 + 4))(piVar5);
        (**(romwright_code **)(*piVar6 + 0xc))(piVar6,piVar5);
      }
    }
    puVar8[3] = puVar8[2];
    if ((int *)puVar8[1] != (int *)0x0 && puVar8[2] != 0) {
      (**(romwright_code **)(*(int *)puVar8[1] + 0xc))();
    }
    (**(romwright_code **)(*(int *)*puVar8 + 0xc))((int *)*puVar8,puVar8);
    param_1[0x4c] = 0;
    param_2 = temp_v0;
  }
  temp_v3 = param_1[3];
  puVar8 = (unsigned int *)&DAT_004218c8;
  if (temp_v3 != 0) {
    param_2 = (unsigned int *)(temp_v3 + 0x18);
  }
  *param_1 = (unsigned int)&DAT_004218c8;
  if (temp_v3 != 0) {
    puVar8 = (unsigned int *)*param_2;
    puVar4 = (unsigned int *)param_2[1];
    while( 1 ) {
      if (puVar8 != puVar4) {
        in_r12 = (unsigned int *)*puVar8;
      }
      if (puVar8 == puVar4 || in_r12 == param_1) break;
      puVar8 = puVar8 + 1;
    }
    if (puVar8 != puVar4) {
      puVar7 = puVar8 + 1;
      temp_v1 = (int)puVar4 - (int)puVar7;
      if (0 < temp_v1 >> 2) {
        puVar4 = puVar8;
        if (temp_v1 * 0x20000000 < 0) {
          puVar9 = (unsigned int *)*puVar7;
          puVar7 = puVar8 + 2;
          if (puVar9 != param_1) {
            puVar4 = puVar8 + 1;
            *puVar8 = (unsigned int)puVar9;
          }
        }
        puVar8 = puVar4;
        for (temp_v1 = temp_v1 >> 3; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
          puVar4 = puVar8;
          if ((unsigned int *)*puVar7 != param_1) {
            puVar4 = puVar8 + 1;
            *puVar8 = (unsigned int)*puVar7;
          }
          puVar9 = puVar7 + 1;
          puVar7 = puVar7 + 2;
          puVar8 = puVar4;
          if ((unsigned int *)*puVar9 != param_1) {
            puVar8 = puVar4 + 1;
            *puVar4 = (unsigned int)*puVar9;
          }
        }
      }
    }
    puVar4 = *(unsigned int **)(temp_v3 + 0x1c);
    *(unsigned int **)(temp_v3 + 0x1c) = puVar8;
    if (puVar4 != puVar8) {
      param_1[3] = 0;
    }
  }
  puVar4 = (unsigned int *)param_1[0xd];
  if (puVar4 != (unsigned int *)0x0) {
    puVar7 = (unsigned int *)puVar4[3];
    for (puVar8 = (unsigned int *)puVar4[2]; puVar8 != puVar7; puVar8 = puVar8 + 1) {
      piVar5 = (int *)*puVar8;
      piVar6 = (int *)piVar5[1];
      if (piVar6 != (int *)0x0) {
        (**(romwright_code **)(*piVar5 + 4))(piVar5);
        (**(romwright_code **)(*piVar6 + 0xc))(piVar6,piVar5);
      }
    }
    puVar4[3] = puVar4[2];
    if ((int *)puVar4[1] != (int *)0x0 && puVar4[2] != 0) {
      (**(romwright_code **)(*(int *)puVar4[1] + 0xc))();
    }
    puVar8 = (unsigned int *)(**(romwright_code **)(*(int *)*puVar4 + 0xc))((int *)*puVar4,puVar4);
    param_1[0xd] = 0;
  }
  puVar4 = (unsigned int *)param_1[10];
  if (puVar4 != (unsigned int *)0x0) {
    puVar8 = (unsigned int *)(unsigned int)*(unsigned char *)(param_1 + 0xb);
  }
  if (puVar4 != (unsigned int *)0x0 && puVar8 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar4)(puVar4);
    (**(romwright_code **)(*(int *)puVar4[1] + 0xc))((int *)puVar4[1],puVar4);
  }
  piVar5 = (int *)param_1[6];
  temp_v1 = 1;
  temp_v3 = (param_1[7] - (int)piVar5) >> 2;
  if (temp_v3 + 1 >= 2) {
    do {
      temp_v2 = *piVar5;
      temp_v1 = temp_v1 + 1;
      piVar5 = piVar5 + 1;
      if (temp_v2 != 0) {
        *(unsigned int *)(temp_v2 + 0xc) = 0;
      }
    } while (temp_v1 < temp_v3 + 1);
  }
  param_1[7] = param_1[6];
  piVar5 = (int *)param_1[5];
  if (piVar5 != (int *)0x0) {
    temp_v1 = param_1[6];
  }
  if (piVar5 != (int *)0x0 && temp_v1 != 0) {
    (**(romwright_code **)(*piVar5 + 0xc))();
  }
  return param_1;
}

} /* extern "C" */
