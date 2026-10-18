/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00151dac` (_code @ 0x151dac, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */
extern signed char DAT_005b3bf4; /* 0x5b3bf4 */
extern unsigned int DAT_005b3c08; /* 0x5b3c08 */
extern unsigned int DAT_005b3c1c; /* 0x5b3c1c */
extern unsigned int DAT_005b3c78; /* 0x5b3c78 */
extern unsigned int DAT_005b3cb8; /* 0x5b3cb8 */
extern int DAT_00636e00; /* 0x636e00 */

/* Supplied declaration required: FUN_001575cc. */
/* Supplied declaration required: FUN_00177474. */


/* WARNING: Removing unreachable block (ram,0x00151e04) */
/* WARNING: Removing unreachable block (ram,0x00151e08) */

void FUN_00151dac(void)

{
/* irregular: 4 native warning(s); review required */
  if ((DAT_005b3bf4 != '\0') && ((0 < DAT_00636e00 || ((DAT_005b3c78 & 1) != 0)))) {
    FUN_00177474(DAT_005b3cb8,DAT_005b3c1c);
    FUN_001575cc(DAT_0059dbb4);
    DAT_005b3c08 = 0;
  }
  return;
}
