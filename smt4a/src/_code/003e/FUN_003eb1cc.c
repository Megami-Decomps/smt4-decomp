/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eb1cc` (_code @ 0x3eb1cc, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00573ab0; /* 0x573ab0 */
extern unsigned int DAT_00573ab4; /* 0x573ab4 */


unsigned char FUN_003eb1cc(int param_1)

{
  return (*(unsigned int *)(param_1 + 0x45a0) & DAT_00573ab0) != 0 ||
         (DAT_00573ab4 & *(unsigned int *)(param_1 + 0x45a4)) != 0;
}
