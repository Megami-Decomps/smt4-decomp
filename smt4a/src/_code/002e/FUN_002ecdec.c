/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ecdec` (_code @ 0x2ecdec, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055ae64; /* 0x55ae64 */

/* Supplied declaration required: FUN_002e6dd4. */
extern unsigned int *FUN_002e9f80(void);
/* Supplied declaration required: FUN_002f17e4. */


unsigned int * FUN_002ecdec(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002e9f80();
  *puVar1 = (unsigned int)&DAT_0055ae64;
  puVar1 = puVar1 + 3;
  FUN_002f17e4(puVar1,param_2);
  FUN_002e6dd4(*puVar1,param_2);
  return puVar1 + -3;
}
