/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00188374` (_code @ 0x188374, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int vcallSlot12IfValid(unsigned int);
int sysFatalBreak(void);

/* Supplied declaration required: vcallSlot12IfValid. */
/* Supplied declaration required: sysFatalBreak. */


int FUN_00188374(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if ((*(unsigned int *)(param_1 + 8) & 0xfffffffe) != 0) {
    if ((*(unsigned int *)(param_1 + 8) & 1) != 0) {
      sysFatalBreak();
    }
    vcallSlot12IfValid(*(unsigned int *)(param_1 + 8) & 0xfffffffe);
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return param_1;
}

} /* extern "C" */
