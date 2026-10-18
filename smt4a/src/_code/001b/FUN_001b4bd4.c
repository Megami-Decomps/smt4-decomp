/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b4bd4` (_code @ 0x1b4bd4, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_1_stack;


int FUN_001b4bd4(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v1 = 1;
  temp_v0 = 0;
  temp_v2 = 500;
  do {
    temp_v4 = temp_v1 + ((unsigned int)(temp_v1 >> 0x1f) >> 0x1d);
    temp_v3 = temp_v1 % 8;
    temp_v1 = temp_v1 + 1;
    if (((unsigned int)*(unsigned char *)(param_1 + (temp_v4 >> 3)) & (1 << (temp_v3 & 0xff))) != 0) {
      temp_v0 = temp_v0 + 1;
    }
    temp_v2 = temp_v2 - 1;
  } while (temp_v2 != 0);
  return temp_v0;
}
