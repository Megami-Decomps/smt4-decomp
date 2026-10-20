/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002019b8` (_code @ 0x2019b8, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int *DAT_0058069c; /* 0x58069c */


void FUN_002019b8(void)

{
  unsigned int *puVar1;
  
  puVar1 = DAT_0058069c;
  *DAT_0058069c = 0;
  *(unsigned short *)(puVar1 + 1) = 0;
  *(unsigned short *)((int)puVar1 + 6) = 0;
  *(unsigned short *)(puVar1 + 2) = 0;
  return;
}

} /* extern "C" */
