/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020214c` (_code @ 0x20214c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015325c(int, int, unsigned int, int, int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0015325c. */


void FUN_0020214c(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_0015325c(0,0,param_1,0,0,4);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
