/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003639d0` (_code @ 0x3639d0, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_0015903c(int *);


int FUN_003639d0(int *param_1)

{
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v2 = 0;
  temp_v1 = 0;
  temp_v3 = *(int *)(*param_1 + 0x18);
  if (0 < temp_v3) {
    do {
      temp_v0 = *(int *)(*param_1 + 0x1c);
      if (temp_v0 != 0) {
        temp_v0 = *param_1 + 0x1c + temp_v0;
      }
      else {
        temp_v0 = 0;
      }
      temp_v4 = 0;
      if (temp_v0 != 0) {
        piVar1 = (int *)(temp_v0 + temp_v1 * 0x10 + 0x28);
        temp_v4 = *piVar1;
        if (temp_v4 == 0) {
          temp_v4 = 0;
        }
        else {
          temp_v4 = (int)piVar1 + temp_v4;
        }
      }
      temp_v0 = FUN_0015903c(&temp_v4);
      temp_v1 = temp_v1 + 1;
      temp_v2 = temp_v2 + ((temp_v0 + 0xbU) & 0xfffffffc);
    } while (temp_v1 < temp_v3);
  }
  return temp_v2;
}
