/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b31b4` (_code @ 0x2b31b4, 0x789 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
/* Supplied declaration required: FUN_0014553c. */


/* WARNING: Control flow encountered bad instruction data */

unsigned int FUN_002b31b4(int *param_1)

{
/* irregular: irregular input(s): in_cr0, in_cr1, in_cr2, in_cr8; 10 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr2;
  unsigned int in_cr8;
  
  temp_v0 = (unsigned int)*(unsigned short *)(*param_1 + param_1[2] * 0x20);
  if (temp_v0 != 0xffff) {
    coprocessor_function(0,3,0,in_cr0,in_cr0,in_cr2);
    coprocessor_load(0,in_cr1,temp_v0);
    coprocessor_function(10,0xb,1,in_cr8,in_cr8,in_cr8);
    coprocessor_function(0,7,0,in_cr0,in_cr0,in_cr2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(unsigned char *)(param_1 + 0x11) = 2;
  param_1[0xc] = 0;
  if ((param_1[0xd] & 0x300U) != 0) {
    FUN_0014553c();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 1;
}
