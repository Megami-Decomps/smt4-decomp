/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00367dfc` (_code @ 0x367dfc, 0x2f0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_00421238; /* 0x421238 */
extern unsigned char DAT_00421348; /* 0x421348 */
extern unsigned char DAT_004218c8; /* 0x4218c8 */
extern unsigned char DAT_00422058; /* 0x422058 */


unsigned int * FUN_00367dfc(unsigned int *param_1)

{
/* irregular: irregular input(s): in_r12; 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  int *piVar5;
  int *piVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int *in_r12;
  int temp_v3;
  
  *param_1 = (unsigned int)&DAT_00421348;
  if (param_1[0x60] != 0) {
    (**(romwright_code **)(*(int *)param_1[1] + 0xc))();
  }
  if (param_1[0x61] != 0) {
    (**(romwright_code **)(*(int *)param_1[1] + 0xc))();
  }
  puVar1 = (unsigned int *)&DAT_00422058;
  param_1[0x57] = (unsigned int)&DAT_00422058;
  *param_1 = (unsigned int)&DAT_00421238;
  puVar8 = (unsigned int *)param_1[0x4c];
  if (puVar8 != (unsigned int *)0x0) {
    puVar7 = (unsigned int *)puVar8[3];
    for (puVar1 = (unsigned int *)puVar8[2]; puVar1 != puVar7; puVar1 = puVar1 + 1) {
      piVar5 = (int *)*puVar1;
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
    puVar1 = temp_v0;
  }
  temp_v1 = param_1[3];
  puVar8 = (unsigned int *)&DAT_004218c8;
  if (temp_v1 != 0) {
    puVar1 = (unsigned int *)(temp_v1 + 0x18);
  }
  *param_1 = (unsigned int)&DAT_004218c8;
  if (temp_v1 != 0) {
    puVar8 = (unsigned int *)*puVar1;
    puVar1 = (unsigned int *)puVar1[1];
    while( 1 ) {
      if (puVar8 != puVar1) {
        in_r12 = (unsigned int *)*puVar8;
      }
      if (puVar8 == puVar1 || in_r12 == param_1) break;
      puVar8 = puVar8 + 1;
    }
    if (puVar8 != puVar1) {
      puVar7 = puVar8 + 1;
      temp_v3 = (int)puVar1 - (int)puVar7;
      if (0 < temp_v3 >> 2) {
        puVar1 = puVar8;
        if (temp_v3 * 0x20000000 < 0) {
          puVar2 = (unsigned int *)*puVar7;
          puVar7 = puVar8 + 2;
          if (puVar2 != param_1) {
            puVar1 = puVar8 + 1;
            *puVar8 = (unsigned int)puVar2;
          }
        }
        puVar8 = puVar1;
        for (temp_v3 = temp_v3 >> 3; temp_v3 != 0; temp_v3 = temp_v3 - 1) {
          puVar1 = puVar8;
          if ((unsigned int *)*puVar7 != param_1) {
            puVar1 = puVar8 + 1;
            *puVar8 = (unsigned int)*puVar7;
          }
          puVar2 = puVar7 + 1;
          puVar7 = puVar7 + 2;
          puVar8 = puVar1;
          if ((unsigned int *)*puVar2 != param_1) {
            puVar8 = puVar1 + 1;
            *puVar1 = (unsigned int)*puVar2;
          }
        }
      }
    }
    puVar1 = *(unsigned int **)(temp_v1 + 0x1c);
    *(unsigned int **)(temp_v1 + 0x1c) = puVar8;
    if (puVar1 != puVar8) {
      param_1[3] = 0;
    }
  }
  puVar1 = (unsigned int *)param_1[0xd];
  if (puVar1 != (unsigned int *)0x0) {
    puVar7 = (unsigned int *)puVar1[3];
    for (puVar8 = (unsigned int *)puVar1[2]; puVar8 != puVar7; puVar8 = puVar8 + 1) {
      piVar5 = (int *)*puVar8;
      piVar6 = (int *)piVar5[1];
      if (piVar6 != (int *)0x0) {
        (**(romwright_code **)(*piVar5 + 4))(piVar5);
        (**(romwright_code **)(*piVar6 + 0xc))(piVar6,piVar5);
      }
    }
    puVar1[3] = puVar1[2];
    if ((int *)puVar1[1] != (int *)0x0 && puVar1[2] != 0) {
      (**(romwright_code **)(*(int *)puVar1[1] + 0xc))();
    }
    puVar8 = (unsigned int *)(**(romwright_code **)(*(int *)*puVar1 + 0xc))((int *)*puVar1,puVar1);
    param_1[0xd] = 0;
  }
  puVar1 = (unsigned int *)param_1[10];
  if (puVar1 != (unsigned int *)0x0) {
    puVar8 = (unsigned int *)(unsigned int)*(unsigned char *)(param_1 + 0xb);
  }
  if (puVar1 != (unsigned int *)0x0 && puVar8 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar1)(puVar1);
    (**(romwright_code **)(*(int *)puVar1[1] + 0xc))((int *)puVar1[1],puVar1);
  }
  piVar5 = (int *)param_1[6];
  temp_v3 = 1;
  temp_v1 = (param_1[7] - (int)piVar5) >> 2;
  if (temp_v1 + 1 >= 2) {
    do {
      temp_v2 = *piVar5;
      temp_v3 = temp_v3 + 1;
      piVar5 = piVar5 + 1;
      if (temp_v2 != 0) {
        *(unsigned int *)(temp_v2 + 0xc) = 0;
      }
    } while (temp_v3 < temp_v1 + 1);
  }
  param_1[7] = param_1[6];
  piVar5 = (int *)param_1[5];
  if (piVar5 != (int *)0x0) {
    temp_v3 = param_1[6];
  }
  if (piVar5 != (int *)0x0 && temp_v3 != 0) {
    (**(romwright_code **)(*piVar5 + 0xc))();
  }
  return param_1;
}
