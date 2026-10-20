/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c52f4` (_code @ 0x2c52f4, 0x4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int software_interrupt(int);

typedef int romwright_code(...);
extern romwright_code *DAT_0044e450; /* 0x44e450 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


unsigned long long FUN_002c52f4(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  romwright_code *pcVar1;
  
  pcVar1 = DAT_0044e450;
  if (DAT_0044e450 != (romwright_code *)0x0) {
    DAT_0044e450 = (romwright_code *)0x0;
    (*pcVar1)(0,0,0,0,0,param_3);
  }
  software_interrupt(0x3c);
  return 0;
}

} /* extern "C" */
