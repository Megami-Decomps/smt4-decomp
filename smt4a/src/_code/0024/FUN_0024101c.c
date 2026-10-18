/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024101c` (_code @ 0x24101c, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


unsigned int FUN_0024101c(int param_1,int param_2)

{
  int temp_v0;
  
  temp_v0 = 0;
  do {
    if (*(char *)(param_1 + temp_v0) != *(char *)(param_2 + temp_v0)) {
      return 1;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x15);
  return 0;
}
