/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00444024` (_code @ 0x444024, 0x33c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_0055b4ec; /* 0x55b4ec */
extern unsigned char DAT_0055b688; /* 0x55b688 */
extern unsigned char DAT_0055bbcc; /* 0x55bbcc */
extern unsigned char DAT_0055bce4; /* 0x55bce4 */

/* Supplied declaration required: nw_gfx_Light_DestroyOriginalValue. */


unsigned int * FUN_00444024(unsigned int *param_1)

{
/* irregular: irregular input(s): in_r12; 5 native warning(s); review required */
  unsigned int *temp_v0;
  unsigned int *temp_v1;
  unsigned int *temp_v2;
  unsigned int *temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int *piVar5;
  int temp_v6;
  int *piVar7;
  unsigned int *puVar8;
  unsigned int *in_r12;
  unsigned int *puVar9;
  
  *param_1 = (unsigned int)&DAT_0055b4ec;
  nw_gfx_Light_DestroyOriginalValue(param_1);
  temp_v6 = param_1[0x5d];
  puVar4 = temp_v0;
  if (temp_v6 != 0) {
    piVar5 = (int *)param_1[0x5e];
    if (*(int *)(temp_v6 + 0xc) != 0 && *(int *)(temp_v6 + 0xc) + temp_v6 + 0xc != 0) {
      (**(romwright_code **)(*piVar5 + 0xc))(piVar5);
    }
    (**(romwright_code **)(*piVar5 + 0xc))(piVar5,temp_v6);
    puVar4 = temp_v1;
  }
  *param_1 = (unsigned int)&DAT_0055bbcc;
  puVar3 = (unsigned int *)param_1[0x5c];
  if (puVar3 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar3)(puVar3);
    (**(romwright_code **)(*(int *)puVar3[1] + 0xc))((int *)puVar3[1],puVar3);
    param_1[0x5c] = 0;
    puVar4 = temp_v2;
  }
  *param_1 = (unsigned int)&DAT_0055b688;
  puVar3 = (unsigned int *)param_1[0x4c];
  if (puVar3 != (unsigned int *)0x0) {
    puVar8 = (unsigned int *)puVar3[3];
    for (puVar4 = (unsigned int *)puVar3[2]; puVar4 != puVar8; puVar4 = puVar4 + 1) {
      piVar5 = (int *)*puVar4;
      piVar7 = (int *)piVar5[1];
      if (piVar7 != (int *)0x0) {
        (**(romwright_code **)(*piVar5 + 4))(piVar5);
        (**(romwright_code **)(*piVar7 + 0xc))(piVar7,piVar5);
      }
    }
    puVar3[3] = puVar3[2];
    if ((int *)puVar3[1] != (int *)0x0 && puVar3[2] != 0) {
      (**(romwright_code **)(*(int *)puVar3[1] + 0xc))();
    }
    (**(romwright_code **)(*(int *)*puVar3 + 0xc))((int *)*puVar3,puVar3);
    param_1[0x4c] = 0;
    puVar4 = temp_v3;
  }
  temp_v6 = param_1[3];
  puVar3 = (unsigned int *)&DAT_0055bce4;
  if (temp_v6 != 0) {
    puVar4 = (unsigned int *)(temp_v6 + 0x18);
  }
  *param_1 = (unsigned int)&DAT_0055bce4;
  if (temp_v6 != 0) {
    puVar3 = (unsigned int *)*puVar4;
    puVar4 = (unsigned int *)puVar4[1];
    while( 1 ) {
      if (puVar3 != puVar4) {
        in_r12 = (unsigned int *)*puVar3;
      }
      if (puVar3 == puVar4 || in_r12 == param_1) break;
      puVar3 = puVar3 + 1;
    }
    if (puVar3 != puVar4) {
      puVar8 = puVar3 + 1;
      temp_v4 = (int)puVar4 - (int)puVar8;
      if (0 < temp_v4 >> 2) {
        puVar4 = puVar3;
        if (temp_v4 * 0x20000000 < 0) {
          puVar9 = (unsigned int *)*puVar8;
          puVar8 = puVar3 + 2;
          if (puVar9 != param_1) {
            puVar4 = puVar3 + 1;
            *puVar3 = (unsigned int)puVar9;
          }
        }
        puVar3 = puVar4;
        for (temp_v4 = temp_v4 >> 3; temp_v4 != 0; temp_v4 = temp_v4 - 1) {
          puVar4 = puVar3;
          if ((unsigned int *)*puVar8 != param_1) {
            puVar4 = puVar3 + 1;
            *puVar3 = (unsigned int)*puVar8;
          }
          puVar9 = puVar8 + 1;
          puVar8 = puVar8 + 2;
          puVar3 = puVar4;
          if ((unsigned int *)*puVar9 != param_1) {
            puVar3 = puVar4 + 1;
            *puVar4 = (unsigned int)*puVar9;
          }
        }
      }
    }
    puVar4 = *(unsigned int **)(temp_v6 + 0x1c);
    *(unsigned int **)(temp_v6 + 0x1c) = puVar3;
    if (puVar4 != puVar3) {
      param_1[3] = 0;
    }
  }
  puVar4 = (unsigned int *)param_1[0xd];
  if (puVar4 != (unsigned int *)0x0) {
    puVar8 = (unsigned int *)puVar4[3];
    for (puVar3 = (unsigned int *)puVar4[2]; puVar3 != puVar8; puVar3 = puVar3 + 1) {
      piVar5 = (int *)*puVar3;
      piVar7 = (int *)piVar5[1];
      if (piVar7 != (int *)0x0) {
        (**(romwright_code **)(*piVar5 + 4))(piVar5);
        (**(romwright_code **)(*piVar7 + 0xc))(piVar7,piVar5);
      }
    }
    puVar4[3] = puVar4[2];
    if ((int *)puVar4[1] != (int *)0x0 && puVar4[2] != 0) {
      (**(romwright_code **)(*(int *)puVar4[1] + 0xc))();
    }
    puVar3 = (unsigned int *)(**(romwright_code **)(*(int *)*puVar4 + 0xc))((int *)*puVar4,puVar4);
    param_1[0xd] = 0;
  }
  puVar4 = (unsigned int *)param_1[10];
  if (puVar4 != (unsigned int *)0x0) {
    puVar3 = (unsigned int *)(unsigned int)*(unsigned char *)(param_1 + 0xb);
  }
  if (puVar4 != (unsigned int *)0x0 && puVar3 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar4)(puVar4);
    (**(romwright_code **)(*(int *)puVar4[1] + 0xc))((int *)puVar4[1],puVar4);
  }
  piVar5 = (int *)param_1[6];
  temp_v4 = 1;
  temp_v6 = (param_1[7] - (int)piVar5) >> 2;
  if (temp_v6 + 1 >= 2) {
    do {
      temp_v5 = *piVar5;
      temp_v4 = temp_v4 + 1;
      piVar5 = piVar5 + 1;
      if (temp_v5 != 0) {
        *(unsigned int *)(temp_v5 + 0xc) = 0;
      }
    } while (temp_v4 < temp_v6 + 1);
  }
  param_1[7] = param_1[6];
  piVar5 = (int *)param_1[5];
  if (piVar5 != (int *)0x0) {
    temp_v4 = param_1[6];
  }
  if (piVar5 != (int *)0x0 && temp_v4 != 0) {
    (**(romwright_code **)(*piVar5 + 0xc))();
  }
  return param_1;
}
