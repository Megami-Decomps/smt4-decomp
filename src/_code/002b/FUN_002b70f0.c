/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b70f0` (_code @ 0x2b70f0, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_002aec80. */


void FUN_002b70f0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  FUN_002aec80(2,0x13,param_1,param_2,param_3,param_4);
                    /* WARNING: Treating indirect jump as return */
  return;
}
