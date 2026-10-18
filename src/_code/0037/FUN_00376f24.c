/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00376f24` (_code @ 0x376f24, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421560; /* 0x421560 */
extern unsigned char DAT_00421584; /* 0x421584 */

extern unsigned int *FUN_00376a34(void);


void FUN_00376f24(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_00376a34();
  *puVar1 = (unsigned int)&DAT_00421560;
  puVar1[0x17] = 0;
  puVar1[0x16] = (unsigned int)&DAT_00421584;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  *(unsigned char *)(puVar1 + 0x20) = 1;
  *(unsigned char *)((int)puVar1 + 0x81) = 0;
  *(unsigned char *)((int)puVar1 + 0x82) = 1;
  return;
}
