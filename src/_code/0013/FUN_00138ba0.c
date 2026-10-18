/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138ba0` (_code @ 0x138ba0, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_3_stack;


void FUN_00138ba0(int param_1,int param_2,int param_3)

{
  int temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = 0;
  do {
    temp_v1 = temp_v0;
    temp_v2 = *(unsigned short *)(param_1 + temp_v1 * 2);
    temp_v3 = (unsigned int)temp_v2;
    if (temp_v3 == 0) break;
    if (temp_v3 - 0xff01 < 0x5e) {
      temp_v2 = temp_v2 + 0x120;
    }
    else if (temp_v3 == 0x3000) {
      temp_v2 = 0x20;
    }
    *(unsigned short *)(param_2 + temp_v1 * 2) = temp_v2;
    temp_v0 = temp_v1 + 1;
  } while (temp_v1 + 1 < param_3);
  *(unsigned short *)(param_2 + temp_v1 * 2) = 0;
  return;
}
