/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aaa40` (_code @ 0x3aaa40, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00422048; /* 0x422048 */

extern unsigned int *FUN_0022ccec(void);
/* Supplied declaration required: FUN_003a8ee8. */


unsigned int * FUN_003aaa40(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_0022ccec();
  *puVar1 = (unsigned int)&DAT_00422048;
  FUN_003a8ee8();
  *(unsigned char *)(puVar1 + 0x169) = 0;
  return puVar1;
}
