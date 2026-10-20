/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b2040` (_code @ 0x1b2040, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b6668(int, int);
int FUN_001b9f70(int);
int FUN_001b9f8c(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_001b6668. */
/* Supplied declaration required: FUN_001b9f70. */
/* Supplied declaration required: FUN_001b9f8c. */


void FUN_001b2040(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  FUN_001b6668(param_1 + 4,param_2 + 0x1b0);
  if (param_2 != 0) {
    FUN_001b9f70(param_2);
    FUN_001b9f8c(param_1,param_2);
    return;
  }
  return;
}

} /* extern "C" */
