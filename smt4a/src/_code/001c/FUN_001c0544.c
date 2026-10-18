/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c0544` (_code @ 0x1c0544, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern romwright_code *DAT_0059dac8; /* 0x59dac8 */
extern romwright_code *DAT_0059dacc; /* 0x59dacc */
extern romwright_code *DAT_0059dad0; /* 0x59dad0 */
extern romwright_code *DAT_0059dad4; /* 0x59dad4 */
extern romwright_code *DAT_0059dad8; /* 0x59dad8 */


void FUN_001c0544(unsigned int *param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)*param_1;
  if (temp_v0 == 0x20000009) {
                    /* WARNING: Could not recover jumptable at 0x001c059c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0059dacc)();
    return;
  }
  if (temp_v0 < 0x2000000a) {
    if (temp_v0 == 0x20000002) {
                    /* WARNING: Could not recover jumptable at 0x001c05a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0059dad4)();
      return;
    }
    if (temp_v0 == 0x20000004) {
                    /* WARNING: Could not recover jumptable at 0x001c0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0059dad0)();
      return;
    }
  }
  else {
    if (temp_v0 == 0x20000011) {
                    /* WARNING: Could not recover jumptable at 0x001c0594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0059dac8)();
      return;
    }
    if (temp_v0 == 0x20000021) {
                    /* WARNING: Could not recover jumptable at 0x001c058c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0059dad8)();
      return;
    }
  }
  return;
}
