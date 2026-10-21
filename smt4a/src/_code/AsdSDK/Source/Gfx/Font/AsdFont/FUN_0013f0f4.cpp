/* NON_MATCHING: the allocation-site file/line call was weak-linked to a NOP with no surviving callee symbol; its source-path/line argument setup is therefore missing. */
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

struct FontRecord {
    u8 data[0x2c];
};
struct FontPool {
    FontRecord* entries; // 0x00
    s32 capacity;        // 0x04
};

extern "C" {
extern FontPool DAT_005b3bc0;
void FUN_0030f220(u32 mode, const char* encoding);
void* asdMemoryAlloc(u32 heap, u32 alignment, u32 parameter, u32 size, bool clear);

// Selects Shift-JIS and allocates the font record pool.
void FUN_0013f0f4(s32 capacity)
{
    FUN_0030f220(2, "SJIS");
    DAT_005b3bc0.capacity = capacity;
    DAT_005b3bc0.entries = static_cast<FontRecord*>(
        asdMemoryAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, capacity * sizeof(FontRecord), true));
}
}
