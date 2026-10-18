/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00156e7c` (_code @ 0x156e7c, 0x1a0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_00156e7c(unsigned int *param_1)

{
  int temp_v0;
  int *piVar2;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *unaff_r5;
  unsigned int *puVar7;
  int *piVar8;
  
  puVar7 = (unsigned int *)*param_1;
  if ((puVar7 != (unsigned int *)0x0) && ((~*puVar7 & 0x80000002) != 0)) {
    puVar7 = (unsigned int *)0x0;
  }
  if (puVar7 != (unsigned int *)0x0) {
    if (puVar7[0xe] != 0) {
      (**(romwright_code **)(*(int *)puVar7[0x11] + 0xc))();
      puVar7[0xe] = 0;
      puVar7[0xf] = 0;
    }
    if (puVar7[0x10] != 0) {
      (**(romwright_code **)(*(int *)puVar7[0x11] + 0xc))();
      puVar7[0x10] = 0;
    }
    temp_v1 = puVar7[0xb];
    if (temp_v1 != 0) {
      unaff_r5 = (int *)((int)puVar7 + temp_v1 + 0x2c);
    }
    if (temp_v1 == 0) {
      unaff_r5 = (int *)0x0;
    }
    piVar8 = unaff_r5 + puVar7[10];
    for (; unaff_r5 != piVar8; unaff_r5 = unaff_r5 + 1) {
      if (*unaff_r5 != 0) {
        temp_v4 = *unaff_r5 + (int)unaff_r5;
      }
      else {
        temp_v4 = 0;
      }
      if (temp_v4 != 0) {
        temp_v3 = *(int *)(temp_v4 + 0x14);
        temp_v2 = 0;
        if (temp_v2 < temp_v3) {
          do {
            if (*(int *)(temp_v4 + 0x18) != 0) {
              temp_v0 = temp_v4 + 0x18 + *(int *)(temp_v4 + 0x18);
            }
            else {
              temp_v0 = 0;
            }
            piVar2 = (int *)(temp_v0 + temp_v2 * 4);
            temp_v0 = *piVar2;
            temp_v2 = temp_v2 + 1;
            if (temp_v0 != 0) {
              temp_v0 = (int)piVar2 + temp_v0;
            }
            else {
              temp_v0 = 0;
            }
            *(unsigned int *)(temp_v0 + 8) = 0xffffffff;
            *(unsigned char *)(temp_v0 + 5) = 0;
          } while (temp_v2 < temp_v3);
        }
        *(unsigned int *)(temp_v4 + 0x74) = 0;
        if (*(int *)(temp_v4 + 0x7c) != 0) {
          if (*(int *)(temp_v4 + 0x84) != 0) {
            temp_v2 = temp_v4 + 0x84 + *(int *)(temp_v4 + 0x84);
          }
          else {
            temp_v2 = 0;
          }
          (**(romwright_code **)(**(int **)(temp_v2 + 0x44) + 0xc))();
          *(unsigned int *)(temp_v4 + 0x7c) = 0;
          *(unsigned int *)(temp_v4 + 0x80) = 0;
        }
      }
    }
    temp_v4 = 0;
    if (temp_v4 < (int)puVar7[0xc]) {
      do {
        temp_v1 = puVar7[0xd];
        if (temp_v1 != 0) {
          temp_v2 = (int)puVar7 + temp_v1 + 0x34;
        }
        else {
          temp_v2 = 0;
        }
        if (*(int *)(temp_v2 + temp_v4 * 4) != 0) {
          if (temp_v1 != 0) {
            temp_v2 = (int)puVar7 + temp_v1 + 0x34;
          }
          else {
            temp_v2 = 0;
          }
          *(unsigned int *)(temp_v2 + temp_v4 * 4) = 0;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < (int)puVar7[0xc]);
    }
    puVar7[0x11] = 0;
  }
  return;
}
