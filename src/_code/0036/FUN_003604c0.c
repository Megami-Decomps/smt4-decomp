/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003604c0` (_code @ 0x3604c0, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

/* Supplied declaration required: FUN_002bce48. */
/* Supplied declaration required: FUN_00360834. */


void FUN_003604c0(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = -0x7fff;
  FUN_00360834(0xffff8001,param_1,param_2,param_3);
  if (temp_v0 < 0) {
    FUN_002bce48();
    return;
  }
  return;
}
