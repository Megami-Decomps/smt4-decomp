/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00364610` (_code @ 0x364610, 0x6d0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_0042119c; /* 0x42119c */
extern unsigned char DAT_00421238; /* 0x421238 */
extern unsigned char DAT_004217ec; /* 0x4217ec */
extern unsigned char DAT_004218c8; /* 0x4218c8 */
extern unsigned char DAT_00422058; /* 0x422058 */

/* Supplied declaration required: nw_gfx_Model_DestroyResMeshes. */


unsigned int *
FUN_00364610(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_r12; 4 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  unsigned char *puVar3;
  unsigned char *temp_v1;
  unsigned int temp_v2;
  unsigned int *temp_v3;
  unsigned int *temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  int *piVar11;
  unsigned int *puVar12;
  unsigned int *in_r12;
  unsigned int *puVar13;
  
  temp_v8 = 0;
  *param_1 = (unsigned int)&DAT_0042119c;
  if (0 < (int)(param_1[0x91] - param_1[0x90]) >> 2) {
    do {
      puVar9 = (unsigned int *)(param_1[0x90] + temp_v8 * 4);
      puVar10 = (unsigned int *)*puVar9;
      if (puVar10 != (unsigned int *)0x0) {
        (**(romwright_code **)*puVar10)(puVar10);
        (**(romwright_code **)(*(int *)puVar10[1] + 0xc))((int *)puVar10[1],puVar10);
        *puVar9 = 0;
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < (int)(param_1[0x91] - param_1[0x90]) >> 2);
  }
  puVar3 = &DAT_00422058;
  param_1[0x93] = (unsigned int)&DAT_00422058;
  param_1[0x91] = param_1[0x90];
  piVar1 = (int *)param_1[0x8f];
  if (piVar1 != (int *)0x0) {
    puVar3 = (unsigned char *)param_1[0x90];
  }
  if (piVar1 != (int *)0x0 && puVar3 != (unsigned char *)0x0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
    puVar3 = temp_v1;
  }
  param_1[0x8c] = param_1[0x8b];
  piVar1 = (int *)param_1[0x8a];
  if (piVar1 != (int *)0x0) {
    puVar3 = (unsigned char *)param_1[0x8b];
  }
  if (piVar1 != (int *)0x0 && puVar3 != (unsigned char *)0x0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
  }
  *param_1 = (unsigned int)&DAT_004217ec;
  if ((~*(unsigned char *)((int)param_1 + 0x1f7) & 2) == 0) {
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = param_1[0x61] & 0xc0000000;
  }
  nw_gfx_Model_DestroyResMeshes(param_1,param_1[1],param_1[0x5c],param_1[0x5d],param_4);
  puVar9 = (unsigned int *)param_1[0x56];
  if (puVar9 != (unsigned int *)0x0) {
    puVar12 = (unsigned int *)puVar9[3];
    for (puVar10 = (unsigned int *)puVar9[2]; puVar10 != puVar12; puVar10 = puVar10 + 1) {
      piVar1 = (int *)*puVar10;
      piVar11 = (int *)piVar1[1];
      if (piVar11 != (int *)0x0) {
        (**(romwright_code **)(*piVar1 + 4))(piVar1);
        (**(romwright_code **)(*piVar11 + 0xc))(piVar11,piVar1);
      }
    }
    puVar9[3] = puVar9[2];
    if ((int *)puVar9[1] != (int *)0x0 && puVar9[2] != 0) {
      (**(romwright_code **)(*(int *)puVar9[1] + 0xc))();
    }
    (**(romwright_code **)(*(int *)*puVar9 + 0xc))((int *)*puVar9,puVar9);
    param_1[0x56] = 0;
  }
  puVar9 = (unsigned int *)param_1[0x57];
  if (puVar9 != (unsigned int *)0x0) {
    puVar12 = (unsigned int *)puVar9[3];
    for (puVar10 = (unsigned int *)puVar9[2]; puVar10 != puVar12; puVar10 = puVar10 + 1) {
      piVar1 = (int *)*puVar10;
      piVar11 = (int *)piVar1[1];
      if (piVar11 != (int *)0x0) {
        (**(romwright_code **)(*piVar1 + 4))(piVar1);
        (**(romwright_code **)(*piVar11 + 0xc))(piVar11,piVar1);
      }
    }
    puVar9[3] = puVar9[2];
    if ((int *)puVar9[1] != (int *)0x0 && puVar9[2] != 0) {
      (**(romwright_code **)(*(int *)puVar9[1] + 0xc))();
    }
    (**(romwright_code **)(*(int *)*puVar9 + 0xc))((int *)*puVar9,puVar9);
    param_1[0x57] = 0;
  }
  if ((~*(unsigned char *)((int)param_1 + 0x1f7) & 1) != 0) {
    puVar10 = (unsigned int *)param_1[0x5a];
    for (puVar9 = (unsigned int *)param_1[0x59]; puVar9 != puVar10; puVar9 = puVar9 + 1) {
      puVar12 = (unsigned int *)*puVar9;
      if (puVar12 != (unsigned int *)0x0) {
        (**(romwright_code **)*puVar12)(puVar12);
        (**(romwright_code **)(*(int *)puVar12[1] + 0xc))((int *)puVar12[1],puVar12);
        *puVar9 = 0;
      }
    }
    param_1[0x5a] = param_1[0x59];
  }
  puVar9 = (unsigned int *)param_1[0x52];
  if (puVar9 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar9)(puVar9);
    (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
    param_1[0x52] = 0;
  }
  puVar9 = (unsigned int *)param_1[0x54];
  if (puVar9 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar9)(puVar9);
    (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
    param_1[0x54] = 0;
  }
  piVar1 = (int *)param_1[0x82];
  temp_v8 = param_1[0x83];
  param_1[0x84] = temp_v8;
  if (piVar1 != (int *)0x0) {
    temp_v8 = param_1[0x83];
  }
  if (piVar1 != (int *)0x0 && temp_v8 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
  }
  piVar1 = (int *)param_1[0x7e];
  temp_v8 = param_1[0x7f];
  param_1[0x80] = temp_v8;
  if (piVar1 != (int *)0x0) {
    temp_v8 = param_1[0x7f];
  }
  if (piVar1 != (int *)0x0 && temp_v8 != 0) {
    piVar1 = (int *)(**(romwright_code **)(*piVar1 + 0xc))();
  }
  puVar9 = (unsigned int *)param_1[0x7b];
  if (puVar9 != (unsigned int *)0x0) {
    piVar1 = (int *)(unsigned int)*(unsigned char *)(param_1 + 0x7c);
  }
  if (puVar9 != (unsigned int *)0x0 && piVar1 != (int *)0x0) {
    (**(romwright_code **)*puVar9)(puVar9);
    piVar1 = (int *)(**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
  }
  temp_v2 = param_1[0x5f];
  temp_v5 = param_1[0x60];
  if (temp_v2 < temp_v5) {
    piVar1 = (int *)(temp_v5 - temp_v2);
  }
  if (temp_v2 < temp_v5) {
    piVar1 = (int *)((int)piVar1 << 0x1c);
  }
  if (temp_v2 < temp_v5) {
    temp_v0 = (unsigned int)piVar1 >> 0x1f;
  }
  else {
    temp_v0 = 0;
  }
  temp_v8 = temp_v0 + 1;
  if (temp_v8 < ((int)(temp_v5 - temp_v2) >> 3) + 1) {
    do {
      temp_v8 = temp_v8 + 2;
    } while (temp_v8 < ((int)(temp_v5 - temp_v2) >> 3) + 1);
  }
  param_1[0x60] = temp_v2;
  if ((int *)param_1[0x5e] != (int *)0x0 && temp_v2 != 0) {
    (**(romwright_code **)(*(int *)param_1[0x5e] + 0xc))();
  }
  piVar1 = (int *)param_1[0x58];
  puVar9 = (unsigned int *)param_1[0x59];
  param_1[0x5a] = (unsigned int)puVar9;
  if (piVar1 != (int *)0x0) {
    puVar9 = (unsigned int *)param_1[0x59];
  }
  if (piVar1 != (int *)0x0 && puVar9 != (unsigned int *)0x0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
    puVar9 = temp_v3;
  }
  *param_1 = (unsigned int)&DAT_00421238;
  puVar10 = (unsigned int *)param_1[0x4c];
  if (puVar10 != (unsigned int *)0x0) {
    puVar12 = (unsigned int *)puVar10[3];
    for (puVar9 = (unsigned int *)puVar10[2]; puVar9 != puVar12; puVar9 = puVar9 + 1) {
      piVar1 = (int *)*puVar9;
      piVar11 = (int *)piVar1[1];
      if (piVar11 != (int *)0x0) {
        (**(romwright_code **)(*piVar1 + 4))(piVar1);
        (**(romwright_code **)(*piVar11 + 0xc))(piVar11,piVar1);
      }
    }
    puVar10[3] = puVar10[2];
    if ((int *)puVar10[1] != (int *)0x0 && puVar10[2] != 0) {
      (**(romwright_code **)(*(int *)puVar10[1] + 0xc))();
    }
    (**(romwright_code **)(*(int *)*puVar10 + 0xc))((int *)*puVar10,puVar10);
    param_1[0x4c] = 0;
    puVar9 = temp_v4;
  }
  temp_v8 = param_1[3];
  puVar10 = (unsigned int *)&DAT_004218c8;
  if (temp_v8 != 0) {
    puVar9 = (unsigned int *)(temp_v8 + 0x18);
  }
  *param_1 = (unsigned int)&DAT_004218c8;
  if (temp_v8 != 0) {
    puVar10 = (unsigned int *)*puVar9;
    puVar9 = (unsigned int *)puVar9[1];
    while( 1 ) {
      if (puVar10 != puVar9) {
        in_r12 = (unsigned int *)*puVar10;
      }
      if (puVar10 == puVar9 || in_r12 == param_1) break;
      puVar10 = puVar10 + 1;
    }
    if (puVar10 != puVar9) {
      puVar12 = puVar10 + 1;
      temp_v6 = (int)puVar9 - (int)puVar12;
      if (0 < temp_v6 >> 2) {
        puVar9 = puVar10;
        if (temp_v6 * 0x20000000 < 0) {
          puVar13 = (unsigned int *)*puVar12;
          puVar12 = puVar10 + 2;
          if (puVar13 != param_1) {
            puVar9 = puVar10 + 1;
            *puVar10 = (unsigned int)puVar13;
          }
        }
        puVar10 = puVar9;
        for (temp_v6 = temp_v6 >> 3; temp_v6 != 0; temp_v6 = temp_v6 - 1) {
          puVar9 = puVar10;
          if ((unsigned int *)*puVar12 != param_1) {
            puVar9 = puVar10 + 1;
            *puVar10 = (unsigned int)*puVar12;
          }
          puVar13 = puVar12 + 1;
          puVar12 = puVar12 + 2;
          puVar10 = puVar9;
          if ((unsigned int *)*puVar13 != param_1) {
            puVar10 = puVar9 + 1;
            *puVar9 = (unsigned int)*puVar13;
          }
        }
      }
    }
    puVar9 = *(unsigned int **)(temp_v8 + 0x1c);
    *(unsigned int **)(temp_v8 + 0x1c) = puVar10;
    if (puVar9 != puVar10) {
      param_1[3] = 0;
    }
  }
  puVar9 = (unsigned int *)param_1[0xd];
  if (puVar9 != (unsigned int *)0x0) {
    puVar12 = (unsigned int *)puVar9[3];
    for (puVar10 = (unsigned int *)puVar9[2]; puVar10 != puVar12; puVar10 = puVar10 + 1) {
      piVar1 = (int *)*puVar10;
      piVar11 = (int *)piVar1[1];
      if (piVar11 != (int *)0x0) {
        (**(romwright_code **)(*piVar1 + 4))(piVar1);
        (**(romwright_code **)(*piVar11 + 0xc))(piVar11,piVar1);
      }
    }
    puVar9[3] = puVar9[2];
    if ((int *)puVar9[1] != (int *)0x0 && puVar9[2] != 0) {
      (**(romwright_code **)(*(int *)puVar9[1] + 0xc))();
    }
    puVar10 = (unsigned int *)(**(romwright_code **)(*(int *)*puVar9 + 0xc))((int *)*puVar9,puVar9);
    param_1[0xd] = 0;
  }
  puVar9 = (unsigned int *)param_1[10];
  if (puVar9 != (unsigned int *)0x0) {
    puVar10 = (unsigned int *)(unsigned int)*(unsigned char *)(param_1 + 0xb);
  }
  if (puVar9 != (unsigned int *)0x0 && puVar10 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar9)(puVar9);
    (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
  }
  piVar1 = (int *)param_1[6];
  temp_v6 = 1;
  temp_v8 = (param_1[7] - (int)piVar1) >> 2;
  if (temp_v8 + 1 >= 2) {
    do {
      temp_v7 = *piVar1;
      temp_v6 = temp_v6 + 1;
      piVar1 = piVar1 + 1;
      if (temp_v7 != 0) {
        *(unsigned int *)(temp_v7 + 0xc) = 0;
      }
    } while (temp_v6 < temp_v8 + 1);
  }
  param_1[7] = param_1[6];
  piVar1 = (int *)param_1[5];
  if (piVar1 != (int *)0x0) {
    temp_v6 = param_1[6];
  }
  if (piVar1 != (int *)0x0 && temp_v6 != 0) {
    (**(romwright_code **)(*piVar1 + 0xc))();
  }
  return param_1;
}
