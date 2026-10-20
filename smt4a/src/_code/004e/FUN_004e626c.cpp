/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e626c` (_code @ 0x4e626c, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


void FUN_004e626c(int param_1,int param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 0x85;
  temp_v1 = 0;
  do {
    temp_v0 = param_1 + param_2 * 0x1254 + temp_v1 * 0x10;
    temp_v2 = temp_v2 - 1;
    *(unsigned short *)(temp_v0 + 0x9e4) = 0;
    *(unsigned short *)(temp_v0 + 0x9e6) = 0;
    *(unsigned int *)(temp_v0 + 0x9e8) = 0;
    temp_v1 = temp_v1 + 1;
    *(unsigned int *)(temp_v0 + 0x9ec) = 0;
  } while (temp_v2 != 0);
  return;
}

} /* extern "C" */
