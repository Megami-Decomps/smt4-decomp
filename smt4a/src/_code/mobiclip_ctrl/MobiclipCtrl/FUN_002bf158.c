/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf158` (_code @ 0x2bf158, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_00617d50; /* 0x617d50 */

/* Supplied declaration required: nn_fnd_ExpHeapBase_Allocate. */


void FUN_002bf158(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  nn_fnd_ExpHeapBase_Allocate(&DAT_00617d50,param_1,4,0,0,0);
  return;
}
