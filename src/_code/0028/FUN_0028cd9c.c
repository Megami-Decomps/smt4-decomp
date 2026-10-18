/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028cd9c` (_code @ 0x28cd9c, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_00232cfc. */
/* Supplied declaration required: FUN_002b4854. */


void FUN_0028cd9c(unsigned int param_1,int param_2,unsigned int *param_3,unsigned int *param_4)

{
/* irregular: 2 native warning(s); review required */
  *param_3 = 0;
  *param_4 = 0;
  FUN_002b4854();
  if (param_2 != 0) {
    FUN_00232cfc(param_1,param_2,1,param_3,param_4);
  }
  return;
}
