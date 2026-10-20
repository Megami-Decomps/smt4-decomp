/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045bbdc` (_code @ 0x45bbdc, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055bd34; /* 0x55bd34 */
extern unsigned char DAT_0055bd58; /* 0x55bd58 */

extern unsigned int *FUN_0045b6d8(void);


void FUN_0045bbdc(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_0045b6d8();
  *puVar1 = (unsigned int)&DAT_0055bd34;
  puVar1[0x18] = 0;
  puVar1[0x17] = (unsigned int)&DAT_0055bd58;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *(unsigned char *)(puVar1 + 0x21) = 1;
  *(unsigned char *)((int)puVar1 + 0x85) = 0;
  *(unsigned char *)((int)puVar1 + 0x86) = 1;
  return;
}

} /* extern "C" */
