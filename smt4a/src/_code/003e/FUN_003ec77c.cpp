/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ec77c` (_code @ 0x3ec77c, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00573ae8; /* 0x573ae8 */
extern unsigned int DAT_00573aec; /* 0x573aec */


unsigned char FUN_003ec77c(int param_1)

{
  return (*(unsigned int *)(param_1 + 0x45a0) & DAT_00573ae8) != 0 ||
         (DAT_00573aec & *(unsigned int *)(param_1 + 0x45a4)) != 0;
}

} /* extern "C" */
