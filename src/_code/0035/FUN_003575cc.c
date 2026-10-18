/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003575cc` (_code @ 0x3575cc, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0040b810; /* 0x40b810 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned int * FUN_003575cc(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0040b810;
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
