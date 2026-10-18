/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018ab7c` (_code @ 0x18ab7c, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_004474d8; /* 0x4474d8 */


void FUN_0018ab7c(void)

{
  unsigned int *puVar1;
  
  puVar1 = DAT_004474d8;
  *DAT_004474d8 = 0;
  *(unsigned short *)(puVar1 + 1) = 0;
  *(unsigned short *)((int)puVar1 + 6) = 0;
  *(unsigned short *)(puVar1 + 2) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}
