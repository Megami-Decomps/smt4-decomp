/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b2280` (_code @ 0x1b2280, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b8e18(unsigned int *);

extern unsigned char DAT_0055c1ec; /* 0x55c1ec */
extern unsigned char DAT_0055c21c; /* 0x55c21c */
extern unsigned char DAT_0055c230; /* 0x55c230 */

/* Supplied declaration required: FUN_001b8e18. */
extern unsigned int *FUN_001b9b28(void);


unsigned int * FUN_001b2280(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_001b9b28();
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x15] = 0;
  puVar1[0x11] = (unsigned int)&DAT_0055c21c;
  puVar1[0x14] = (unsigned int)&DAT_0055c230;
  *puVar1 = (unsigned int)&DAT_0055c1ec;
  puVar1[0x16] = 0;
  FUN_001b8e18(puVar1 + 0x1e);
  *(unsigned char *)(puVar1 + 0x23) = 0;
  *(unsigned char *)((int)puVar1 + 0x8d) = 0;
  *(unsigned char *)((int)puVar1 + 0x8e) = 0;
  *(unsigned char *)((int)puVar1 + 0x8f) = 0;
  *(unsigned char *)(puVar1 + 0x24) = 0;
  *(unsigned char *)((int)puVar1 + 0xa1) = 0;
  *(unsigned char *)((int)puVar1 + 0xa2) = 0;
  *(unsigned char *)((int)puVar1 + 0xa3) = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0xffffffff;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  return puVar1;
}

} /* extern "C" */
