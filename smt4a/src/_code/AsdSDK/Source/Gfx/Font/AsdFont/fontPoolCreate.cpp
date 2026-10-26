#include "AsdSDK/AsdDebug.h"
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

// Allocates from the main heap, recording the allocation site first.
static __inline void* allocateTraced(const char* file, s32 line, u32 size)
{
    asdDebugTrace(file, line);
    return asdMemoryAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, size, true);
}

// Selects Shift-JIS and allocates the font record pool.
void fontPoolCreate(s32 capacity)
{
    FUN_0030f220(2, "SJIS");
    DAT_005b3bc0.capacity = capacity;
    DAT_005b3bc0.entries = static_cast<FontRecord*>(allocateTraced(
        "c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Font\\AsdFont.cpp", 636, capacity * sizeof(FontRecord)));
}
}
