/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a6264` (_code @ 0x2a6264, 0x174 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;


void FUN_002a6264(int *param_1,unsigned int param_2)

{
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int *piVar4;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int *piVar8;
  int temp_v5;
  unsigned int temp_v6;
  int *piVar11;
  int *piVar12;
  
  piVar4 = (int *)(*param_1 + 0x20);
  temp_v5 = *piVar4;
  if (temp_v5 != 0) {
    piVar4 = (int *)((int)piVar4 + temp_v5);
  }
  if (temp_v5 == 0) {
    piVar4 = (int *)0x0;
  }
  temp_v5 = *(int *)(*param_1 + 0x1c);
  if (piVar4 != (int *)0x0) {
    piVar4 = piVar4 + 7;
  }
  temp_v2 = *(int *)(*param_1 + 0x20);
  if (temp_v2 != 0) {
    temp_v2 = *param_1 + 0x20 + temp_v2;
  }
  else {
    temp_v2 = 0;
  }
  if (temp_v2 != 0) {
    piVar11 = (int *)(temp_v2 + 0x1c);
  }
  else {
    piVar11 = (int *)0x0;
  }
  for (; piVar11 != piVar4 + temp_v5 * 4; piVar11 = piVar11 + 4) {
    if (piVar11[3] != 0) {
      temp_v2 = (int)piVar11 + piVar11[3] + 0xc;
    }
    else {
      temp_v2 = 0;
    }
    temp_v0 = *(int *)(temp_v2 + 0xc4);
    if (*(int *)(temp_v2 + 200) != 0) {
      temp_v2 = temp_v2 + 200 + *(int *)(temp_v2 + 200);
    }
    else {
      temp_v2 = 0;
    }
    if (piVar11[3] != 0) {
      temp_v1 = (int)piVar11 + piVar11[3] + 0xc;
    }
    else {
      temp_v1 = 0;
    }
    temp_v3 = *(int *)(temp_v1 + 200);
    if (temp_v3 != 0) {
      piVar12 = (int *)(temp_v3 + temp_v1 + 200);
    }
    else {
      piVar12 = (int *)0x0;
    }
    for (; piVar12 != (int *)(temp_v2 + temp_v0 * 4); piVar12 = piVar12 + 1) {
      if (*piVar12 != 0) {
        puVar3 = (unsigned int *)(*piVar12 + (int)piVar12);
      }
      else {
        puVar3 = (unsigned int *)0x0;
      }
      if ((puVar3 != (unsigned int *)0x0) && ((~*puVar3 & 0x10000001) != 0)) {
        puVar3 = (unsigned int *)0x0;
      }
      if (puVar3 != (unsigned int *)0x0) {
        temp_v4 = puVar3[0xf];
        temp_v1 = 0;
        if (temp_v4 != 0) {
          temp_v1 = (int)puVar3 + temp_v4 + 0x3c;
        }
        temp_v6 = puVar3[0xe];
        if (temp_v4 == 0) {
          temp_v1 = 0;
        }
        temp_v4 = puVar3[0xf];
        if (temp_v4 != 0) {
          piVar8 = (int *)(temp_v4 + (int)(puVar3 + 0xf));
        }
        else {
          piVar8 = (int *)0x0;
        }
        while (piVar8 != (int *)(temp_v1 + temp_v6 * 4)) {
          if (*piVar8 != 0) {
            puVar3 = (unsigned int *)(*piVar8 + (int)piVar8);
          }
          else {
            puVar3 = (unsigned int *)0x0;
          }
          if ((puVar3 != (unsigned int *)0x0) && ((*puVar3 & 0x40000000) == 0)) {
            puVar3 = (unsigned int *)0x0;
          }
          piVar8 = piVar8 + 1;
          if (puVar3 != (unsigned int *)0x0) {
            puVar3[4] = param_2;
          }
        }
      }
    }
  }
  return;
}
