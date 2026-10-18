/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002621b4` (_code @ 0x2621b4, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_00258de0. */
/* Supplied declaration required: FUN_002ae164. */


void FUN_002621b4(unsigned int param_1,unsigned int param_2,int param_3,unsigned int *param_4)

{
/* irregular: 2 native warning(s); review required */
  *param_4 = 0;
  FUN_002ae164();
  if (param_3 != 0) {
    FUN_00258de0(param_1,param_2,param_3,1,param_4);
  }
  return;
}
