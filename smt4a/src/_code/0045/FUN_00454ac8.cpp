/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00454ac8` (_code @ 0x454ac8, 0x634 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_0055b688; /* 0x55b688 */
extern unsigned char DAT_0055bc08; /* 0x55bc08 */
extern unsigned char DAT_0055bce4; /* 0x55bce4 */


unsigned int *
FUN_00454ac8(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *temp_v3;
  unsigned int *temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar5;
  int temp_v6;
  int temp_v7;
  int *piVar8;
  unsigned int *puVar9;
  int *piVar10;
  unsigned int *puVar11;
  unsigned int *puVar12;
  
  *param_1 = (unsigned int)&DAT_0055bc08;
  temp_v2 = (unsigned int)*(unsigned char *)((int)param_1 + 0x1f7);
  if ((~temp_v2 & 2) == 0) {
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = param_1[0x61] & 0xc0000000;
  }
  piVar8 = (int *)param_1[0x5c];
  piVar10 = (int *)param_1[1];
  if (piVar8 != (int *)param_1[0x5d]) {
    temp_v0 = *piVar8;
    if (temp_v0 != 0) {
      temp_v2 = temp_v0 + (int)piVar8;
    }
    if (temp_v0 == 0) {
      temp_v2 = 0;
    }
    (**(romwright_code **)(*piVar10 + 0xc))(piVar10,temp_v2,*(romwright_code **)(*piVar10 + 0xc),param_4,param_4);
    (**(romwright_code **)(*piVar10 + 0xc))(piVar10,piVar8);
  }
  puVar12 = (unsigned int *)param_1[0x56];
  if (puVar12 != (unsigned int *)0x0) {
    puVar11 = (unsigned int *)puVar12[3];
    for (puVar9 = (unsigned int *)puVar12[2]; puVar9 != puVar11; puVar9 = puVar9 + 1) {
      piVar8 = (int *)*puVar9;
      piVar10 = (int *)piVar8[1];
      if (piVar10 != (int *)0x0) {
        (**(romwright_code **)(*piVar8 + 4))(piVar8);
        (**(romwright_code **)(*piVar10 + 0xc))(piVar10,piVar8);
      }
    }
    puVar12[3] = puVar12[2];
    piVar8 = (int *)puVar12[1];
    if (piVar8 != (int *)0x0 && puVar12[2] != 0) {
      (**(romwright_code **)(*piVar8 + 0xc))(piVar8);
    }
    (**(romwright_code **)(*(int *)*puVar12 + 0xc))((int *)*puVar12,puVar12);
    param_1[0x56] = 0;
  }
  puVar12 = (unsigned int *)param_1[0x57];
  if (puVar12 != (unsigned int *)0x0) {
    puVar11 = (unsigned int *)puVar12[3];
    for (puVar9 = (unsigned int *)puVar12[2]; puVar9 != puVar11; puVar9 = puVar9 + 1) {
      piVar8 = (int *)*puVar9;
      piVar10 = (int *)piVar8[1];
      if (piVar10 != (int *)0x0) {
        (**(romwright_code **)(*piVar8 + 4))(piVar8);
        (**(romwright_code **)(*piVar10 + 0xc))(piVar10,piVar8);
      }
    }
    puVar12[3] = puVar12[2];
    if ((int *)puVar12[1] != (int *)0x0 && puVar12[2] != 0) {
      (**(romwright_code **)(*(int *)puVar12[1] + 0xc))();
    }
    (**(romwright_code **)(*(int *)*puVar12 + 0xc))((int *)*puVar12,puVar12);
    param_1[0x57] = 0;
  }
  if ((~*(unsigned char *)((int)param_1 + 0x1f7) & 1) != 0) {
    puVar9 = (unsigned int *)param_1[0x5a];
    for (puVar12 = (unsigned int *)param_1[0x59]; puVar12 != puVar9; puVar12 = puVar12 + 1) {
      puVar11 = (unsigned int *)*puVar12;
      if (puVar11 != (unsigned int *)0x0) {
        (**(romwright_code **)*puVar11)(puVar11);
        (**(romwright_code **)(*(int *)puVar11[1] + 0xc))((int *)puVar11[1],puVar11);
        *puVar12 = 0;
      }
    }
    param_1[0x5a] = param_1[0x59];
  }
  puVar12 = (unsigned int *)param_1[0x52];
  if (puVar12 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar12)(puVar12);
    (**(romwright_code **)(*(int *)puVar12[1] + 0xc))((int *)puVar12[1],puVar12);
    param_1[0x52] = 0;
  }
  puVar12 = (unsigned int *)param_1[0x54];
  if (puVar12 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar12)(puVar12);
    (**(romwright_code **)(*(int *)puVar12[1] + 0xc))((int *)puVar12[1],puVar12);
    param_1[0x54] = 0;
  }
  piVar8 = (int *)param_1[0x82];
  temp_v0 = param_1[0x83];
  param_1[0x84] = temp_v0;
  if (piVar8 != (int *)0x0) {
    temp_v0 = param_1[0x83];
  }
  if (piVar8 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*piVar8 + 0xc))();
  }
  piVar8 = (int *)param_1[0x7e];
  temp_v0 = param_1[0x7f];
  param_1[0x80] = temp_v0;
  if (piVar8 != (int *)0x0) {
    temp_v0 = param_1[0x7f];
  }
  if (piVar8 != (int *)0x0 && temp_v0 != 0) {
    piVar8 = (int *)(**(romwright_code **)(*piVar8 + 0xc))();
  }
  puVar12 = (unsigned int *)param_1[0x7b];
  if (puVar12 != (unsigned int *)0x0) {
    piVar8 = (int *)(unsigned int)*(unsigned char *)(param_1 + 0x7c);
  }
  if (puVar12 != (unsigned int *)0x0 && piVar8 != (int *)0x0) {
    (**(romwright_code **)*puVar12)(puVar12);
    piVar8 = (int *)(**(romwright_code **)(*(int *)puVar12[1] + 0xc))((int *)puVar12[1],puVar12);
  }
  temp_v2 = param_1[0x5f];
  temp_v5 = param_1[0x60];
  if (temp_v2 < temp_v5) {
    piVar8 = (int *)(temp_v5 - temp_v2);
  }
  if (temp_v2 < temp_v5) {
    piVar8 = (int *)((int)piVar8 << 0x1c);
  }
  if (temp_v2 < temp_v5) {
    temp_v1 = (unsigned int)piVar8 >> 0x1f;
  }
  else {
    temp_v1 = 0;
  }
  temp_v0 = temp_v1 + 1;
  if (temp_v0 < ((int)(temp_v5 - temp_v2) >> 3) + 1) {
    do {
      temp_v0 = temp_v0 + 2;
    } while (temp_v0 < ((int)(temp_v5 - temp_v2) >> 3) + 1);
  }
  param_1[0x60] = temp_v2;
  if ((int *)param_1[0x5e] != (int *)0x0 && temp_v2 != 0) {
    (**(romwright_code **)(*(int *)param_1[0x5e] + 0xc))();
  }
  piVar8 = (int *)param_1[0x58];
  puVar12 = (unsigned int *)param_1[0x59];
  param_1[0x5a] = (unsigned int)puVar12;
  if (piVar8 != (int *)0x0) {
    puVar12 = (unsigned int *)param_1[0x59];
  }
  if (piVar8 != (int *)0x0 && puVar12 != (unsigned int *)0x0) {
    (**(romwright_code **)(*piVar8 + 0xc))();
    puVar12 = temp_v3;
  }
  *param_1 = (unsigned int)&DAT_0055b688;
  puVar9 = (unsigned int *)param_1[0x4c];
  if (puVar9 != (unsigned int *)0x0) {
    puVar11 = (unsigned int *)puVar9[3];
    for (puVar12 = (unsigned int *)puVar9[2]; puVar12 != puVar11; puVar12 = puVar12 + 1) {
      piVar8 = (int *)*puVar12;
      piVar10 = (int *)piVar8[1];
      if (piVar10 != (int *)0x0) {
        (**(romwright_code **)(*piVar8 + 4))(piVar8);
        (**(romwright_code **)(*piVar10 + 0xc))(piVar10,piVar8);
      }
    }
    puVar9[3] = puVar9[2];
    if ((int *)puVar9[1] != (int *)0x0 && puVar9[2] != 0) {
      (**(romwright_code **)(*(int *)puVar9[1] + 0xc))();
    }
    (**(romwright_code **)(*(int *)*puVar9 + 0xc))((int *)*puVar9,puVar9);
    param_1[0x4c] = 0;
    puVar12 = temp_v4;
  }
  temp_v0 = param_1[3];
  puVar9 = (unsigned int *)&DAT_0055bce4;
  if (temp_v0 != 0) {
    puVar12 = (unsigned int *)(temp_v0 + 0x18);
  }
  *param_1 = (unsigned int)&DAT_0055bce4;
  if (temp_v0 != 0) {
    puVar5 = (unsigned int *)puVar12[1];
    puVar11 = puVar9;
    puVar9 = (unsigned int *)*puVar12;
    while( 1 ) {
      if (puVar9 != puVar5) {
        puVar11 = (unsigned int *)*puVar9;
      }
      if (puVar9 == puVar5 || puVar11 == param_1) break;
      puVar9 = puVar9 + 1;
    }
    if (puVar9 != puVar5) {
      puVar12 = puVar9 + 1;
      temp_v6 = (int)puVar5 - (int)puVar12;
      if (0 < temp_v6 >> 2) {
        puVar11 = puVar9;
        if (temp_v6 * 0x20000000 < 0) {
          puVar5 = (unsigned int *)*puVar12;
          puVar12 = puVar9 + 2;
          if (puVar5 != param_1) {
            puVar11 = puVar9 + 1;
            *puVar9 = (unsigned int)puVar5;
          }
        }
        puVar9 = puVar11;
        for (temp_v6 = temp_v6 >> 3; temp_v6 != 0; temp_v6 = temp_v6 - 1) {
          puVar11 = puVar9;
          if ((unsigned int *)*puVar12 != param_1) {
            puVar11 = puVar9 + 1;
            *puVar9 = (unsigned int)*puVar12;
          }
          puVar5 = puVar12 + 1;
          puVar12 = puVar12 + 2;
          puVar9 = puVar11;
          if ((unsigned int *)*puVar5 != param_1) {
            puVar9 = puVar11 + 1;
            *puVar11 = (unsigned int)*puVar5;
          }
        }
      }
    }
    puVar12 = *(unsigned int **)(temp_v0 + 0x1c);
    *(unsigned int **)(temp_v0 + 0x1c) = puVar9;
    if (puVar12 != puVar9) {
      param_1[3] = 0;
    }
  }
  puVar12 = (unsigned int *)param_1[0xd];
  if (puVar12 != (unsigned int *)0x0) {
    puVar11 = (unsigned int *)puVar12[3];
    for (puVar9 = (unsigned int *)puVar12[2]; puVar9 != puVar11; puVar9 = puVar9 + 1) {
      piVar8 = (int *)*puVar9;
      piVar10 = (int *)piVar8[1];
      if (piVar10 != (int *)0x0) {
        (**(romwright_code **)(*piVar8 + 4))(piVar8);
        (**(romwright_code **)(*piVar10 + 0xc))(piVar10,piVar8);
      }
    }
    puVar12[3] = puVar12[2];
    if ((int *)puVar12[1] != (int *)0x0 && puVar12[2] != 0) {
      (**(romwright_code **)(*(int *)puVar12[1] + 0xc))();
    }
    puVar9 = (unsigned int *)(**(romwright_code **)(*(int *)*puVar12 + 0xc))((int *)*puVar12,puVar12);
    param_1[0xd] = 0;
  }
  puVar12 = (unsigned int *)param_1[10];
  if (puVar12 != (unsigned int *)0x0) {
    puVar9 = (unsigned int *)(unsigned int)*(unsigned char *)(param_1 + 0xb);
  }
  if (puVar12 != (unsigned int *)0x0 && puVar9 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar12)(puVar12);
    (**(romwright_code **)(*(int *)puVar12[1] + 0xc))((int *)puVar12[1],puVar12);
  }
  piVar8 = (int *)param_1[6];
  temp_v6 = 1;
  temp_v0 = (param_1[7] - (int)piVar8) >> 2;
  if (temp_v0 + 1 >= 2) {
    do {
      temp_v7 = *piVar8;
      temp_v6 = temp_v6 + 1;
      piVar8 = piVar8 + 1;
      if (temp_v7 != 0) {
        *(unsigned int *)(temp_v7 + 0xc) = 0;
      }
    } while (temp_v6 < temp_v0 + 1);
  }
  param_1[7] = param_1[6];
  piVar8 = (int *)param_1[5];
  if (piVar8 != (int *)0x0) {
    temp_v6 = param_1[6];
  }
  if (piVar8 != (int *)0x0 && temp_v6 != 0) {
    (**(romwright_code **)(*piVar8 + 0xc))();
  }
  return param_1;
}

} /* extern "C" */
