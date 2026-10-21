/* NON_MATCHING: retail contains a removed weak call on the active title subobject at +0x14; no target symbol is available. */
#include "common.h"
extern "C" {
struct TitleCloseWork { u8 unk00[4]; u8 requested; };
extern TitleCloseWork *g_titleMain;
/* Request closure of the title work. */
s32 FUN_0020fec0(void) { g_titleMain->requested=1; return 0; }
}
