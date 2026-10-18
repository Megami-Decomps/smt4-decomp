/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4e90` (_code @ 0x2f4e90, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055b0dc; /* 0x55b0dc */

extern int FUN_002e9ff4(unsigned int *);
extern unsigned int *FUN_002ed258(void);
/* Supplied declaration required: FUN_0030fea4. */
/* Supplied declaration required: FUN_0030fecc. */


int FUN_002f4e90(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002ed258();
  *puVar1 = (unsigned int)&DAT_0055b0dc;
  temp_v0 = FUN_002e9ff4(puVar1 + 4);
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  puVar1 = (unsigned int *)(temp_v0 + 0x10);
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  *(unsigned int *)(temp_v0 + 0x20) = 0;
  FUN_0030fecc();
  *puVar1 = 0;
  puVar1[1] = 0;
  *(unsigned char *)(puVar1 + 6) = 0;
  FUN_0030fea4(temp_v0 - 0x10);
  return temp_v0 - 0x10;
}
