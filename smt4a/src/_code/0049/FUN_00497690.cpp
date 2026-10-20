/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00497690` (_code @ 0x497690, 0x1e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;


void FUN_00497690(int param_1,int param_2)

{
  int temp_v0;
  
  *(unsigned int *)(param_1 + 0x1601c) = 0;
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 == 2) {
        if (0 < *(int *)(param_1 + 0xcc4)) {
          *(unsigned int *)(param_1 + 0x1601c) = 1;
          *(unsigned int *)(param_1 + 0x1600c) = 3;
        }
        if (0 < *(int *)(param_1 + 0xd38)) {
          *(unsigned int *)(param_1 + *(int *)(param_1 + 0x1601c) * 4 + 0x1600c) = 4;
          *(int *)(param_1 + 0x1601c) = *(int *)(param_1 + 0x1601c) + 1;
        }
        if (0 < *(int *)(param_1 + 0xdac)) {
          *(unsigned int *)(param_1 + *(int *)(param_1 + 0x1601c) * 4 + 0x1600c) = 5;
          *(int *)(param_1 + 0x1601c) = *(int *)(param_1 + 0x1601c) + 1;
        }
        if (0 < *(int *)(param_1 + 0xe20)) {
          *(unsigned int *)(param_1 + *(int *)(param_1 + 0x1601c) * 4 + 0x1600c) = 6;
          *(int *)(param_1 + 0x1601c) = *(int *)(param_1 + 0x1601c) + 1;
        }
      }
    }
    else {
      if (0 < *(int *)(param_1 + 0xb68)) {
        *(unsigned int *)(param_1 + 0x1601c) = 1;
        *(unsigned int *)(param_1 + 0x1600c) = 0;
      }
      if (0 < *(int *)(param_1 + 0xbdc)) {
        *(unsigned int *)(param_1 + *(int *)(param_1 + 0x1601c) * 4 + 0x1600c) = 1;
        *(int *)(param_1 + 0x1601c) = *(int *)(param_1 + 0x1601c) + 1;
      }
      if (0 < *(int *)(param_1 + 0xc50)) {
        *(unsigned int *)(param_1 + *(int *)(param_1 + 0x1601c) * 4 + 0x1600c) = 2;
        *(int *)(param_1 + 0x1601c) = *(int *)(param_1 + 0x1601c) + 1;
        return;
      }
    }
    return;
  }
  temp_v0 = *(int *)(param_1 + 0xb68);
  if (temp_v0 < 1) {
    temp_v0 = *(int *)(param_1 + 0xbdc);
  }
  if (temp_v0 < 1) {
    temp_v0 = *(int *)(param_1 + 0xc50);
  }
  if (0 < temp_v0) {
    *(unsigned int *)(param_1 + 0x1601c) = 1;
    *(unsigned int *)(param_1 + 0x1600c) = 0;
  }
  temp_v0 = *(int *)(param_1 + 0xcc4);
  if (temp_v0 < 1) {
    temp_v0 = *(int *)(param_1 + 0xd38);
  }
  if (temp_v0 < 1) {
    temp_v0 = *(int *)(param_1 + 0xdac);
    if (temp_v0 < 1) {
      temp_v0 = *(int *)(param_1 + 0xe20);
    }
    if (temp_v0 >= 1) {
      *(unsigned int *)(param_1 + *(int *)(param_1 + 0x1601c) * 4 + 0x1600c) = 1;
      *(int *)(param_1 + 0x1601c) = *(int *)(param_1 + 0x1601c) + 1;
    }
  }
  else {
    *(unsigned int *)(param_1 + *(int *)(param_1 + 0x1601c) * 4 + 0x1600c) = 1;
    *(int *)(param_1 + 0x1601c) = *(int *)(param_1 + 0x1601c) + 1;
  }
  temp_v0 = *(int *)(param_1 + 0x1601c);
  if (0 < *(int *)(param_1 + 0xe94)) {
    *(unsigned int *)(param_1 + temp_v0 * 4 + 0x1600c) = 2;
    temp_v0 = *(int *)(param_1 + 0x1601c) + 1;
    *(int *)(param_1 + 0x1601c) = temp_v0;
  }
  *(unsigned int *)(param_1 + temp_v0 * 4 + 0x1600c) = 3;
  *(int *)(param_1 + 0x1601c) = *(int *)(param_1 + 0x1601c) + 1;
  return;
}

} /* extern "C" */
