/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00351e24` (_code @ 0x351e24, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_001466bc. */
/* Supplied declaration required: FUN_002c5fbc. */
/* Supplied declaration required: FUN_00351ef8. */
/* Supplied declaration required: FUN_0035a1a0. */


int FUN_00351e24(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1;
  FUN_002c5fbc();
  FUN_0035a1a0();
  FUN_001466bc();
  if (temp_v0 != 0) {
    FUN_00351ef8(param_1,param_2);
    return param_1;
  }
  return -0x36df607c;
}
