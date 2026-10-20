/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003728b8` (_code @ 0x3728b8, 0x3a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_gfx_Camera_DestroyResCamera(unsigned int, unsigned int);

typedef int romwright_code(...);
extern unsigned char DAT_00421238; /* 0x421238 */
extern unsigned char DAT_00421820; /* 0x421820 */
extern unsigned char DAT_004218c8; /* 0x4218c8 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: nw_gfx_Camera_DestroyResCamera. */


unsigned int * FUN_003728b8(unsigned int *param_1)

{
/* irregular: irregular input(s): in_r12; 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int *temp_v2;
  unsigned int *temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int *puVar6;
  unsigned int *puVar7;
  int *piVar8;
  int *piVar9;
  unsigned int *puVar10;
  unsigned int *in_r12;
  unsigned int *puVar11;
  long long temp_v7;
  unsigned long long temp_v8;
  
  *param_1 = (unsigned int)&DAT_00421820;
  puVar2 = (unsigned int *)param_1[2];
  if ((puVar2 != (unsigned int *)0x0) && ((~*puVar2 & 0x4000000a) != 0)) {
    puVar2 = (unsigned int *)0x0;
  }
  if (*(char *)(param_1 + 0xa6) != '\0' && puVar2 != (unsigned int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[1] + 0xc))();
  }
  nw_gfx_Camera_DestroyResCamera(param_1[1],param_1[0x9b]);
  temp_v7 = (unsigned long long)temp_v1 << 0x20;
  param_1[0x9b] = 0;
  puVar6 = (unsigned int *)param_1[0x9a];
  if (puVar6 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar6)(puVar6);
    temp_v7 = (**(romwright_code **)(*(int *)puVar6[1] + 0xc))((int *)puVar6[1],puVar6);
    param_1[0x9a] = 0;
  }
  temp_v0 = (unsigned int)temp_v7;
  puVar6 = (unsigned int *)param_1[0x98];
  if (puVar6 != (unsigned int *)0x0) {
    temp_v0 = (unsigned int)*(unsigned char *)(param_1 + 0x99);
  }
  temp_v8 = romwright_piece_4_4((int)((unsigned long long)temp_v7 >> 0x20),temp_v0);
  if (puVar6 != (unsigned int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)*puVar6)(puVar6);
    temp_v8 = (**(romwright_code **)(*(int *)puVar6[1] + 0xc))((int *)puVar6[1],puVar6);
  }
  puVar6 = (unsigned int *)((unsigned long long)temp_v8 >> 0x20);
  temp_v0 = (unsigned int)temp_v8;
  puVar7 = (unsigned int *)param_1[0x96];
  if (puVar7 != (unsigned int *)0x0) {
    temp_v0 = (unsigned int)*(unsigned char *)(param_1 + 0x97);
  }
  if (puVar7 != (unsigned int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)*puVar7)(puVar7);
    (**(romwright_code **)(*(int *)puVar7[1] + 0xc))((int *)puVar7[1],puVar7);
    puVar6 = temp_v2;
  }
  *param_1 = (unsigned int)&DAT_00421238;
  puVar7 = (unsigned int *)param_1[0x4c];
  if (puVar7 != (unsigned int *)0x0) {
    puVar10 = (unsigned int *)puVar7[3];
    for (puVar6 = (unsigned int *)puVar7[2]; puVar6 != puVar10; puVar6 = puVar6 + 1) {
      piVar8 = (int *)*puVar6;
      piVar9 = (int *)piVar8[1];
      if (piVar9 != (int *)0x0) {
        (**(romwright_code **)(*piVar8 + 4))(piVar8);
        (**(romwright_code **)(*piVar9 + 0xc))(piVar9,piVar8);
      }
    }
    puVar7[3] = puVar7[2];
    if ((int *)puVar7[1] != (int *)0x0 && puVar7[2] != 0) {
      (**(romwright_code **)(*(int *)puVar7[1] + 0xc))();
    }
    (**(romwright_code **)(*(int *)*puVar7 + 0xc))((int *)*puVar7,puVar7);
    param_1[0x4c] = 0;
    puVar6 = temp_v3;
  }
  temp_v6 = param_1[3];
  puVar7 = (unsigned int *)&DAT_004218c8;
  if (temp_v6 != 0) {
    puVar6 = (unsigned int *)(temp_v6 + 0x18);
  }
  *param_1 = (unsigned int)&DAT_004218c8;
  if (temp_v6 != 0) {
    puVar7 = (unsigned int *)*puVar6;
    puVar6 = (unsigned int *)puVar6[1];
    while( 1 ) {
      if (puVar7 != puVar6) {
        in_r12 = (unsigned int *)*puVar7;
      }
      if (puVar7 == puVar6 || in_r12 == param_1) break;
      puVar7 = puVar7 + 1;
    }
    if (puVar7 != puVar6) {
      puVar10 = puVar7 + 1;
      temp_v4 = (int)puVar6 - (int)puVar10;
      if (0 < temp_v4 >> 2) {
        puVar6 = puVar7;
        if (temp_v4 * 0x20000000 < 0) {
          puVar11 = (unsigned int *)*puVar10;
          puVar10 = puVar7 + 2;
          if (puVar11 != param_1) {
            puVar6 = puVar7 + 1;
            *puVar7 = (unsigned int)puVar11;
          }
        }
        puVar7 = puVar6;
        for (temp_v4 = temp_v4 >> 3; temp_v4 != 0; temp_v4 = temp_v4 - 1) {
          puVar6 = puVar7;
          if ((unsigned int *)*puVar10 != param_1) {
            puVar6 = puVar7 + 1;
            *puVar7 = (unsigned int)*puVar10;
          }
          puVar11 = puVar10 + 1;
          puVar10 = puVar10 + 2;
          puVar7 = puVar6;
          if ((unsigned int *)*puVar11 != param_1) {
            puVar7 = puVar6 + 1;
            *puVar6 = (unsigned int)*puVar11;
          }
        }
      }
    }
    puVar6 = *(unsigned int **)(temp_v6 + 0x1c);
    *(unsigned int **)(temp_v6 + 0x1c) = puVar7;
    if (puVar6 != puVar7) {
      param_1[3] = 0;
    }
  }
  puVar6 = (unsigned int *)param_1[0xd];
  if (puVar6 != (unsigned int *)0x0) {
    puVar10 = (unsigned int *)puVar6[3];
    for (puVar7 = (unsigned int *)puVar6[2]; puVar7 != puVar10; puVar7 = puVar7 + 1) {
      piVar8 = (int *)*puVar7;
      piVar9 = (int *)piVar8[1];
      if (piVar9 != (int *)0x0) {
        (**(romwright_code **)(*piVar8 + 4))(piVar8);
        (**(romwright_code **)(*piVar9 + 0xc))(piVar9,piVar8);
      }
    }
    puVar6[3] = puVar6[2];
    if ((int *)puVar6[1] != (int *)0x0 && puVar6[2] != 0) {
      (**(romwright_code **)(*(int *)puVar6[1] + 0xc))();
    }
    puVar7 = (unsigned int *)(**(romwright_code **)(*(int *)*puVar6 + 0xc))((int *)*puVar6,puVar6);
    param_1[0xd] = 0;
  }
  puVar6 = (unsigned int *)param_1[10];
  if (puVar6 != (unsigned int *)0x0) {
    puVar7 = (unsigned int *)(unsigned int)*(unsigned char *)(param_1 + 0xb);
  }
  if (puVar6 != (unsigned int *)0x0 && puVar7 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar6)(puVar6);
    (**(romwright_code **)(*(int *)puVar6[1] + 0xc))((int *)puVar6[1],puVar6);
  }
  piVar8 = (int *)param_1[6];
  temp_v4 = 1;
  temp_v6 = (param_1[7] - (int)piVar8) >> 2;
  if (temp_v6 + 1 >= 2) {
    do {
      temp_v5 = *piVar8;
      temp_v4 = temp_v4 + 1;
      piVar8 = piVar8 + 1;
      if (temp_v5 != 0) {
        *(unsigned int *)(temp_v5 + 0xc) = 0;
      }
    } while (temp_v4 < temp_v6 + 1);
  }
  param_1[7] = param_1[6];
  piVar8 = (int *)param_1[5];
  if (piVar8 != (int *)0x0) {
    temp_v4 = param_1[6];
  }
  if (piVar8 != (int *)0x0 && temp_v4 != 0) {
    (**(romwright_code **)(*piVar8 + 0xc))();
  }
  return param_1;
}

} /* extern "C" */
