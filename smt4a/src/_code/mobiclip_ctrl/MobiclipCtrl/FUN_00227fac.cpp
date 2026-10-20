/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00227fac` (_code @ 0x227fac, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_00617cf8; /* 0x617cf8 */

extern unsigned int nn_fnd_ExpHeapBase_Allocate(unsigned int, unsigned int, int, unsigned char, int, unsigned char);


void FUN_00227fac(unsigned int param_1)

{
  nn_fnd_ExpHeapBase_Allocate((unsigned int)&DAT_00617cf8,param_1,4,0,0,0);
  return;
}

} /* extern "C" */
