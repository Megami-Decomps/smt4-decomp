/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ebc34` (_code @ 0x2ebc34, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004e26ec; /* 0x4e26ec */


unsigned int FUN_002ebc34(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = 0xffffffff;
  if ((param_1 < 0x10) && (*(int *)(&(*(unsigned char *)((unsigned char *)&DAT_004e26ec + 0x87c)) + param_1 * 4) != 0)) {
    temp_v0 = *(unsigned int *)(*(int *)(&(*(unsigned char *)((unsigned char *)&DAT_004e26ec + 0x87c)) + param_1 * 4) + 0x9c);
  }
  return temp_v0;
}

} /* extern "C" */
