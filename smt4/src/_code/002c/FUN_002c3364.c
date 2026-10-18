/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c3364` (_code @ 0x2c3364, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern romwright_code *pcRam0044e8cc; /* 0x44e8cc */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c3364(unsigned int *param_1)

{
/* irregular: 8 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  piVar1 = (int *)*param_1;
  temp_v0 = *piVar1;
  if (temp_v0 == 0x20000009) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (temp_v0 < 0x2000000a) {
    if (temp_v0 == 0x20000002) {
      *piVar1 = (int)piVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (temp_v0 == 0x20000004) {
                    /* WARNING: Could not recover jumptable at 0x002c3390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0044e8cc)();
      return;
    }
  }
  else {
    if (temp_v0 == 0x20000011) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (temp_v0 == 0x20000021) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
