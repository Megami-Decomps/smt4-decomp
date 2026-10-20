/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050d6a4` (_code @ 0x50d6a4, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryAlloc(int, int, int, unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: asdMemoryAlloc. */


void FUN_0050d6a4(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  asdMemoryAlloc(0x100,0x100,0,param_1,1);
  return;
}

} /* extern "C" */
