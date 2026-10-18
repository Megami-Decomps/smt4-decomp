/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00282d98` (_code @ 0x282d98, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004d975c; /* 0x4d975c */
extern signed char DAT_004d9768; /* 0x4d9768 */
extern int DAT_004d9770; /* 0x4d9770 */
extern signed char DAT_004d977c; /* 0x4d977c */


unsigned int FUN_00282d98(void)

{
  if ((DAT_004d9768 == '\0') || ((DAT_004d9768 == '\x03' && (0 < DAT_004d975c)))) {
    if ((DAT_004d977c == '\0') || ((DAT_004d977c == '\x03' && (0 < DAT_004d9770)))) {
      return 0;
    }
  }
  return 1;
}
