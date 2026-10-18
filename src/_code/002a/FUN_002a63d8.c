/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a63d8` (_code @ 0x2a63d8, 0x200 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_002a63d8(int *param_1,unsigned int param_2)

{
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar6;
  int temp_v4;
  int *piVar8;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  
  piVar8 = (int *)(*param_1 + 0x20);
  temp_v10 = *piVar8;
  if (temp_v10 != 0) {
    piVar8 = (int *)((int)piVar8 + temp_v10);
  }
  if (temp_v10 == 0) {
    piVar8 = (int *)0x0;
  }
  temp_v10 = *(int *)(*param_1 + 0x1c);
  if (piVar8 != (int *)0x0) {
    piVar8 = piVar8 + 7;
  }
  temp_v5 = *(int *)(*param_1 + 0x20);
  if (temp_v5 != 0) {
    piVar1 = (int *)(*param_1 + 0x20 + temp_v5);
  }
  else {
    piVar1 = (int *)0x0;
  }
  if (piVar1 != (int *)0x0) {
    piVar1 = piVar1 + 7;
  }
  for (; piVar1 != piVar8 + temp_v10 * 4; piVar1 = piVar1 + 4) {
    temp_v5 = piVar1[3];
    if (temp_v5 != 0) {
      temp_v5 = (int)(piVar1 + 3) + temp_v5;
    }
    else {
      temp_v5 = 0;
    }
    temp_v0 = *(int *)(temp_v5 + 0xc4);
    if (*(int *)(temp_v5 + 200) != 0) {
      temp_v5 = temp_v5 + 200 + *(int *)(temp_v5 + 200);
    }
    else {
      temp_v5 = 0;
    }
    if (piVar1[3] != 0) {
      temp_v1 = (int)piVar1 + piVar1[3] + 0xc;
    }
    else {
      temp_v1 = 0;
    }
    temp_v6 = *(int *)(temp_v1 + 200);
    if (temp_v6 != 0) {
      piVar17 = (int *)(temp_v6 + temp_v1 + 200);
    }
    else {
      piVar17 = (int *)0x0;
    }
    for (; piVar17 != (int *)(temp_v5 + temp_v0 * 4); piVar17 = piVar17 + 1) {
      if (*piVar17 != 0) {
        temp_v1 = *piVar17 + (int)piVar17;
      }
      else {
        temp_v1 = 0;
      }
      temp_v6 = *(int *)(temp_v1 + 0x2c);
      if (*(int *)(temp_v1 + 0x30) != 0) {
        temp_v1 = temp_v1 + 0x30 + *(int *)(temp_v1 + 0x30);
      }
      else {
        temp_v1 = 0;
      }
      if (*piVar17 != 0) {
        temp_v2 = *piVar17 + (int)piVar17;
      }
      else {
        temp_v2 = 0;
      }
      temp_v7 = *(int *)(temp_v2 + 0x30);
      if (temp_v7 != 0) {
        piVar16 = (int *)(temp_v7 + temp_v2 + 0x30);
      }
      else {
        piVar16 = (int *)0x0;
      }
      for (; piVar16 != (int *)(temp_v1 + temp_v6 * 4); piVar16 = piVar16 + 1) {
        if (*piVar16 != 0) {
          temp_v2 = *piVar16 + (int)piVar16;
        }
        else {
          temp_v2 = 0;
        }
        temp_v7 = *(int *)(temp_v2 + 0xc);
        if (*(int *)(temp_v2 + 0x10) != 0) {
          temp_v2 = temp_v2 + 0x10 + *(int *)(temp_v2 + 0x10);
        }
        else {
          temp_v2 = 0;
        }
        if (*piVar16 != 0) {
          temp_v3 = *piVar16 + (int)piVar16;
        }
        else {
          temp_v3 = 0;
        }
        temp_v8 = *(int *)(temp_v3 + 0x10);
        if (temp_v8 != 0) {
          piVar15 = (int *)(temp_v8 + temp_v3 + 0x10);
        }
        else {
          piVar15 = (int *)0x0;
        }
        for (; piVar15 != (int *)(temp_v2 + temp_v7 * 4); piVar15 = piVar15 + 1) {
          if (*piVar15 != 0) {
            piVar6 = (int *)(*piVar15 + (int)piVar15);
          }
          else {
            piVar6 = (int *)0x0;
          }
          temp_v3 = *piVar6;
          if (piVar6[1] != 0) {
            temp_v8 = (int)piVar6 + piVar6[1] + 4;
          }
          else {
            temp_v8 = 0;
          }
          if (*piVar15 != 0) {
            temp_v4 = *piVar15 + (int)piVar15;
          }
          else {
            temp_v4 = 0;
          }
          temp_v9 = *(int *)(temp_v4 + 4);
          if (temp_v9 != 0) {
            piVar6 = (int *)(temp_v4 + 4 + temp_v9);
          }
          else {
            piVar6 = (int *)0x0;
          }
          for (; piVar6 != (int *)(temp_v8 + temp_v3 * 4); piVar6 = piVar6 + 1) {
            if (*piVar6 != 0) {
              temp_v4 = *piVar6 + (int)piVar6;
            }
            else {
              temp_v4 = 0;
            }
            *(unsigned int *)(temp_v4 + 0x14) = param_2;
          }
        }
      }
    }
  }
  return;
}
