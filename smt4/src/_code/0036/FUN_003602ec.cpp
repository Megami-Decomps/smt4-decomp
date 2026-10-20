/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003602ec` (_code @ 0x3602ec, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c52f8(void);
int FUN_00360680(unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

/* Supplied declaration required: FUN_002c52f8. */
/* Supplied declaration required: FUN_00360680. */


void FUN_003602ec(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = -0x7fff;
  FUN_00360680(0xffff8001,param_1,param_2,param_3);
  if (temp_v0 < 0) {
    FUN_002c52f8();
    return;
  }
  return;
}

} /* extern "C" */
