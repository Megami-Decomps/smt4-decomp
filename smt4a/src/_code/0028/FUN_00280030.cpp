/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00280030` (_code @ 0x280030, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;


int FUN_00280030(int param_1)

{
  if ((*(short *)(param_1 + 0x32c) == 3) && (*(char *)(param_1 + 0x330) == '\0')) {
    return (int)*(char *)(param_1 + 0x366);
  }
  return 1;
}

} /* extern "C" */
