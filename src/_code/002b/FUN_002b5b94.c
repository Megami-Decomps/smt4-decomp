/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b5b94` (_code @ 0x2b5b94, 0x1e bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

/* Unsupported intrinsic, declaration required: software_udf (CALLOTHER). */


void FUN_002b5b94(void)

{
/* irregular: 2 native warning(s); review required */
  romwright_code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (romwright_code *)software_udf(0xd7,0x2b5bb0);
  (*pcVar1)();
}
