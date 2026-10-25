/* Whether the talk bust-up is showing the devil whose record is `id`. */
#include "common.h"

namespace {
struct Bustup { u8 padding[0x2f8]; u32 devilId; };
struct Devil { u8 padding[0x90]; u16 bustupId; };
}

extern "C" {
extern Bustup *g_btlTalkBustUp;
Devil *devilGetRecord(u32 id);
u32 btlTalkBustupMatchesDevil(u16 id)
{
    Bustup *bustup = g_btlTalkBustUp;
    if (bustup != NULL && devilGetRecord(id)->bustupId == bustup->devilId) { return 1; }
    return 0;
}
}
