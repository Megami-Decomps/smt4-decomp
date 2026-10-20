/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c6038` (_code @ 0x3c6038, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00137ea0(int);
int FUN_001386e8(int);
int FUN_00138cf8(int);
int FUN_0019a5a0(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00137ea0. */
/* Supplied declaration required: FUN_001386e8. */
/* Supplied declaration required: FUN_00138cf8. */
extern int FUN_00164a9c(unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */


void FUN_003c6038(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_001386e8(1);
  FUN_00137ea0(1);
  FUN_00138cf8(1);
  temp_v0 = FUN_00164a9c(param_1);
  if (*(int *)(temp_v0 + 8) != 0) {
    FUN_0019a5a0();
  }
  FUN_0019a5a0(temp_v0);
  return;
}

} /* extern "C" */
