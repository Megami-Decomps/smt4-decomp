/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00461470` (_code @ 0x461470, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055c160; /* 0x55c160 */
extern unsigned char DAT_0055c180; /* 0x55c180 */
extern unsigned char DAT_0055c1c4; /* 0x55c1c4 */

extern unsigned int *FUN_004611ac(unsigned int *);


void FUN_00461470(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  *param_1 = (unsigned int)&DAT_0055c1c4;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = (unsigned int *)FUN_004611ac(param_1 + 3);
  *puVar1 = (unsigned int)&DAT_0055c180;
  puVar1[-3] = (unsigned int)&DAT_0055c160;
  *(unsigned char *)(puVar1 + 0x95) = 0;
  *(unsigned char *)((int)puVar1 + 0x255) = 1;
  return;
}

} /* extern "C" */
