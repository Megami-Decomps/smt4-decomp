/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003353cc` (_code @ 0x3353cc, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;


void FUN_003353cc(int param_1)

{
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar6;
  int temp_v4;
  
  puVar1 = *(unsigned int **)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 8) + 0x2c) + 8);
  if ((puVar1 != (unsigned int *)0x0) && ((~*puVar1 & 0x40000092) != 0)) {
    puVar1 = (unsigned int *)0x0;
  }
  temp_v1 = puVar1[0x38];
  if (temp_v1 != 0) {
    temp_v0 = (int)(puVar1 + 0x38) + temp_v1;
  }
  else {
    temp_v0 = 0;
  }
  temp_v1 = 0;
  if (*(int *)(temp_v0 + 0x18) != 0) {
    do {
      temp_v4 = *(int *)(temp_v0 + 0x1c);
      if (temp_v4 != 0) {
        temp_v2 = temp_v0 + 0x1c + temp_v4;
      }
      else {
        temp_v2 = 0;
      }
      temp_v3 = 0;
      if (temp_v2 != 0) {
        piVar6 = (int *)(temp_v2 + temp_v1 * 0x10 + 0x28);
        temp_v3 = *piVar6;
        if (temp_v3 == 0) {
          temp_v3 = 0;
        }
        else {
          temp_v3 = temp_v3 + (int)piVar6;
        }
      }
      if (temp_v4 != 0) {
        temp_v4 = temp_v0 + 0x1c + temp_v4;
      }
      else {
        temp_v4 = 0;
      }
      temp_v2 = 0;
      if (temp_v4 != 0) {
        piVar6 = (int *)(temp_v4 + temp_v1 * 0x10 + 0x28);
        temp_v2 = *piVar6;
        if (temp_v2 == 0) {
          temp_v2 = 0;
        }
        else {
          temp_v2 = (int)piVar6 + temp_v2;
        }
      }
      temp_v1 = temp_v1 + 1;
      *(unsigned int *)(temp_v2 + 4) = *(unsigned int *)(temp_v3 + 4) & 0xfffffdbf;
    } while (temp_v1 < *(unsigned int *)(temp_v0 + 0x18));
  }
  return;
}
