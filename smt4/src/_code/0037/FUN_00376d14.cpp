/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00376d14` (_code @ 0x376d14, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00421918; /* 0x421918 */
extern unsigned char DAT_0042193c; /* 0x42193c */

extern unsigned int *FUN_00376824(void);


void FUN_00376d14(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_00376824();
  *puVar1 = (unsigned int)&DAT_00421918;
  puVar1[0x17] = 0;
  puVar1[0x16] = (unsigned int)&DAT_0042193c;
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

} /* extern "C" */
