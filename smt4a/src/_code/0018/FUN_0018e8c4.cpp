/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018e8c4` (_code @ 0x18e8c4, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_2_stack;


int FUN_0018e8c4(int param_1,int param_2)

{
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = 0xc;
  temp_v3 = 0;
  if (temp_v3 < *(int *)(param_1 + 0x38)) {
    do {
      temp_v0 = 0;
      if (*(int *)(param_1 + 0x3c) != 0) {
        temp_v0 = param_1 + 0x3c + *(int *)(param_1 + 0x3c);
      }
      piVar1 = (int *)(temp_v0 + temp_v3 * 4);
      temp_v2 = *piVar1;
      temp_v3 = temp_v3 + 1;
      temp_v0 = 0;
      if (temp_v2 != 0) {
        temp_v0 = (int)piVar1 + temp_v2;
      }
      if ((*(unsigned int *)(temp_v0 + 8) & 1) != 0) {
        temp_v1 = temp_v1 + 6;
      }
      else {
        temp_v1 = temp_v1 + 4;
      }
    } while (temp_v3 < *(int *)(param_1 + 0x38));
  }
  if (-1 < *(int *)(param_2 + 0x10)) {
    temp_v1 = temp_v1 + 4;
  }
  return temp_v1 << 2;
}

} /* extern "C" */
