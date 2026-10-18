/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011891c` (_code @ 0x11891c, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0044ea00; /* 0x44ea00 */
extern signed char DAT_00464af0; /* 0x464af0 */
extern unsigned int DAT_00464b04; /* 0x464b04 */
extern unsigned int DAT_00464b18; /* 0x464b18 */
extern unsigned int DAT_00464b74; /* 0x464b74 */
extern unsigned int DAT_00464bb4; /* 0x464bb4 */
extern int DAT_004dad80; /* 0x4dad80 */

/* Supplied declaration required: FUN_0013290c. */
/* Supplied declaration required: FUN_002c3a14. */


/* WARNING: Removing unreachable block (ram,0x00118974) */
/* WARNING: Removing unreachable block (ram,0x00118978) */

void FUN_0011891c(void)

{
/* irregular: 4 native warning(s); review required */
  if ((DAT_00464af0 != '\0') && ((0 < DAT_004dad80 || ((DAT_00464b74 & 1) != 0)))) {
    FUN_0013290c(DAT_00464bb4,DAT_00464b18);
    FUN_002c3a14(DAT_0044ea00);
    DAT_00464b04 = 0;
  }
  return;
}
