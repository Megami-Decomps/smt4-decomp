/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4454` (_code @ 0x2b4454, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b4454(int *param_1)

{
/* irregular: irregular input(s): in_cr14, in_stack_00000000; 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int in_cr14;
  int in_stack_00000000;
  
  temp_v0 = param_1[1];
  param_1[1] = 0x20;
  temp_v1 = param_1[2];
  if (temp_v1 < 0x20) {
    temp_v1 = 0x20;
  }
  param_1[2] = temp_v1;
  param_1[1] = temp_v0;
  *param_1 = in_stack_00000000 * 4 + ((*param_1 + 0x1fU) & 0xffffffe0);
  temp_v2 = param_1[2];
  temp_v1 = temp_v0;
  if (temp_v0 <= temp_v2) {
    temp_v1 = temp_v2;
  }
  param_1[2] = temp_v1;
  *(char *)param_1 = (char)param_1;
  if (temp_v0 <= temp_v2) {
    coprocessor_store(0,in_cr14,temp_v1);
    software_interrupt(0xa2e085);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
