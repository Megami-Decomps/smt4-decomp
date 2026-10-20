/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011891c` (_code @ 0x11891c, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013290c(unsigned int, unsigned int);
int FUN_002c3a14(unsigned int);

extern unsigned int g_titleScene; /* 0x44ea00 */
extern signed char g_gfxSettings; /* 0x464af0 */
extern unsigned int DAT_00464b04; /* 0x464b04 */
extern unsigned int DAT_00464b18; /* 0x464b18 */
extern unsigned int g_asdModelSlotFlags; /* 0x464b74 */
extern unsigned int g_asdModelSlotArray3; /* 0x464bb4 */
extern int g_asdLightCount; /* 0x4dad80 */

/* Supplied declaration required: FUN_0013290c. */
/* Supplied declaration required: FUN_002c3a14. */


/* WARNING: Removing unreachable block (ram,0x00118974) */
/* WARNING: Removing unreachable block (ram,0x00118978) */

void FUN_0011891c(void)

{
/* irregular: 4 native warning(s); review required */
  if ((g_gfxSettings != '\0') && ((0 < g_asdLightCount || ((g_asdModelSlotFlags & 1) != 0)))) {
    FUN_0013290c(g_asdModelSlotArray3,DAT_00464b18);
    FUN_002c3a14(g_titleScene);
    DAT_00464b04 = 0;
  }
  return;
}

} /* extern "C" */
