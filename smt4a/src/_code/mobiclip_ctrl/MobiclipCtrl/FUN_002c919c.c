/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c919c` (_code @ 0x2c919c, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_00617c48; /* 0x617c48 */

extern unsigned int nn_fnd_ExpHeapBase_Allocate(unsigned int, unsigned int, int, unsigned char, int, unsigned char);


void FUN_002c919c(unsigned int param_1)

{
  nn_fnd_ExpHeapBase_Allocate((unsigned int)&DAT_00617c48,param_1,4,0,0,0);
  return;
}
