/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104008` (_code @ 0x104008, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004daec0; /* 0x4daec0 */


void FUN_00104008(void)

{
  (*(int *)((unsigned char *)&DAT_004daec0 + 0x10)) = 1 - (*(int *)((unsigned char *)&DAT_004daec0 + 0x10));
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_004daec0 + 0x10)) * 4 + 0x4daec8) = 0;
  return;
}

} /* extern "C" */
