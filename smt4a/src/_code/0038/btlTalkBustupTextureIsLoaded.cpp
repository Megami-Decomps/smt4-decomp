#include "battle/Talk/btlTalkBustUp.h"
#include "gamedata/NkmBaseRecordA.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {


s32 btlTalkBustupTextureIsLoaded(u32 id)
{
    BtlTalkBustUp *bustup = g_btlTalkBustUp;
    if (bustup == NULL) {
        return 0;
    }
    return asdTMTexTableNodeIsLoaded(16, nkmBaseGetRecord(id)->model) != 0;
}

} /* extern "C" */
