/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00207470` (_code @ 0x207470, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b2344(unsigned int);
int FUN_002c0894(void);
int FUN_002c415c(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_002b2344. */
/* Supplied declaration required: FUN_002c0894. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_00207470(int param_1)

{
/* irregular: 3 native warning(s); review required */
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_002c0894();
  }
  FUN_002b2344(*(unsigned int *)(param_1 + 0x18));
  FUN_002c415c(param_1);
  return;
}

} /* extern "C" */
