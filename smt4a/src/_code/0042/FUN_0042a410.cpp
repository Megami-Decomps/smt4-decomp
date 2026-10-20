/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042a410` (_code @ 0x42a410, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0042a270(unsigned int, unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_6_stack;

/* Supplied declaration required: FUN_0042a270. */


void FUN_0042a410(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 1 native warning(s); review required */
  FUN_0042a270(param_1,param_2,0,param_3,param_4,param_5,param_6);
  return;
}

} /* extern "C" */
