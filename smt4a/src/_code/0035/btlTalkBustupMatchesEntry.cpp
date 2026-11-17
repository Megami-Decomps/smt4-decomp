#include "battle/Talk/btlTalkBustUp.h"
#include "gamedata/NkmBaseRecordA.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {


s32 btlTalkBustupMatchesEntry(u32 id)
{
    BtlTalkBustUp *bustup = g_btlTalkBustUp;
    if (bustup == NULL) {
        return 0;
    }
    return nkmBaseGetRecord(id)->model == bustup->textureNode;
}

} /* extern "C" */
