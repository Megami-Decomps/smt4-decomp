/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b24d8` (_code @ 0x2b24d8, 0x2 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_load (CALLOTHER). */
extern unsigned int *FUN_002c5300(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b24d8(void)

{
/* irregular: irregular input(s): in_cr1; 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int unaff_r4;
  unsigned int in_cr1;
  
  temp_v0 = 0x1c;
  puVar1 = (unsigned int *)FUN_002c5300(0x100,0x100,0,0x1c,1);
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = 1;
  *(unsigned int *)((int)puVar1 * 2) = unaff_r4;
  coprocessor_load(2,in_cr1,temp_v0 + 0x1c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
