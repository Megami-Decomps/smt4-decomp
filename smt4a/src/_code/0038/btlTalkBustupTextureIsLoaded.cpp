#include "gamedata/NkmBaseRecordA.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

struct Bustup { u8 unk000[0x2f8]; u32 id; };
extern Bustup *g_btlTalkBustUp;

s32 btlTalkBustupTextureIsLoaded(u32 id)
{
    Bustup *bustup = g_btlTalkBustUp;
    if (bustup == NULL) {
        return 0;
    }
    return asdTMTexTableNodeIsLoaded(16, nkmBaseGetRecord(id)->model) != 0;
}

} /* extern "C" */
