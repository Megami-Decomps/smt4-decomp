/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ec75c` (_code @ 0x2ec75c, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055ae64; /* 0x55ae64 */

extern unsigned int *FUN_002e9f80(void);
extern int FUN_002ed912(unsigned int *);


int FUN_002ec75c(void)

{
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)FUN_002e9f80();
  *puVar1 = (unsigned int)&DAT_0055ae64;
  temp_v0 = FUN_002ed912(puVar1 + 3);
  return temp_v0 - 0xc;
}

} /* extern "C" */
