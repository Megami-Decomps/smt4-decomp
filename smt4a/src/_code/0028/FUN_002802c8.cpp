/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002802c8` (_code @ 0x2802c8, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_006357dc; /* 0x6357dc */
extern signed char DAT_006357e8; /* 0x6357e8 */
extern int DAT_006357f0; /* 0x6357f0 */
extern signed char DAT_006357fc; /* 0x6357fc */


unsigned int FUN_002802c8(void)

{
  if ((DAT_006357e8 == '\0') || ((DAT_006357e8 == '\x03' && (0 < DAT_006357dc)))) {
    if ((DAT_006357fc == '\0') || ((DAT_006357fc == '\x03' && (0 < DAT_006357f0)))) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
