/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003705a4` (_code @ 0x3705a4, 0x2e0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_00420e80; /* 0x420e80 */
extern unsigned char DAT_004213f8; /* 0x4213f8 */
extern unsigned char DAT_00421510; /* 0x421510 */


unsigned int * FUN_003705a4(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: irregular input(s): in_r12; 2 native warning(s); review required */
  unsigned int *temp_v0;
  unsigned int *temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int *piVar6;
  int *piVar7;
  unsigned int *puVar8;
  unsigned int *in_r12;
  unsigned int *puVar9;
  
  *param_1 = (unsigned int)&DAT_004213f8;
  puVar4 = (unsigned int *)param_1[0x5c];
  if (puVar4 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar4)(puVar4);
    (**(romwright_code **)(*(int *)puVar4[1] + 0xc))((int *)puVar4[1],puVar4);
    param_1[0x5c] = 0;
    param_2 = temp_v0;
  }
  *param_1 = (unsigned int)&DAT_00420e80;
  puVar4 = (unsigned int *)param_1[0x4c];
  if (puVar4 != (unsigned int *)0x0) {
    puVar8 = (unsigned int *)puVar4[3];
    for (puVar5 = (unsigned int *)puVar4[2]; puVar5 != puVar8; puVar5 = puVar5 + 1) {
      piVar6 = (int *)*puVar5;
      piVar7 = (int *)piVar6[1];
      if (piVar7 != (int *)0x0) {
        (**(romwright_code **)(*piVar6 + 4))(piVar6);
        (**(romwright_code **)(*piVar7 + 0xc))(piVar7,piVar6);
      }
    }
    puVar4[3] = puVar4[2];
    if ((int *)puVar4[1] != (int *)0x0 && puVar4[2] != 0) {
      (**(romwright_code **)(*(int *)puVar4[1] + 0xc))();
    }
    (**(romwright_code **)(*(int *)*puVar4 + 0xc))((int *)*puVar4,puVar4);
    param_1[0x4c] = 0;
    param_2 = temp_v1;
  }
  temp_v3 = param_1[3];
  puVar4 = (unsigned int *)&DAT_00421510;
  if (temp_v3 != 0) {
    param_2 = (unsigned int *)(temp_v3 + 0x18);
  }
  *param_1 = (unsigned int)&DAT_00421510;
  if (temp_v3 != 0) {
    puVar4 = (unsigned int *)*param_2;
    puVar5 = (unsigned int *)param_2[1];
    while( 1 ) {
      if (puVar4 != puVar5) {
        in_r12 = (unsigned int *)*puVar4;
      }
      if (puVar4 == puVar5 || in_r12 == param_1) break;
      puVar4 = puVar4 + 1;
    }
    if (puVar4 != puVar5) {
      puVar8 = puVar4 + 1;
      temp_v2 = (int)puVar5 - (int)puVar8;
      if (0 < temp_v2 >> 2) {
        puVar5 = puVar4;
        if (temp_v2 * 0x20000000 < 0) {
          puVar9 = (unsigned int *)*puVar8;
          puVar8 = puVar4 + 2;
          if (puVar9 != param_1) {
            puVar5 = puVar4 + 1;
            *puVar4 = (unsigned int)puVar9;
          }
        }
        puVar4 = puVar5;
        for (temp_v2 = temp_v2 >> 3; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
          puVar5 = puVar4;
          if ((unsigned int *)*puVar8 != param_1) {
            puVar5 = puVar4 + 1;
            *puVar4 = (unsigned int)*puVar8;
          }
          puVar9 = puVar8 + 1;
          puVar8 = puVar8 + 2;
          puVar4 = puVar5;
          if ((unsigned int *)*puVar9 != param_1) {
            puVar4 = puVar5 + 1;
            *puVar5 = (unsigned int)*puVar9;
          }
        }
      }
    }
    puVar5 = *(unsigned int **)(temp_v3 + 0x1c);
    *(unsigned int **)(temp_v3 + 0x1c) = puVar4;
    if (puVar5 != puVar4) {
      param_1[3] = 0;
    }
  }
  puVar5 = (unsigned int *)param_1[0xd];
  if (puVar5 != (unsigned int *)0x0) {
    puVar8 = (unsigned int *)puVar5[3];
    for (puVar4 = (unsigned int *)puVar5[2]; puVar4 != puVar8; puVar4 = puVar4 + 1) {
      piVar6 = (int *)*puVar4;
      piVar7 = (int *)piVar6[1];
      if (piVar7 != (int *)0x0) {
        (**(romwright_code **)(*piVar6 + 4))(piVar6);
        (**(romwright_code **)(*piVar7 + 0xc))(piVar7,piVar6);
      }
    }
    puVar5[3] = puVar5[2];
    if ((int *)puVar5[1] != (int *)0x0 && puVar5[2] != 0) {
      (**(romwright_code **)(*(int *)puVar5[1] + 0xc))();
    }
    puVar4 = (unsigned int *)(**(romwright_code **)(*(int *)*puVar5 + 0xc))((int *)*puVar5,puVar5);
    param_1[0xd] = 0;
  }
  puVar5 = (unsigned int *)param_1[10];
  if (puVar5 != (unsigned int *)0x0) {
    puVar4 = (unsigned int)(uint)*(unsigned int)(param_1 + 0xb);
  }
  if (puVar5 != (unsigned int *)0x0 && puVar4 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar5)(puVar5);
    (**(romwright_code **)(*(int *)puVar5[1] + 0xc))((int *)puVar5[1],puVar5);
  }
  piVar6 = (int *)param_1[6];
  temp_v2 = 1;
  temp_v3 = (param_1[7] - (int)piVar6) >> 2;
  if (temp_v3 + 1 >= 2) {
    do {
      temp_v4 = *piVar6;
      temp_v2 = temp_v2 + 1;
      piVar6 = piVar6 + 1;
      if (temp_v4 != 0) {
        *(unsigned int *)(temp_v4 + 0xc) = 0;
      }
    } while (temp_v2 < temp_v3 + 1);
  }
  param_1[7] = param_1[6];
  piVar6 = (int *)param_1[5];
  if (piVar6 != (int *)0x0) {
    temp_v2 = param_1[6];
  }
  if (piVar6 != (int *)0x0 && temp_v2 != 0) {
    (**(romwright_code **)(*piVar6 + 0xc))();
  }
  return param_1;
}
