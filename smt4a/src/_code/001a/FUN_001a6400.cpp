/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a6400` (_code @ 0x1a6400, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f5020(unsigned int *, unsigned char *, int, int);

extern unsigned char LAB_001b1f5c; /* 0x1b1f5c */
extern unsigned char DAT_0055c2ac; /* 0x55c2ac */
extern unsigned char DAT_0055c2dc; /* 0x55c2dc */

extern unsigned int *FUN_001b9b28(void);
/* Supplied declaration required: FUN_002f5020. */


unsigned int * FUN_001a6400(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_001b9b28();
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  *puVar1 = (unsigned int)&DAT_0055c2ac;
  puVar1[0x11] = (unsigned int)&DAT_0055c2dc;
  *(unsigned char *)(puVar1 + 0x21) = 0;
  puVar1[0x43] = 0;
  puVar1[0x88] = 0;
  puVar1[0x89] = 0;
  puVar1 = puVar1 + 0x8a;
  FUN_002f5020(puVar1,&LAB_001b1f5c,0x3c8,8);
  return puVar1 + -0x8a;
}

} /* extern "C" */
