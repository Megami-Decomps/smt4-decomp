/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042d164` (_code @ 0x42d164, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int software_interrupt(int);

extern unsigned char DAT_0053f5fc; /* 0x53f5fc */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int * FUN_0042d164(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0053f5fc;
  if (*(char *)(param_1 + 2) != '\0') {
    if (param_1[1] != 0) {
      software_interrupt(0x23);
      param_1[1] = 0;
    }
    *(unsigned char *)(param_1 + 2) = 0;
  }
  if (param_1[1] != 0) {
    software_interrupt(0x23);
    param_1[1] = 0;
  }
  return param_1;
}

} /* extern "C" */
