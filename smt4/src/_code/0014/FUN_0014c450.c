/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014c450` (_code @ 0x14c450, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421cdc; /* 0x421cdc */
extern unsigned char DAT_00421cfc; /* 0x421cfc */
extern unsigned char DAT_00421d68; /* 0x421d68 */

extern unsigned int *FUN_00150eb4(unsigned int *);


void FUN_0014c450(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  *param_1 = (unsigned int)&DAT_00421d68;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = (unsigned int *)FUN_00150eb4(param_1 + 3);
  *puVar1 = (unsigned int)&DAT_00421cfc;
  puVar1[-3] = (unsigned int)&DAT_00421cdc;
  *(unsigned char *)(puVar1 + 0x95) = 0;
  *(unsigned char *)((int)puVar1 + 0x255) = 1;
  return;
}
