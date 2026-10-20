/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043b044` (_code @ 0x43b044, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0043b2a4(int, unsigned int);
int software_interrupt(int);

extern unsigned char DAT_0055b3c0; /* 0x55b3c0 */
extern signed char DAT_00647634; /* 0x647634 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0043b2a4. */


unsigned int * FUN_0043b044(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_0055b3c0;
  if (0 < (int)param_1[1]) {
    software_interrupt(0x23);
    if (DAT_00647634 == '\0') {
      param_1[1] = 0;
    }
    else {
      FUN_0043b2a4(0x64765c,param_1[1]);
      param_1[1] = 0;
    }
  }
  return param_1;
}

} /* extern "C" */
