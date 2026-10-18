/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb58c` (_code @ 0x2fb58c, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00559b60; /* 0x559b60 */

extern unsigned int *FUN_002fd1e8(void);
extern unsigned int FUN_0030170c(unsigned int *, unsigned int);


unsigned int * FUN_002fb58c(void)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002fd1e8();
  *puVar1 = (unsigned int)&DAT_00559b60;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  temp_v0 = FUN_0030170c(puVar1 + 8,1);
  puVar1[0xc] = temp_v0;
  *(unsigned int *)temp_v0 = temp_v0;
  *(unsigned int *)(puVar1[0xc] + 4) = puVar1[0xc];
  return puVar1;
}
