/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002be828` (_code @ 0x2be828, 0x2bc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Unsupported intrinsic, declaration required: software_udf (CALLOTHER). */


void FUN_002be828(void)

{
/* irregular: 2 native warning(s); review required */
  romwright_code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (romwright_code *)software_udf(0xe0,0x2bf92c);
  (*pcVar1)();
}
