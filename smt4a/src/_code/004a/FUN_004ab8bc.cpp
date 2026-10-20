/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ab8bc` (_code @ 0x4ab8bc, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */


unsigned char FUN_004ab8bc(void)

{
  return *(int *)((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 0x74a0) != 0x13;
}

} /* extern "C" */
