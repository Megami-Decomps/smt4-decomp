/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036e488` (_code @ 0x36e488, 0x334 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_gfx_Fog_DestroyResFog(unsigned int);

typedef int romwright_code(...);
extern unsigned char DAT_00421238; /* 0x421238 */
extern unsigned char DAT_0042177c; /* 0x42177c */
extern unsigned char DAT_004218c8; /* 0x4218c8 */

/* Supplied declaration required: nw_gfx_Fog_DestroyResFog. */


unsigned int * FUN_0036e488(unsigned int *param_1)

{
/* irregular: irregular input(s): in_r12; 3 native warning(s); review required */
  unsigned int *temp_v0;
  unsigned int *temp_v1;
  unsigned int *puVar1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar5;
  int *piVar6;
  int *piVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int *in_r12;
  
  *param_1 = (unsigned int)&DAT_0042177c;
  puVar5 = (unsigned int *)param_1[0x59];
  if (puVar5 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar5)(puVar5);
    (**(romwright_code **)(*(int *)puVar5[1] + 0xc))((int *)puVar5[1],puVar5);
    param_1[0x59] = 0;
  }
  if (param_1[0x5a] != 0) {
    (**(romwright_code **)(*(int *)param_1[1] + 0xc))();
    param_1[0x5a] = 0;
  }
  if (param_1[0x54] != 0) {
    (**(romwright_code **)(*(int *)param_1[0x55] + 0xc))();
  }
  puVar5 = (unsigned int *)0x0;
  if (param_1[0x52] != 0) {
    nw_gfx_Fog_DestroyResFog(param_1[0x53]);
    puVar5 = temp_v0;
  }
  *param_1 = (unsigned int)&DAT_00421238;
  puVar9 = (unsigned int *)param_1[0x4c];
  if (puVar9 != (unsigned int *)0x0) {
    puVar8 = (unsigned int *)puVar9[3];
    for (puVar5 = (unsigned int *)puVar9[2]; puVar5 != puVar8; puVar5 = puVar5 + 1) {
      piVar6 = (int *)*puVar5;
      piVar7 = (int *)piVar6[1];
      if (piVar7 != (int *)0x0) {
        (**(romwright_code **)(*piVar6 + 4))(piVar6);
        (**(romwright_code **)(*piVar7 + 0xc))(piVar7,piVar6);
      }
    }
    puVar9[3] = puVar9[2];
    if ((int *)puVar9[1] != (int *)0x0 && puVar9[2] != 0) {
      (**(romwright_code **)(*(int *)puVar9[1] + 0xc))();
    }
    (**(romwright_code **)(*(int *)*puVar9 + 0xc))((int *)*puVar9,puVar9);
    param_1[0x4c] = 0;
    puVar5 = temp_v1;
  }
  temp_v3 = param_1[3];
  puVar9 = (unsigned int *)&DAT_004218c8;
  if (temp_v3 != 0) {
    puVar5 = (unsigned int *)(temp_v3 + 0x18);
  }
  *param_1 = (unsigned int)&DAT_004218c8;
  if (temp_v3 != 0) {
    puVar9 = (unsigned int *)*puVar5;
    puVar5 = (unsigned int *)puVar5[1];
    while( 1 ) {
      if (puVar9 != puVar5) {
        in_r12 = (unsigned int *)*puVar9;
      }
      if (puVar9 == puVar5 || in_r12 == param_1) break;
      puVar9 = puVar9 + 1;
    }
    if (puVar9 != puVar5) {
      puVar8 = puVar9 + 1;
      temp_v4 = (int)puVar5 - (int)puVar8;
      if (0 < temp_v4 >> 2) {
        puVar5 = puVar9;
        if (temp_v4 * 0x20000000 < 0) {
          puVar1 = (unsigned int *)*puVar8;
          puVar8 = puVar9 + 2;
          if (puVar1 != param_1) {
            puVar5 = puVar9 + 1;
            *puVar9 = (unsigned int)puVar1;
          }
        }
        puVar9 = puVar5;
        for (temp_v4 = temp_v4 >> 3; temp_v4 != 0; temp_v4 = temp_v4 - 1) {
          puVar5 = puVar9;
          if ((unsigned int *)*puVar8 != param_1) {
            puVar5 = puVar9 + 1;
            *puVar9 = (unsigned int)*puVar8;
          }
          puVar1 = puVar8 + 1;
          puVar8 = puVar8 + 2;
          puVar9 = puVar5;
          if ((unsigned int *)*puVar1 != param_1) {
            puVar9 = puVar5 + 1;
            *puVar5 = (unsigned int)*puVar1;
          }
        }
      }
    }
    puVar5 = *(unsigned int **)(temp_v3 + 0x1c);
    *(unsigned int **)(temp_v3 + 0x1c) = puVar9;
    if (puVar5 != puVar9) {
      param_1[3] = 0;
    }
  }
  puVar5 = (unsigned int *)param_1[0xd];
  if (puVar5 != (unsigned int *)0x0) {
    puVar8 = (unsigned int *)puVar5[3];
    for (puVar9 = (unsigned int *)puVar5[2]; puVar9 != puVar8; puVar9 = puVar9 + 1) {
      piVar6 = (int *)*puVar9;
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
    puVar9 = (unsigned int *)(**(romwright_code **)(*(int *)*puVar5 + 0xc))((int *)*puVar5,puVar5);
    param_1[0xd] = 0;
  }
  puVar5 = (unsigned int *)param_1[10];
  if (puVar5 != (unsigned int *)0x0) {
    puVar9 = (unsigned int *)(unsigned int)*(unsigned char *)(param_1 + 0xb);
  }
  if (puVar5 != (unsigned int *)0x0 && puVar9 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar5)(puVar5);
    (**(romwright_code **)(*(int *)puVar5[1] + 0xc))((int *)puVar5[1],puVar5);
  }
  piVar6 = (int *)param_1[6];
  temp_v4 = 1;
  temp_v3 = (param_1[7] - (int)piVar6) >> 2;
  if (temp_v3 + 1 >= 2) {
    do {
      temp_v2 = *piVar6;
      temp_v4 = temp_v4 + 1;
      piVar6 = piVar6 + 1;
      if (temp_v2 != 0) {
        *(unsigned int *)(temp_v2 + 0xc) = 0;
      }
    } while (temp_v4 < temp_v3 + 1);
  }
  param_1[7] = param_1[6];
  piVar6 = (int *)param_1[5];
  if (piVar6 != (int *)0x0) {
    temp_v4 = param_1[6];
  }
  if (piVar6 != (int *)0x0 && temp_v4 != 0) {
    (**(romwright_code **)(*piVar6 + 0xc))();
  }
  return param_1;
}

} /* extern "C" */
