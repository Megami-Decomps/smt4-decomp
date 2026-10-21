#include "common.h"

namespace { struct Entry { u32 first; u32 second; u32 image; u32 unknown; u32 flags; }; }

extern "C" {
/* Reads or updates the requested object state. */
void asdTextureSetImage(u32 image);
bool FUN_002a6e00(Entry *entry)
{
    if (entry->image == 0) {
        return false;
    }
    asdTextureSetImage(entry->image);
    entry->flags |= 4;
    return true;
}
}
