/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001671e0` (_code @ 0x1671e0, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f248; /* 0x57f248 */


char FUN_001671e0(void)

{
  char temp_v0;
  
  temp_v0 = '\0';
  if ((*(int *)((unsigned char *)&DAT_0057f248 + 0x4)) != 0) {
    temp_v0 = *(char *)((*(int *)((unsigned char *)&DAT_0057f248 + 0x4)) + 0x67c);
  }
  if ((*(int *)((unsigned char *)&DAT_0057f248 + 0x4)) != 0 && temp_v0 != '\0') {
    temp_v0 = '\x01';
  }
  return temp_v0;
}

} /* extern "C" */
