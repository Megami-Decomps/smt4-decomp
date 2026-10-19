/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c3364` (_code @ 0x2c3364, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern romwright_code *DAT_0044e8c4; /* 0x44e8c4 */
extern romwright_code *DAT_0044e8c8; /* 0x44e8c8 */
extern romwright_code *DAT_0044e8cc; /* 0x44e8cc */
extern romwright_code *DAT_0044e8d0; /* 0x44e8d0 */
extern romwright_code *DAT_0044e8d4; /* 0x44e8d4 */


void FUN_002c3364(unsigned int *param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)*param_1;
  if (temp_v0 == 0x20000009) {
                    /* WARNING: Could not recover jumptable at 0x002c33bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0044e8c8)();
    return;
  }
  if (temp_v0 < 0x2000000a) {
    if (temp_v0 == 0x20000002) {
                    /* WARNING: Could not recover jumptable at 0x002c33c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0044e8d0)();
      return;
    }
    if (temp_v0 == 0x20000004) {
                    /* WARNING: Could not recover jumptable at 0x002c3390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0044e8cc)();
      return;
    }
  }
  else {
    if (temp_v0 == 0x20000011) {
                    /* WARNING: Could not recover jumptable at 0x002c33b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0044e8c4)();
      return;
    }
    if (temp_v0 == 0x20000021) {
                    /* WARNING: Could not recover jumptable at 0x002c33ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0044e8d4)();
      return;
    }
  }
  return;
}
