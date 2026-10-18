/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013dadc` (_code @ 0x13dadc, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_00152914. */
/* Supplied declaration required: FUN_00153630. */


unsigned int FUN_0013dadc(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1;
  FUN_00153630();
  if (temp_v0 == 0) {
    FUN_00152914(param_1,param_2,0);
  }
  return 1;
}
