/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023a2ec` (_code @ 0x23a2ec, 0x1c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

/* Supplied declaration required: FUN_003fa05c. */


void FUN_0023a2ec(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int uStack_4;
  
  uStack_4 = param_4;
  FUN_003fa05c(param_1,param_2,param_3,&uStack_4);
                    /* WARNING: Treating indirect jump as return */
  return;
}
