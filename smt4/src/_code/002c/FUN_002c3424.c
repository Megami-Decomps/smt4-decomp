/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c3424` (_code @ 0x2c3424, 0xb3 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c3424(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  if (temp_v0 == -2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (temp_v0 != -1) {
    if (temp_v0 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (temp_v0 == 1) {
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
