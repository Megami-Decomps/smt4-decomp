/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00439664` (_code @ 0x439664, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00426204(void);
int FUN_00439870(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00426204. */
/* Supplied declaration required: FUN_00439870. */


void FUN_00439664(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1;
  FUN_00426204();
  if (temp_v0 != 0) {
    FUN_00439870(param_1);
    return;
  }
  return;
}

} /* extern "C" */
