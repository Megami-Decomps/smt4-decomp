/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a9ef8` (_code @ 0x3a9ef8, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;


void FUN_003a9ef8(int param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = *(unsigned int *)(param_1 + 0x4850);
  if (0 < (int)temp_v2) {
    temp_v0 = temp_v2 & 1;
    if (temp_v0 == 1) {
      *(unsigned char *)(param_1 + 0x4870) = 0;
    }
    temp_v1 = (unsigned int)(temp_v0 == 1);
    if ((int)temp_v0 < (int)temp_v2) {
      do {
        *(unsigned char *)(param_1 + temp_v1 * 0x40 + 0x4870) = 0;
        *(unsigned char *)(param_1 + (temp_v1 + 1) * 0x40 + 0x4870) = 0;
        temp_v0 = temp_v0 + 2;
        temp_v1 = temp_v1 + 2;
      } while ((int)temp_v0 < (int)*(unsigned int *)(param_1 + 0x4850));
    }
  }
  return;
}
