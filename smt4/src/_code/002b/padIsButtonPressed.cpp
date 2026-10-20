/* NON_MATCHING: romwright 0.5.0 decompilation of `padIsButtonPressed` (_code @ 0x2bfde4, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004650a0; /* 0x4650a0 */
extern unsigned char DAT_004e3c58; /* 0x4e3c58 */


unsigned int padIsButtonPressed(unsigned int param_1)

{
  if (((param_1 < 0x1f) && (((*(unsigned int *)((unsigned char *)&DAT_004650a0 + 0x8)) & 1) == 0)) &&
     (*(int *)(&DAT_004e3c58 + param_1 * 4) == 1)) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
