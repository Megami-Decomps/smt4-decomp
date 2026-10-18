/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014d174` (_code @ 0x14d174, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;


void FUN_0014d174(int param_1)

{
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = 0;
  temp_v1 = 0;
  temp_v2 = 0;
  temp_v3 = 4;
  do {
    if (((*(unsigned int *)(param_1 + 4) & (1 << (temp_v2 & 0xff))) != 0) && (temp_v1 = temp_v1 + 1, temp_v2 == 3))
    {
      temp_v0 = 1;
    }
    temp_v3 = temp_v3 - 1;
    temp_v2 = temp_v2 + 1;
  } while (temp_v3 != 0);
  if ((temp_v0) && (temp_v1 != 0)) {
    return;
  }
  return;
}
