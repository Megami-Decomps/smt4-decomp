/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039a184` (_code @ 0x39a184, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(unsigned int *);
int FUN_00237210(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_00237210. */


void FUN_0039a184(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_00237210(*param_1);
  FUN_00237210(param_1[1]);
  FUN_00237210(param_1[2]);
  FUN_00237210(param_1[4]);
  FUN_0019a5a0(param_1);
  return;
}

} /* extern "C" */
