/* Whether the talk bust-up is showing the devil whose record is `id`. */
#include "common.h"
#include "gamedata/DevilRecord.h"

namespace {
struct Bustup { u8 padding[0x2f8]; u32 devilId; };
}

extern "C" {
extern Bustup *g_btlTalkBustUp;
u32 btlTalkBustupMatchesDevil(u16 id)
{
    Bustup *bustup = g_btlTalkBustUp;
    if (bustup != NULL && devilGetRecord(id)->model == bustup->devilId) { return 1; }
    return 0;
}
}
