/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023ce90` (_code @ 0x23ce90, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;


void FUN_0023ce90(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = 0;
  temp_v1 = 0xc;
  do {
    temp_v2 = param_1 + temp_v0 * 2;
    temp_v3 = (int)*(short *)(temp_v2 + 0x2f06);
    if ((-1 < temp_v3) &&
       ((temp_v4 = *(unsigned int *)(*(int *)(param_1 + 0x1fc0) + temp_v3 * 0x288), (temp_v4 & 1) == 0 ||
        ((temp_v4 & 0x40) != 0)))) {
      *(unsigned short *)(temp_v2 + 0x2f06) = 0xffff;
    }
    temp_v1 = temp_v1 - 1;
    temp_v0 = temp_v0 + 1;
  } while (temp_v1 != 0);
  return;
}

} /* extern "C" */
