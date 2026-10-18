/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c32a0` (_code @ 0x2c32a0, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00465124; /* 0x465124 */

extern int FUN_002c38a4(unsigned int);


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c32a0(void)

{
/* irregular: irregular input(s): in_r3, in_stack_00000000; 5 native warning(s); review required */
  int temp_v0;
  int in_r3;
  unsigned int in_stack_00000000;
  
  temp_v0 = FUN_002c38a4(DAT_00465124);
  if (in_stack_00000000 < 0x80) {
    in_stack_00000000 = 0x80;
  }
  if (temp_v0 >> 0x20 != 0) {
    *(int *)(in_r3 + in_stack_00000000 + 0x24) = in_r3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
