/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002be16c` (_code @ 0x2be16c, 0x370 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Control flow encountered bad instruction data */

void FUN_002be16c(int param_1)

{
/* irregular: irregular input(s): in_ZR, in_d8; 3 native warning(s); review required */
  unsigned char *puVar1;
  char in_ZR;
  unsigned long long in_d8;
  unsigned long long uStack_2c;
  unsigned char uStack_24;
  
  puVar1 = &uStack_24;
  while( 1 ) {
    *(unsigned long long *)(puVar1 + -8) = in_d8;
    if (in_ZR != '\0') break;
    in_ZR = param_1 == 0;
    puVar1 = puVar1 + -8;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
