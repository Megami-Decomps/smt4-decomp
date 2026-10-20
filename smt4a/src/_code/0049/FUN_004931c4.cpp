/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004931c4` (_code @ 0x4931c4, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00587fdc; /* 0x587fdc */


unsigned char FUN_004931c4(void)

{
  return (*(int *)((unsigned char *)&DAT_00587fdc + 0x4)) >= 101;
}

} /* extern "C" */
