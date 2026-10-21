#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

namespace { struct Entry { u32 first; u32 second; AsdTexture* image; u32 unknown; u32 flags; }; }

extern "C" {
/* Reads or updates the requested object state. */
bool asdTextureEntryApply(Entry *entry)
{
    if (entry->image == 0) {
        return false;
    }
    asdTextureSetImage(entry->image);
    entry->flags |= 4;
    return true;
}
}
