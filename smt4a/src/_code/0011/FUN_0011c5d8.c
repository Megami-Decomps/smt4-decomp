/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c5d8` (_code @ 0x11c5d8, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055a838; /* 0x55a838 */

extern unsigned int *FUN_0011e894(void);
extern int FUN_002ed094(unsigned int *);
extern int FUN_003112b4(int);


int FUN_0011c5d8(void)

{
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)FUN_0011e894();
  *puVar1 = (unsigned int)&DAT_0055a838;
  temp_v0 = FUN_002ed094(puVar1 + 0x18);
  temp_v0 = FUN_003112b4(temp_v0 + 0x20);
  *(unsigned int *)(temp_v0 - 4) = 0;
  *(unsigned int *)(temp_v0 + 0xc) = 3;
  return temp_v0 - 0x80;
}
