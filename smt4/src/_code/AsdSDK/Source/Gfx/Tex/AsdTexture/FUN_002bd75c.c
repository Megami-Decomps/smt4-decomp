/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bd75c` (_code @ 0x2bd75c, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int uRam00000024; /* 0x24 */

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Supplied declaration required: FUN_002bd420. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bd75c(int param_1)

{
/* irregular: irregular input(s): in_cr0, in_cr2, in_cr5; 9 native warning(s); review required */
  int unaff_r4;
  unsigned int in_cr0;
  unsigned int in_cr2;
  unsigned int in_cr5;
  
  if (param_1 != 0) {
    coprocessor_function(0,3,0,in_cr5,in_cr2,in_cr0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_002bd420(unaff_r4 << 1);
  uRam00000024 = 0x24;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
