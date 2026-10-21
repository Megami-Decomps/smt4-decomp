#include "common.h"

struct AppendedIdList {
    u8 unk000[0x17e]; // 0x000
    u16 ids[24];       // 0x17e
    u8 unk1ae[2];      // 0x1ae
    s32 count;         // 0x1b0
};

// Append the eight nonzero input IDs and terminate the list if space remains.
extern "C" void idListAppendEightNonzero(AppendedIdList* list, u32, const u16* ids)
{
    for (s32 index = 0; index < 8; ++index) {
        u16 id = ids[index];
        if (id != 0) {
            list->ids[list->count] = id;
            ++list->count;
        }
    }
    if (list->count < 24) {
        list->ids[list->count] = 0;
    }
}
