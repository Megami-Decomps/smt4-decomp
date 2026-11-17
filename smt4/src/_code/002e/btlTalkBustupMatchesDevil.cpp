/* Whether the talk bust-up is showing the devil whose record is `id`. */
#include "battle/Talk/btlTalkBustUp.h"
#include "gamedata/NkmBaseRecord.h"

extern "C" {
u32 btlTalkBustupMatchesDevil(u16 id)
{
    BtlTalkBustUp *bustup = g_btlTalkBustUp;
    if (bustup != NULL && nkmBaseGetRecord(id)->model == bustup->textureNode) { return 1; }
    return 0;
}
}
