/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104694` (_code @ 0x104694, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_005585e0; /* 0x5585e0 */

extern unsigned int *FUN_0012229c(void);
/* Supplied declaration required: FUN_002e6354. */


unsigned int * FUN_00104694(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_0012229c();
  *puVar1 = (unsigned int)&DAT_005585e0;
  puVar1[0x46] = 0;
  *(unsigned char *)(puVar1 + 0x47) = 0;
  FUN_002e6354(puVar1 + 0x48,0x198);
  puVar1[0xac] = 0;
  puVar1[0xad] = 0;
  return puVar1;
}
