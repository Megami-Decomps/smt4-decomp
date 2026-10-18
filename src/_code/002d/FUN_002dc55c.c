/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dc55c` (_code @ 0x2dc55c, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;


int FUN_002dc55c(int param_1)

{
  if ((*(short *)(param_1 + 0x214) == 2) && (*(char *)(param_1 + 0x218) != '\0')) {
    return (int)*(char *)(param_1 + 0x24e);
  }
  return 1;
}
