/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf538` (_code @ 0x2bf538, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002bfc3a) */
/* WARNING: Removing unreachable block (ram,0x002bfc3e) */
/* WARNING: Removing unreachable block (ram,0x002bfc46) */

void FUN_002bf538(void)

{
/* irregular: irregular input(s): in_lr; 12 native warning(s); review required */
  int unaff_r5;
  int unaff_r6;
  unsigned short *unaff_r8;
  unsigned short in_lr;
  
  if (*(int **)(unaff_r6 + 0x1c) == (int *)0x0) {
    *unaff_r8 = in_lr;
    software_interrupt(0x3ae28d);
    software_interrupt(0x37e28d);
    software_interrupt(0x34e28d);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (**(int **)(unaff_r6 + 0x1c) != unaff_r5 + 0x18) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
