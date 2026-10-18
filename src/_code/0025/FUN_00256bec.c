/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00256bec` (_code @ 0x256bec, 0x4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


void FUN_00256bec(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = 0;
  temp_v2 = 0x85;
  do {
    temp_v2 = temp_v2 - 1;
    temp_v0 = param_1 + param_2 * 0xf1c + temp_v1 * 10;
    temp_v1 = temp_v1 + 1;
    *(unsigned short *)(temp_v0 + 0x9d4) = 0;
    *(unsigned short *)(temp_v0 + 0x9d6) = 0;
    *(unsigned short *)(temp_v0 + 0x9d8) = 0;
    *(unsigned short *)(temp_v0 + 0x9da) = 0;
  } while (temp_v2 != 0);
  return;
}
