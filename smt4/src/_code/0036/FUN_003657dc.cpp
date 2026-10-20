/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003657dc` (_code @ 0x3657dc, 0x674 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_gfx_Model_DestroyResMeshes(int *, int, int, int, unsigned int);

typedef int romwright_code(...);
extern unsigned char DAT_00421204; /* 0x421204 */
extern unsigned char DAT_00421238; /* 0x421238 */
extern unsigned char DAT_004217ec; /* 0x4217ec */
extern unsigned char DAT_004218c8; /* 0x4218c8 */

/* Supplied declaration required: nw_gfx_Model_DestroyResMeshes. */


int * FUN_003657dc(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar5;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int *puVar9;
  unsigned int *puVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  unsigned int *puVar15;
  
  puVar1 = &DAT_00421204;
  *param_1 = (int)&DAT_00421204;
  puVar9 = (unsigned int *)param_1[0x8a];
  if (puVar9 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar9)(puVar9);
    puVar1 = (unsigned char *)(**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
    param_1[0x8a] = 0;
  }
  puVar9 = (unsigned int *)param_1[0x88];
  if (puVar9 != (unsigned int *)0x0) {
    puVar1 = (unsigned char *)(unsigned int)*(unsigned char *)(param_1 + 0x89);
  }
  if (puVar9 != (unsigned int *)0x0 && puVar1 != (unsigned char *)0x0) {
    (**(romwright_code **)*puVar9)(puVar9);
    (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
  }
  *param_1 = (int)&DAT_004217ec;
  if ((~*(unsigned char *)((int)param_1 + 0x1f7) & 2) == 0) {
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = param_1[0x61] & 0xc0000000;
  }
  nw_gfx_Model_DestroyResMeshes(param_1,param_1[1],param_1[0x5c],param_1[0x5d],param_4);
  puVar9 = (unsigned int *)param_1[0x56];
  if (puVar9 != (unsigned int *)0x0) {
    puVar15 = (unsigned int *)puVar9[3];
    for (puVar10 = (unsigned int *)puVar9[2]; puVar10 != puVar15; puVar10 = puVar10 + 1) {
      piVar12 = (int *)*puVar10;
      piVar14 = (int *)piVar12[1];
      if (piVar14 != (int *)0x0) {
        (**(romwright_code **)(*piVar12 + 4))(piVar12);
        (**(romwright_code **)(*piVar14 + 0xc))(piVar14,piVar12);
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
    puVar15 = (unsigned int *)puVar9[3];
    for (puVar10 = (unsigned int *)puVar9[2]; puVar10 != puVar15; puVar10 = puVar10 + 1) {
      piVar12 = (int *)*puVar10;
      piVar14 = (int *)piVar12[1];
      if (piVar14 != (int *)0x0) {
        (**(romwright_code **)(*piVar12 + 4))(piVar12);
        (**(romwright_code **)(*piVar14 + 0xc))(piVar14,piVar12);
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
      puVar15 = (unsigned int *)*puVar9;
      if (puVar15 != (unsigned int *)0x0) {
        (**(romwright_code **)*puVar15)(puVar15);
        (**(romwright_code **)(*(int *)puVar15[1] + 0xc))((int *)puVar15[1],puVar15);
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
  piVar12 = (int *)param_1[0x82];
  temp_v1 = param_1[0x83];
  param_1[0x84] = temp_v1;
  if (piVar12 != (int *)0x0) {
    temp_v1 = param_1[0x83];
  }
  if (piVar12 != (int *)0x0 && temp_v1 != 0) {
    (**(romwright_code **)(*piVar12 + 0xc))();
  }
  piVar12 = (int *)param_1[0x7e];
  temp_v1 = param_1[0x7f];
  param_1[0x80] = temp_v1;
  if (piVar12 != (int *)0x0) {
    temp_v1 = param_1[0x7f];
  }
  if (piVar12 != (int *)0x0 && temp_v1 != 0) {
    piVar12 = (int *)(**(romwright_code **)(*piVar12 + 0xc))();
  }
  puVar9 = (unsigned int *)param_1[0x7b];
  if (puVar9 != (unsigned int *)0x0) {
    piVar12 = (int *)(unsigned int)*(unsigned char *)(param_1 + 0x7c);
  }
  if (puVar9 != (unsigned int *)0x0 && piVar12 != (int *)0x0) {
    (**(romwright_code **)*puVar9)(puVar9);
    piVar12 = (int *)(**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
  }
  temp_v2 = param_1[0x5f];
  temp_v3 = param_1[0x60];
  if (temp_v2 < temp_v3) {
    piVar12 = (int *)(temp_v3 - temp_v2);
  }
  if (temp_v2 < temp_v3) {
    piVar12 = (int *)((int)piVar12 << 0x1c);
  }
  if (temp_v2 < temp_v3) {
    temp_v0 = (unsigned int)piVar12 >> 0x1f;
  }
  else {
    temp_v0 = 0;
  }
  temp_v1 = temp_v0 + 1;
  if (temp_v1 < ((int)(temp_v3 - temp_v2) >> 3) + 1) {
    do {
      temp_v1 = temp_v1 + 2;
    } while (temp_v1 < ((int)(temp_v3 - temp_v2) >> 3) + 1);
  }
  param_1[0x60] = temp_v2;
  if ((int *)param_1[0x5e] != (int *)0x0 && temp_v2 != 0) {
    (**(romwright_code **)(*(int *)param_1[0x5e] + 0xc))();
  }
  piVar12 = param_1 + 0x58;
  piVar14 = (int *)*piVar12;
  temp_v1 = param_1[0x59];
  param_1[0x5a] = temp_v1;
  if (piVar14 != (int *)0x0) {
    temp_v1 = param_1[0x59];
  }
  if (piVar14 != (int *)0x0 && temp_v1 != 0) {
    (**(romwright_code **)(*piVar14 + 0xc))();
  }
  *param_1 = (int)&DAT_00421238;
  puVar9 = (unsigned int *)param_1[0x4c];
  if (puVar9 != (unsigned int *)0x0) {
    piVar14 = (int *)puVar9[3];
    for (piVar12 = (int *)puVar9[2]; piVar12 != piVar14; piVar12 = piVar12 + 1) {
      piVar11 = (int *)*piVar12;
      piVar13 = (int *)piVar11[1];
      if (piVar13 != (int *)0x0) {
        (**(romwright_code **)(*piVar11 + 4))(piVar11);
        (**(romwright_code **)(*piVar13 + 0xc))(piVar13,piVar11);
      }
    }
    puVar9[3] = puVar9[2];
    if ((int *)puVar9[1] != (int *)0x0 && puVar9[2] != 0) {
      (**(romwright_code **)(*(int *)puVar9[1] + 0xc))();
    }
    (**(romwright_code **)(*(int *)*puVar9 + 0xc))((int *)*puVar9,puVar9);
    param_1[0x4c] = 0;
  }
  puVar9 = (unsigned int *)&DAT_004218c8;
  temp_v1 = param_1[3];
  *param_1 = (int)&DAT_004218c8;
  if (temp_v1 != 0) {
    puVar9 = *(unsigned int **)(temp_v1 + 0x18);
    puVar10 = *(unsigned int **)(temp_v1 + 0x1c);
    while( 1 ) {
      if (puVar9 != puVar10) {
        piVar12 = (int *)*puVar9;
      }
      if (puVar9 == puVar10 || piVar12 == param_1) break;
      puVar9 = puVar9 + 1;
    }
    if (puVar9 != puVar10) {
      puVar15 = puVar9 + 1;
      temp_v4 = (int)puVar10 - (int)puVar15;
      if (0 < temp_v4 >> 2) {
        puVar10 = puVar9;
        if (temp_v4 * 0x20000000 < 0) {
          piVar12 = (int *)*puVar15;
          puVar15 = puVar9 + 2;
          if (piVar12 != param_1) {
            puVar10 = puVar9 + 1;
            *puVar9 = (unsigned int)piVar12;
          }
        }
        puVar9 = puVar10;
        for (temp_v4 = temp_v4 >> 3; temp_v4 != 0; temp_v4 = temp_v4 - 1) {
          puVar10 = puVar9;
          if ((int *)*puVar15 != param_1) {
            puVar10 = puVar9 + 1;
            *puVar9 = (unsigned int)*puVar15;
          }
          puVar5 = puVar15 + 1;
          puVar15 = puVar15 + 2;
          puVar9 = puVar10;
          if ((int *)*puVar5 != param_1) {
            puVar9 = puVar10 + 1;
            *puVar10 = (unsigned int)*puVar5;
          }
        }
      }
    }
    puVar10 = *(unsigned int **)(temp_v1 + 0x1c);
    *(unsigned int **)(temp_v1 + 0x1c) = puVar9;
    if (puVar10 != puVar9) {
      param_1[3] = 0;
    }
  }
  puVar10 = (unsigned int *)param_1[0xd];
  if (puVar10 != (unsigned int *)0x0) {
    puVar15 = (unsigned int *)puVar10[3];
    for (puVar9 = (unsigned int *)puVar10[2]; puVar9 != puVar15; puVar9 = puVar9 + 1) {
      piVar12 = (int *)*puVar9;
      piVar14 = (int *)piVar12[1];
      if (piVar14 != (int *)0x0) {
        (**(romwright_code **)(*piVar12 + 4))(piVar12);
        (**(romwright_code **)(*piVar14 + 0xc))(piVar14,piVar12);
      }
    }
    puVar10[3] = puVar10[2];
    if ((int *)puVar10[1] != (int *)0x0 && puVar10[2] != 0) {
      (**(romwright_code **)(*(int *)puVar10[1] + 0xc))();
    }
    puVar9 = (unsigned int *)(**(romwright_code **)(*(int *)*puVar10 + 0xc))((int *)*puVar10,puVar10);
    param_1[0xd] = 0;
  }
  puVar10 = (unsigned int *)param_1[10];
  if (puVar10 != (unsigned int *)0x0) {
    puVar9 = (unsigned int *)(unsigned int)*(unsigned char *)(param_1 + 0xb);
  }
  if (puVar10 != (unsigned int *)0x0 && puVar9 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar10)(puVar10);
    (**(romwright_code **)(*(int *)puVar10[1] + 0xc))((int *)puVar10[1],puVar10);
  }
  piVar12 = (int *)param_1[6];
  temp_v4 = 1;
  temp_v1 = (param_1[7] - (int)piVar12) >> 2;
  if (temp_v1 + 1 >= 2) {
    do {
      temp_v5 = *piVar12;
      temp_v4 = temp_v4 + 1;
      piVar12 = piVar12 + 1;
      if (temp_v5 != 0) {
        *(unsigned int *)(temp_v5 + 0xc) = 0;
      }
    } while (temp_v4 < temp_v1 + 1);
  }
  param_1[7] = param_1[6];
  piVar12 = (int *)param_1[5];
  if (piVar12 != (int *)0x0) {
    temp_v4 = param_1[6];
  }
  if (piVar12 != (int *)0x0 && temp_v4 != 0) {
    (**(romwright_code **)(*piVar12 + 0xc))();
  }
  return param_1;
}

} /* extern "C" */
