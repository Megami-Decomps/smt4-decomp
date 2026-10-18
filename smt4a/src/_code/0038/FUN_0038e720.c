/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038e720` (_code @ 0x38e720, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;


void FUN_0038e720(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = 0;
  temp_v0 = 0;
  do {
    temp_v2 = temp_v1 + 1;
    temp_v0 = temp_v0 + 2;
    *(unsigned short *)(param_1 + temp_v1 * 2 + 0x24a0) = 0xffff;
    temp_v1 = temp_v1 + 2;
    *(unsigned short *)(param_1 + temp_v2 * 2 + 0x24a0) = 0xffff;
  } while (temp_v0 < 10);
  return;
}
