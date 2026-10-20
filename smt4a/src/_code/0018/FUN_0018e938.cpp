/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018e938` (_code @ 0x18e938, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;


int FUN_0018e938(int param_1)

{
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v2 = 0;
  temp_v3 = 0;
  if (*(int *)(param_1 + 0x38) >= 1) {
    temp_v4 = 0;
    do {
      temp_v1 = 0;
      if (*(int *)(param_1 + 0x3c) != 0) {
        temp_v1 = param_1 + 0x3c + *(int *)(param_1 + 0x3c);
      }
      piVar2 = (int *)(temp_v1 + temp_v3 * 4);
      temp_v0 = *piVar2;
      temp_v1 = 0;
      if (temp_v0 != 0) {
        temp_v1 = (int)piVar2 + temp_v0;
      }
      if ((*(unsigned int *)(temp_v1 + 8) & 1) != 0) {
        temp_v2 = temp_v2 + 1;
        temp_v0 = temp_v4;
      }
      else {
        temp_v0 = temp_v4 + 2;
        if ((*(unsigned int *)(temp_v1 + 8) & 2) != 0) {
          temp_v2 = temp_v2 + *(int *)(temp_v1 + 0x28);
          temp_v0 = temp_v4 + 2;
        }
        else {
          temp_v2 = temp_v2 + 1;
        }
      }
      temp_v3 = temp_v3 + 1;
      temp_v4 = temp_v0;
    } while (temp_v3 < *(int *)(param_1 + 0x38));
    temp_v0 = temp_v0 + 6;
    if (0 < temp_v2 - 1) {
      temp_v0 = (temp_v0 + temp_v2 * 6) - 6;
    }
  }
  else {
    temp_v0 = 6;
  }
  return temp_v0 << 2;
}

} /* extern "C" */
