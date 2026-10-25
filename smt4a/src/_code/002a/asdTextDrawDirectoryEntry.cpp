#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"

extern "C" {
void FUN_0036bea0(AsdText *text, u32 font, s32 mode, s32 x, s32 y, const char *message);

// Set up text from a nonempty entry in a relative-offset message directory.
void asdTextDrawDirectoryEntry(AsdText *text, u32 font, s32 mode, s32 x, s32 y,
                  RelativeDirectory *directory, u32 index)
{
    if (directory != NULL) {
        DirectoryRecord *record = (DirectoryRecord *)((u8 *)directory + directory->recordsOffset) + index;
        if (record->size != 0) {
            const char *message = (const char *)directory + record->dataOffset;
            if (message != NULL) {
                FUN_0036bea0(text, font, mode, x, y, message);
            }
        }
    }
}
}
