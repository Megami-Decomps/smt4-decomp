/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005015b0` (_code @ 0x5015b0, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;


unsigned int * FUN_005015b0(char *param_1,unsigned int *param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  temp_v4 = (*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) - 1;
  temp_v5 = (*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc)) - 1;
  if (*param_1 == '\0') {
    temp_v2 = 0;
  }
  else {
    temp_v2 = 3;
  }
  *param_2 = temp_v2;
  param_2[1] = 0x802f0065;
  temp_v1 = *(unsigned int *)(param_1 + 4);
  if ((int)temp_v1 < 0) {
    temp_v1 = 0;
  }
  else if (*(int *)(param_1 + 0x14) <= (int)temp_v1) {
    temp_v1 = *(int *)(param_1 + 0x14) - 1;
  }
  temp_v3 = *(int *)(param_1 + 8);
  if (temp_v3 < 0) {
    temp_v0 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x18) <= temp_v3) {
      temp_v3 = *(int *)(param_1 + 0x18) - 1;
    }
    temp_v0 = temp_v3 << 0x10;
  }
  param_2[2] = temp_v0 | temp_v1;
  if ((int)temp_v5 < 0) {
    temp_v5 = 0;
  }
  else {
    if (temp_v4 < 0) {
      temp_v4 = 0;
    }
    temp_v5 = temp_v5 | (temp_v4 << 0x10);
  }
  param_2[3] = temp_v5;
  return param_2 + 4;
}

} /* extern "C" */
