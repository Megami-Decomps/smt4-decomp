/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2390` (_code @ 0x2c2390, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
/* Supplied declaration required: FUN_002c2424. */


/* WARNING: Control flow encountered bad instruction data */

unsigned int FUN_002c2390(int param_1)

{
/* irregular: irregular input(s): in_cr1; 5 native warning(s); review required */
  unsigned int in_cr1;
  
  if (0 < *(int *)(param_1 + 0x34)) {
    if (*(char *)(param_1 + 0x41) != '\0') {
      FUN_002c2424(*(unsigned int *)(param_1 + (unsigned int)(*(char *)(param_1 + 0x30) != '\0') * 4 + 0x44),
                   *(int *)(param_1 + 0x2c) * (unsigned int)*(unsigned char *)(param_1 + 0x40) * 4);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_storelong(0,in_cr1,0);
  return 0;
}
