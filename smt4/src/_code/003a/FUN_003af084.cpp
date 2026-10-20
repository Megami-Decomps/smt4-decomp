/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003af084` (_code @ 0x3af084, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00439ca8; /* 0x439ca8 */


unsigned char FUN_003af084(void)

{
  return *(int *)(DAT_00439ca8 + 0x7e38) != 0xc && *(int *)(DAT_00439ca8 + 0x7e38) != 8;
}

} /* extern "C" */
