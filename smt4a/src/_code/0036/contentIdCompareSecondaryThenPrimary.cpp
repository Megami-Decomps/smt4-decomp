#include "common.h"

struct ContentSortRecord {
    u8 unk00[0x24]; // 0x00
    u8 first;       // 0x24
    u8 second;      // 0x25
};

extern "C" ContentSortRecord* contentEntryFindById2(u32 id);

// Sort content IDs by their second key and then their first key.
extern "C" s32 contentIdCompareSecondaryThenPrimary(const u16* firstId, const u16* secondId)
{
    ContentSortRecord* first = contentEntryFindById2(*firstId);
    ContentSortRecord* second = contentEntryFindById2(*secondId);
    s32 difference = first->second - second->second;
    if (difference == 0) {
        first = contentEntryFindById2(*firstId);
        second = contentEntryFindById2(*secondId);
        difference = first->first - second->first;
    }
    return difference;
}
