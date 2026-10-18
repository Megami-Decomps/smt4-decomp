/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00163e84` (_code @ 0x163e84, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_006357dc; /* 0x6357dc */
extern unsigned char DAT_006357e8; /* 0x6357e8 */


unsigned int FUN_00163e84(int param_1)

{
  if (((&DAT_006357e8)[param_1 * 0x14] != '\0') &&
     (((&DAT_006357e8)[param_1 * 0x14] != '\x03' || ((int)(&DAT_006357dc)[param_1 * 5] < 1)))) {
    return 0;
  }
  return 1;
}
