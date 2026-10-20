/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00224404` (_code @ 0x224404, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int *DAT_00587f0c; /* 0x587f0c */


void FUN_00224404(void)

{
  unsigned int *puVar1;
  
  puVar1 = DAT_00587f0c;
  *DAT_00587f0c = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(unsigned char *)(puVar1 + 3) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  *(unsigned char *)(puVar1 + 0x10) = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x13] = 0;
  *(unsigned char *)(puVar1 + 0x18) = 0;
  *(unsigned char *)((int)puVar1 + 0x61) = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  *(unsigned char *)(puVar1 + 0x1b) = 0;
  *(unsigned char *)(puVar1 + 4) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(unsigned char *)(puVar1 + 10) = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(unsigned char *)((int)puVar1 + 0x29) = 0;
  return;
}

} /* extern "C" */
