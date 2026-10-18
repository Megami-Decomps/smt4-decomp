/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00379ca4` (_code @ 0x379ca4, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

/* Supplied declaration required: FUN_00379b94. */


unsigned int FUN_00379ca4(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_00379b94();
                    /* WARNING: Treating indirect jump as return */
  return param_1;
}
