/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146704` (_code @ 0x146704, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdFatalError(void);
int software_interrupt(int);

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: asdFatalError. */


int FUN_00146704(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  if (temp_v0 == 0) {
    temp_v0 = -0x275efc09;
  }
  else {
    software_interrupt(0x23);
    if (temp_v0 < 0) {
      asdFatalError();
    }
    *param_1 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
