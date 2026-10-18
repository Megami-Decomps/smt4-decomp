/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8a44` (_code @ 0x3a8a44, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00422014; /* 0x422014 */

extern unsigned int *FUN_0022ccec(void);
/* Supplied declaration required: FUN_003a6e68. */


unsigned int * FUN_003a8a44(unsigned int param_1,unsigned char param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_0022ccec();
  *puVar1 = (unsigned int)&DAT_00422014;
  *(unsigned char *)(puVar1 + 0x169) = param_2;
  FUN_003a6e68();
  return puVar1;
}
