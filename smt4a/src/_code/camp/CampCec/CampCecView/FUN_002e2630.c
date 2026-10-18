/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e2630` (_code @ 0x2e2630, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f130; /* 0x57f130 */


unsigned char FUN_002e2630(void)

{
  return *(char *)(DAT_0057f130 + 0x134) != '\0';
}
