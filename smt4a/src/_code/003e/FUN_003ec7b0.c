/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ec7b0` (_code @ 0x3ec7b0, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005739f0; /* 0x5739f0 */
extern unsigned int DAT_005739f4; /* 0x5739f4 */
extern unsigned int DAT_00573a28; /* 0x573a28 */
extern unsigned int DAT_00573a2c; /* 0x573a2c */


unsigned int FUN_003ec7b0(int param_1)

{
  if (0 < *(int *)(param_1 + 0x4d6c)) {
    if (((DAT_005739f4 & *(unsigned int *)(param_1 + 0x45a4)) == 0 &&
         (DAT_005739f0 & *(unsigned int *)(param_1 + 0x45a0)) == 0) &&
       ((*(unsigned int *)(param_1 + 0x45a0) & DAT_00573a28) == 0 &&
        (*(unsigned int *)(param_1 + 0x45a4) & DAT_00573a2c) == 0)) {
      return 1;
    }
  }
  return 0;
}
