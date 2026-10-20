/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e5694` (_code @ 0x2e5694, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001025f8(unsigned int, unsigned int, int, unsigned int, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_001025f8. */


void FUN_002e5694(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  FUN_001025f8(param_2,param_1,8,param_3,param_4);
  return;
}

} /* extern "C" */
