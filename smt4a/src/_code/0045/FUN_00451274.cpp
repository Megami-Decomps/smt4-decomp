/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00451274` (_code @ 0x451274, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6354(int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int DAT_00589190; /* 0x589190 */

/* Supplied declaration required: FUN_002e6354. */


void FUN_00451274(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar7;
  unsigned int temp_v4;
  int *unaff_r9;
  unsigned int *unaff_r11;
  unsigned char temp_v5;
  
  temp_v0 = *param_1;
  temp_v1 = *(int *)(temp_v0 + 0x10);
  if (temp_v1 != 0) {
    unaff_r9 = (int *)(temp_v1 + temp_v0 + 0x10);
  }
  if (temp_v1 == 0) {
    unaff_r9 = (int *)0x0;
  }
  piVar1 = unaff_r9 + *(int *)(temp_v0 + 0xc);
  temp_v5 = unaff_r9 != piVar1;
  if (temp_v5) {
    unaff_r11 = &DAT_00589190;
  }
  while (temp_v5) {
    temp_v2 = 0;
    if (*unaff_r9 != 0) {
      puVar7 = (unsigned int *)(*unaff_r9 + (int)unaff_r9);
    }
    else {
      puVar7 = (unsigned int *)0x0;
    }
    temp_v4 = *puVar7;
    if (puVar7[3] != 0) {
      temp_v0 = (int)puVar7 + puVar7[3] + 0xc;
    }
    else {
      temp_v0 = 0;
    }
    if (temp_v4 != 0) {
      do {
        if (puVar7[1] != 0) {
          temp_v1 = (int)puVar7 + puVar7[1] + 4;
        }
        else {
          temp_v1 = 0;
        }
        piVar2 = (int *)(temp_v1 + temp_v2 * 4);
        temp_v1 = *piVar2;
        if (temp_v1 != 0) {
          temp_v3 = temp_v1 + (int)piVar2;
        }
        else {
          temp_v3 = 0;
        }
        if (temp_v3 != 0) {
          temp_v1 = *(int *)(temp_v3 + 0x18);
        }
        if (temp_v3 != 0 && temp_v1 != 0) {
          (**(romwright_code **)(*(int *)puVar7[5] + 0xc))();
          *(unsigned int *)(temp_v3 + 0x18) = 0;
          *(unsigned int *)(temp_v3 + 0x1c) = 0;
        }
        if (*(int *)(temp_v3 + 0x24) != 0) {
          (*(romwright_code *)*unaff_r11)
                    (*(int *)(temp_v3 + 0x24),0x102,*(unsigned int *)(temp_v0 + temp_v2 * 4),
                     *(unsigned int *)(temp_v3 + 0x20));
          *(unsigned int *)(temp_v3 + 0x20) = 0;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < temp_v4);
    }
    FUN_002e6354(temp_v0,temp_v4 << 2);
    puVar7[5] = 0;
    unaff_r9 = unaff_r9 + 1;
    puVar7[4] = puVar7[4] & 0xfffffffe;
    temp_v5 = unaff_r9 != piVar1;
  }
  return;
}

} /* extern "C" */
