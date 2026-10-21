#include "common.h"

extern "C" {

struct Bustup { u8 unk000[0x2f8]; u32 id; };
struct Entry { u8 unk00[0x9c]; u16 id; };
extern Bustup *g_btlTalkBustUp;
Entry *FUN_00184310(u32 id);
s32 asdTMTexTableNodeIsLoaded(u32 table, u32 id);

s32 btlTalkBustupTextureIsLoaded(u32 id)
{
    Bustup *bustup = g_btlTalkBustUp;
    if (bustup == NULL) {
        return 0;
    }
    return asdTMTexTableNodeIsLoaded(16, FUN_00184310(id)->id) != 0;
}

} /* extern "C" */
