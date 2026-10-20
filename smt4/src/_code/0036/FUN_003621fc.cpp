/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003621fc` (_code @ 0x3621fc, 0x3f0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_00421030; /* 0x421030 */
extern unsigned char DAT_004218c8; /* 0x4218c8 */


unsigned int * FUN_003621fc(unsigned int *param_1)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int *puVar4;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  char *pcVar8;
  unsigned int *puVar9;
  int temp_v5;
  int *piVar11;
  char *pcVar12;
  int *piVar13;
  unsigned int *puVar14;
  
  *param_1 = (unsigned int)&DAT_00421030;
  pcVar12 = (char *)param_1[0x17];
  for (pcVar8 = (char *)param_1[0x16]; pcVar8 != pcVar12; pcVar8 = pcVar8 + 0x18) {
    if (*pcVar8 != '\0') {
      (**(romwright_code **)(*(int *)param_1[1] + 0xc))((int *)param_1[1],*(unsigned int *)(pcVar8 + 4));
      pcVar8[4] = '\0';
      pcVar8[5] = '\0';
      pcVar8[6] = '\0';
      pcVar8[7] = '\0';
    }
  }
  pcVar12 = (char *)param_1[0x1b];
  for (pcVar8 = (char *)param_1[0x1a]; pcVar8 != pcVar12; pcVar8 = pcVar8 + 0x1c) {
    if (*pcVar8 != '\0') {
      (**(romwright_code **)(*(int *)param_1[1] + 0xc))((int *)param_1[1],*(unsigned int *)(pcVar8 + 4));
      pcVar8[4] = '\0';
      pcVar8[5] = '\0';
      pcVar8[6] = '\0';
      pcVar8[7] = '\0';
    }
  }
  puVar9 = (unsigned int *)param_1[0x13];
  if (puVar9 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar9)(puVar9);
    (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
    param_1[0x13] = 0;
  }
  temp_v1 = param_1[0x1a];
  temp_v0 = param_1[0x1b];
  if (temp_v1 >= temp_v0) {
    temp_v3 = 0;
  }
  else {
    temp_v4 = (int)(((long long)(int)(temp_v0 - temp_v1) * -0x6db6db6d +
                  ((unsigned long long)(temp_v0 - temp_v1) << 0x20)) >> 0x20);
    temp_v3 = ((temp_v4 >> 4) - (temp_v4 >> 0x1f)) & 1;
  }
  temp_v0 = temp_v0 - temp_v1;
  temp_v4 = temp_v3 + 1;
  temp_v5 = (int)(((long long)(int)temp_v0 * -0x6db6db6d + ((unsigned long long)temp_v0 << 0x20)) >> 0x20);
  if (temp_v4 < ((temp_v5 >> 4) - (temp_v5 >> 0x1f)) + 1) {
    do {
      temp_v5 = (int)(((long long)(int)temp_v0 * -0x6db6db6d + ((unsigned long long)temp_v0 << 0x20)) >> 0x20);
      temp_v4 = temp_v4 + 2;
    } while (temp_v4 < ((temp_v5 >> 4) - (temp_v5 >> 0x1f)) + 1);
  }
  param_1[0x1b] = temp_v1;
  if ((int *)param_1[0x19] != (int *)0x0 && temp_v1 != 0) {
    (**(romwright_code **)(*(int *)param_1[0x19] + 0xc))();
  }
  temp_v0 = param_1[0x17];
  temp_v1 = param_1[0x16];
  if (temp_v1 >= temp_v0) {
    temp_v3 = 0;
  }
  else {
    temp_v3 = ((int)(temp_v0 - temp_v1) / 0x18) & 1;
  }
  puVar9 = (unsigned int *)(temp_v0 - temp_v1);
  temp_v4 = temp_v3 + 1;
  if (temp_v4 < (int)puVar9 / 0x18 + 1) {
    do {
      temp_v4 = temp_v4 + 2;
    } while (temp_v4 < (int)puVar9 / 0x18 + 1);
  }
  param_1[0x17] = temp_v1;
  if ((int *)param_1[0x15] != (int *)0x0 && temp_v1 != 0) {
    (**(romwright_code **)(*(int *)param_1[0x15] + 0xc))();
  }
  puVar2 = (unsigned int *)&DAT_004218c8;
  temp_v4 = param_1[3];
  *param_1 = (unsigned int)&DAT_004218c8;
  if (temp_v4 != 0) {
    puVar2 = *(unsigned int **)(temp_v4 + 0x18);
    puVar4 = *(unsigned int **)(temp_v4 + 0x1c);
    while( 1 ) {
      if (puVar2 != puVar4) {
        puVar9 = (unsigned int *)*puVar2;
      }
      if (puVar2 == puVar4 || puVar9 == param_1) break;
      puVar2 = puVar2 + 1;
    }
    if (puVar2 != puVar4) {
      puVar9 = puVar2 + 1;
      temp_v5 = (int)puVar4 - (int)puVar9;
      if (0 < temp_v5 >> 2) {
        puVar4 = puVar2;
        if (temp_v5 * 0x20000000 < 0) {
          puVar14 = (unsigned int *)*puVar9;
          puVar9 = puVar2 + 2;
          if (puVar14 != param_1) {
            puVar4 = puVar2 + 1;
            *puVar2 = (unsigned int)puVar14;
          }
        }
        puVar2 = puVar4;
        for (temp_v5 = temp_v5 >> 3; temp_v5 != 0; temp_v5 = temp_v5 - 1) {
          puVar4 = puVar2;
          if ((unsigned int *)*puVar9 != param_1) {
            puVar4 = puVar2 + 1;
            *puVar2 = (unsigned int)*puVar9;
          }
          puVar14 = puVar9 + 1;
          puVar9 = puVar9 + 2;
          puVar2 = puVar4;
          if ((unsigned int *)*puVar14 != param_1) {
            puVar2 = puVar4 + 1;
            *puVar4 = (unsigned int)*puVar14;
          }
        }
      }
    }
    puVar9 = *(unsigned int **)(temp_v4 + 0x1c);
    *(unsigned int **)(temp_v4 + 0x1c) = puVar2;
    if (puVar9 != puVar2) {
      param_1[3] = 0;
    }
  }
  puVar9 = (unsigned int *)param_1[0xd];
  if (puVar9 != (unsigned int *)0x0) {
    puVar4 = (unsigned int *)puVar9[3];
    for (puVar2 = (unsigned int *)puVar9[2]; puVar2 != puVar4; puVar2 = puVar2 + 1) {
      piVar11 = (int *)*puVar2;
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
    puVar2 = (unsigned int *)(**(romwright_code **)(*(int *)*puVar9 + 0xc))((int *)*puVar9,puVar9);
    param_1[0xd] = 0;
  }
  puVar9 = (unsigned int *)param_1[10];
  if (puVar9 != (unsigned int *)0x0) {
    puVar2 = (unsigned int *)(unsigned int)*(unsigned char *)(param_1 + 0xb);
  }
  if (puVar9 != (unsigned int *)0x0 && puVar2 != (unsigned int *)0x0) {
    (**(romwright_code **)*puVar9)(puVar9);
    (**(romwright_code **)(*(int *)puVar9[1] + 0xc))((int *)puVar9[1],puVar9);
  }
  piVar11 = (int *)param_1[6];
  temp_v5 = 1;
  temp_v4 = (param_1[7] - (int)piVar11) >> 2;
  if (temp_v4 + 1 >= 2) {
    do {
      temp_v2 = *piVar11;
      temp_v5 = temp_v5 + 1;
      piVar11 = piVar11 + 1;
      if (temp_v2 != 0) {
        *(unsigned int *)(temp_v2 + 0xc) = 0;
      }
    } while (temp_v5 < temp_v4 + 1);
  }
  param_1[7] = param_1[6];
  piVar11 = (int *)param_1[5];
  if (piVar11 != (int *)0x0) {
    temp_v5 = param_1[6];
  }
  if (piVar11 != (int *)0x0 && temp_v5 != 0) {
    (**(romwright_code **)(*piVar11 + 0xc))();
  }
  return param_1;
}

} /* extern "C" */
