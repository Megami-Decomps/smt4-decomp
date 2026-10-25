#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

struct Bustup { u8 unk000[0x2f8]; u32 id; };
struct Entry { u8 unk00[0x9c]; u16 id; };
extern Bustup *g_btlTalkBustUp;
Entry *FUN_00184310(u32 id);

s32 btlTalkBustupMatchesEntry(u32 id)
{
    Bustup *bustup = g_btlTalkBustUp;
    if (bustup == NULL) {
        return 0;
    }
    return FUN_00184310(id)->id == bustup->id;
}

} /* extern "C" */
