/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00288844` (_code @ 0x288844, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ae9ec(int, int, int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_002ae9ec. */


void FUN_00288844(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  FUN_002ae9ec(2,0x13,9,param_1,param_2,param_3);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
