/* NON_MATCHING: romwright 0.5.0 decompilation of `nngxIsStereoVisionAllowed` (_code @ 0x13bf84, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern float fRam1ff81080; /* 0x1ff81080 */
extern signed char cRam1ff81084; /* 0x1ff81084 */


unsigned int nngxIsStereoVisionAllowed(void)

{
  unsigned int temp_v0;
  
  if ((cRam1ff81084 != '\0') || (fRam1ff81080 <= 0.0f)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}
