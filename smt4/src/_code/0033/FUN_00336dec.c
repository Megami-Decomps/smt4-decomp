/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00336dec` (_code @ 0x336dec, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;


int FUN_00336dec(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = 0;
  temp_v1 = 4;
  do {
    temp_v2 = *(int *)(param_1 + 0x1e98) + temp_v1 * 0x114;
    temp_v3 = *(unsigned int *)(temp_v2 + 0x50);
    if (((temp_v3 & 1) != 0 && (temp_v3 & 0x80) != 0) && (*(char *)(temp_v2 + 0x44) == param_2)) {
      temp_v0 = temp_v0 + 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x36);
  return temp_v0;
}
