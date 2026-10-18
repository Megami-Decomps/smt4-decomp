/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002be650` (_code @ 0x2be650, 0x2bc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Unsupported intrinsic, declaration required: software_udf (CALLOTHER). */


void FUN_002be650(void)

{
/* irregular: 2 native warning(s); review required */
  romwright_code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (romwright_code *)software_udf(0x86,0x2bf754);
  (*pcVar1)();
}
