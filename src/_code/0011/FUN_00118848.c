/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00118848` (_code @ 0x118848, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044ea00; /* 0x44ea00 */
extern signed char DAT_00464af0; /* 0x464af0 */
extern unsigned int DAT_00464b04; /* 0x464b04 */
extern unsigned int DAT_00464b18; /* 0x464b18 */
extern unsigned int DAT_00464b74; /* 0x464b74 */
extern unsigned int DAT_00464bb4; /* 0x464bb4 */
extern int DAT_004dad80; /* 0x4dad80 */

/* Supplied declaration required: FUN_00132830. */
/* Supplied declaration required: FUN_002c3c18. */


/* WARNING: Removing unreachable block (ram,0x001188a0) */
/* WARNING: Removing unreachable block (ram,0x001188a4) */

void FUN_00118848(void)

{
/* irregular: 4 native warning(s); review required */
  if ((DAT_00464af0 != '\0') && ((0 < DAT_004dad80 || ((DAT_00464b74 & 1) != 0)))) {
    FUN_00132830(DAT_00464bb4,DAT_00464b18);
    FUN_002c3c18(DAT_0044ea00);
    DAT_00464b04 = 0;
  }
  return;
}
