/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d2350` (_code @ 0x2d2350, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;


void FUN_002d2350(int param_1,unsigned char *param_2)

{
  int temp_v0;
  int temp_v1;
  
  if (param_1 >= 10) {
    temp_v0 = (param_1 / 10) * 2;
    *param_2 = *(unsigned char *)(temp_v0 + 0x2d23d4);
    temp_v1 = (param_1 % 10) * 2;
    param_2[1] = *(unsigned char *)(temp_v0 + 0x2d23d5);
    param_2[2] = *(unsigned char *)(temp_v1 + 0x2d23d4);
    param_2[3] = *(unsigned char *)(temp_v1 + 0x2d23d5);
    param_2[4] = 0;
    return;
  }
  *param_2 = *(unsigned char *)(param_1 * 2 + 0x2d23d4);
  param_2[1] = *(unsigned char *)(param_1 * 2 + 0x2d23d5);
  param_2[2] = 0;
  return;
}

} /* extern "C" */
