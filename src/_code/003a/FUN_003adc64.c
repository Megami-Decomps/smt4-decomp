/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003adc64` (_code @ 0x3adc64, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_5_stack;

extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_00289f18. */


void FUN_003adc64(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  FUN_00289f18(DAT_00439ca8 + 0x2460,param_3,param_2,param_4,param_5,0);
  return;
}
