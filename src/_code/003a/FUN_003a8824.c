/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8824` (_code @ 0x3a8824, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004223cc; /* 0x4223cc */

extern unsigned int *FUN_0022cb58(void);
/* Supplied declaration required: FUN_003a6c4c. */


unsigned int * FUN_003a8824(unsigned int param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_0022cb58();
  *puVar1 = (unsigned int)&DAT_004223cc;
  *(unsigned char *)(puVar1 + 0x169) = param_2;
  FUN_003a6c4c();
  return puVar1;
}
