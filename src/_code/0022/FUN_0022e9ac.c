/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022e9ac` (_code @ 0x22e9ac, 0x210 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;


void FUN_0022e9ac(int param_1,int param_2)

{
  int temp_v0;
  int *piVar2;
  unsigned int *puVar3;
  
  piVar2 = (int *)(param_1 + 0x15d3c);
  puVar3 = (unsigned int *)(param_1 + 0x15d2c);
  *piVar2 = 0;
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 == 2) {
        if (0 < *(int *)(param_1 + 0x9e4)) {
          *puVar3 = 3;
          *piVar2 = 1;
        }
        if (0 < *(int *)(param_1 + 0xa58)) {
          *(unsigned int *)(param_1 + *piVar2 * 4 + 0x15d2c) = 4;
          *piVar2 = *piVar2 + 1;
        }
        if (0 < *(int *)(param_1 + 0xacc)) {
          *(unsigned int *)(param_1 + *piVar2 * 4 + 0x15d2c) = 5;
          *piVar2 = *piVar2 + 1;
        }
        if (0 < *(int *)(param_1 + 0xb40)) {
          *(unsigned int *)(param_1 + *piVar2 * 4 + 0x15d2c) = 6;
          *piVar2 = *piVar2 + 1;
        }
      }
    }
    else {
      if (0 < *(int *)(param_1 + 0x888)) {
        *puVar3 = 0;
        *piVar2 = 1;
      }
      if (0 < *(int *)(param_1 + 0x8fc)) {
        *(unsigned int *)(param_1 + *piVar2 * 4 + 0x15d2c) = 1;
        *piVar2 = *piVar2 + 1;
      }
      if (0 < *(int *)(param_1 + 0x970)) {
        *(unsigned int *)(param_1 + *piVar2 * 4 + 0x15d2c) = 2;
        *piVar2 = *piVar2 + 1;
        return;
      }
    }
    return;
  }
  temp_v0 = *(int *)(param_1 + 0x888);
  if (temp_v0 < 1) {
    temp_v0 = *(int *)(param_1 + 0x8fc);
  }
  if (temp_v0 < 1) {
    temp_v0 = *(int *)(param_1 + 0x970);
  }
  if (0 < temp_v0) {
    *puVar3 = 0;
    *piVar2 = 1;
  }
  temp_v0 = *(int *)(param_1 + 0x9e4);
  if (temp_v0 < 1) {
    temp_v0 = *(int *)(param_1 + 0xa58);
  }
  if (temp_v0 < 1) {
    temp_v0 = *(int *)(param_1 + 0xacc);
    if (temp_v0 < 1) {
      temp_v0 = *(int *)(param_1 + 0xb40);
    }
    if (temp_v0 >= 1) {
      *(unsigned int *)(param_1 + *piVar2 * 4 + 0x15d2c) = 1;
      *piVar2 = *piVar2 + 1;
    }
  }
  else {
    *(unsigned int *)(param_1 + *piVar2 * 4 + 0x15d2c) = 1;
    *piVar2 = *piVar2 + 1;
  }
  temp_v0 = *piVar2;
  if (0 < *(int *)(param_1 + 0xbb4)) {
    *(unsigned int *)(param_1 + temp_v0 * 4 + 0x15d2c) = 2;
    temp_v0 = *piVar2 + 1;
    *piVar2 = temp_v0;
  }
  *(unsigned int *)(param_1 + temp_v0 * 4 + 0x15d2c) = 3;
  *piVar2 = *piVar2 + 1;
  return;
}
