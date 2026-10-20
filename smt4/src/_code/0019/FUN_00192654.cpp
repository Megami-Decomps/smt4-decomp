/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00192654` (_code @ 0x192654, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_004d975c; /* 0x4d975c */
extern unsigned char DAT_004d9768; /* 0x4d9768 */


unsigned int FUN_00192654(int param_1)

{
  if (((&DAT_004d9768)[param_1 * 0x14] != '\0') &&
     (((&DAT_004d9768)[param_1 * 0x14] != '\x03' || ((int)(&DAT_004d975c)[param_1 * 5] < 1)))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
