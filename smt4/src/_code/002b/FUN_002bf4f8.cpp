/* NON_MATCHING: compiler schedules signed remainder calculation before the texture lookup and uses different arithmetic registers. */
#include "common.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"

namespace { struct Entry { u16 key, value; }; struct File { u32 header; Entry *entries; }; }

extern "C" {
File *asdTMTexTableCallFile(u32 file, s32 index);
u16 *FUN_002bf4f8(u32 file, s32 index)
{
    return &asdTMTexTableCallFile(file, index)->entries[index % 1000].value;
}
}
