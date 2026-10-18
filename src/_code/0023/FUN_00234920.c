/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00234920` (_code @ 0x234920, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_002b49a0. */
extern unsigned int FUN_002b49d8(unsigned int);


void FUN_00234920(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002b49d8(0x41);
  if (param_2 != -1) {
    FUN_002b49a0(temp_v0,param_2,0);
    return;
  }
  return;
}
