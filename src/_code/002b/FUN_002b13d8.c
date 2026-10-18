/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b13d8` (_code @ 0x2b13d8, 0x6fc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b13d8(void)

{
/* irregular: irregular input(s): in_cr1, in_cr4; 5 native warning(s); review required */
  unsigned int in_cr1;
  unsigned int in_cr4;
  
  coprocessor_function(0,0xb,0,in_cr4,in_cr4,in_cr1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
