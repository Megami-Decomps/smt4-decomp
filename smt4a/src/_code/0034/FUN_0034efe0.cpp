/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034efe0` (_code @ 0x34efe0, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;


int FUN_0034efe0(int param_1)

{
  if ((*(short *)(param_1 + 0x32c) == 2) && (*(char *)(param_1 + 0x330) != '\0')) {
    return (int)*(char *)(param_1 + 0x366);
  }
  return 1;
}

} /* extern "C" */
