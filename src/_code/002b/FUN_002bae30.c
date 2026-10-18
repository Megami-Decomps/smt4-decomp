/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bae30` (_code @ 0x2bae30, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bae30(unsigned int param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  if (param_2 == (int *)*param_2) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
