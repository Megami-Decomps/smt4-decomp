/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014c368` (_code @ 0x14c368, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_00421924; /* 0x421924 */
extern unsigned char DAT_00421944; /* 0x421944 */
extern unsigned char DAT_004219b0; /* 0x4219b0 */

extern unsigned int *FUN_00150db8(unsigned int *);


void FUN_0014c368(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  *param_1 = (unsigned int)&DAT_004219b0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = (unsigned int *)FUN_00150db8(param_1 + 3);
  *puVar1 = (unsigned int)&DAT_00421944;
  puVar1[-3] = (unsigned int)&DAT_00421924;
  *(unsigned char *)(puVar1 + 0x95) = 0;
  *(unsigned char *)((int)puVar1 + 0x255) = 1;
  return;
}
