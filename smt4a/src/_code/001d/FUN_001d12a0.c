/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d12a0` (_code @ 0x1d12a0, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;


int FUN_001d12a0(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  if (*(unsigned short *)(param_1 + 0x10) != 0) {
    do {
      if (*(short *)(param_1 + 0x14 + temp_v0 * 0xc) == 0x5001) {
        temp_v1 = param_1 + 0x14 + temp_v0 * 0xc;
        temp_v0 = 0;
        if (temp_v1 != 0) {
          temp_v0 = *(int *)(temp_v1 + 4);
        }
        if (temp_v1 == 0 || temp_v0 == 0) {
          return 0;
        }
        return temp_v0 + param_1;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x10));
  }
  return 0;
}
