/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba12c` (_code @ 0x2ba12c, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
extern int FUN_002c5210(void);


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x002ba1a8) overlaps instruction at (ram,0x002ba1a6)
    */

void FUN_002ba12c(int param_1)

{
/* irregular: irregular input(s): in_cr0, in_cr10; 4 native warning(s); review required */
  int temp_v0;
  unsigned int in_cr0;
  unsigned int in_cr10;
  
  if ((*(int *)(param_1 + 0x528) != 2) && (temp_v0 = FUN_002c5210(), temp_v0 == 1)) {
    if (*(romwright_code **)(param_1 + 0x51c) != (romwright_code *)0x0) {
      (**(romwright_code **)(param_1 + 0x51c))();
    }
    coprocessor_function(0xe,0xb,2,in_cr0,in_cr0,in_cr10);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}
