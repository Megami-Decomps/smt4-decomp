/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015e3d8` (_code @ 0x15e3d8, 0x174 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002a2058. */


void FUN_0015e3d8(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = 0;
  temp_v0 = *(int *)*param_1;
  if (temp_v0 != 0) {
    temp_v0 = *param_1 + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    temp_v3 = *(int *)(temp_v0 + 8);
    if (temp_v3 != 0) {
      temp_v3 = temp_v0 + 8 + temp_v3;
    }
    else {
      temp_v3 = 0;
    }
    if (temp_v3 != 0) {
      FUN_002a2058(&temp_v3);
    }
  }
  temp_v0 = *(int *)(*param_1 + 4);
  if (temp_v0 != 0) {
    temp_v0 = *param_1 + 4 + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    temp_v3 = *(int *)(temp_v0 + 8);
    if (temp_v3 != 0) {
      temp_v3 = temp_v0 + 8 + temp_v3;
    }
    else {
      temp_v3 = 0;
    }
    if (temp_v3 != 0) {
      FUN_002a2058(&temp_v3);
    }
  }
  temp_v0 = *(int *)(*param_1 + 8);
  if (temp_v0 != 0) {
    temp_v0 = *param_1 + 8 + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    temp_v3 = *(int *)(temp_v0 + 8);
    if (temp_v3 != 0) {
      temp_v3 = temp_v0 + 8 + temp_v3;
    }
    else {
      temp_v3 = 0;
    }
    if (temp_v3 != 0) {
      FUN_002a2058(&temp_v3);
    }
  }
  temp_v0 = *(int *)(*param_1 + 0xc);
  if (temp_v0 != 0) {
    temp_v0 = *param_1 + 0xc + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    temp_v3 = *(int *)(temp_v0 + 8);
    if (temp_v3 != 0) {
      temp_v3 = temp_v0 + 8 + temp_v3;
    }
    else {
      temp_v3 = 0;
    }
    if (temp_v3 != 0) {
      FUN_002a2058(&temp_v3);
    }
  }
  temp_v0 = *(int *)(*param_1 + 0x10);
  if (temp_v0 != 0) {
    temp_v0 = *param_1 + 0x10 + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    temp_v3 = *(int *)(temp_v0 + 8);
    if (temp_v3 != 0) {
      temp_v3 = temp_v0 + 8 + temp_v3;
    }
    else {
      temp_v3 = 0;
    }
    if (temp_v3 != 0) {
      FUN_002a2058(&temp_v3);
    }
  }
  temp_v0 = *(int *)(*param_1 + 0x14);
  if (temp_v0 != 0) {
    temp_v0 = *param_1 + 0x14 + temp_v0;
  }
  else {
    temp_v0 = 0;
  }
  if (temp_v0 != 0) {
    temp_v1 = *(int *)(temp_v0 + 8);
    if (temp_v1 != 0) {
      temp_v2 = temp_v1 + temp_v0 + 8;
    }
    if (temp_v2 != 0) {
      temp_v3 = temp_v2;
      FUN_002a2058(&temp_v3);
    }
  }
  return;
}
