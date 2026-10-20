/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004aa2bc` (_code @ 0x4aa2bc, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */


unsigned char FUN_004aa2bc(void)

{
  return *(char *)((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 0x74b3) == '\0';
}

} /* extern "C" */
