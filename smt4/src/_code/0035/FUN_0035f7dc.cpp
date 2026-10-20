/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035f7dc` (_code @ 0x35f7dc, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023793c(void);
int FUN_0035f9e8(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0023793c. */
/* Supplied declaration required: FUN_0035f9e8. */


void FUN_0035f7dc(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1;
  FUN_0023793c();
  if (temp_v0 != 0) {
    FUN_0035f9e8(param_1);
    return;
  }
  return;
}

} /* extern "C" */
