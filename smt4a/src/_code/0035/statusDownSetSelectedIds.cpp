#include "status/StatusDownA.h"


struct StatusDownFilterView {
    u8 unk000[0x5bc]; // 0x000
    union {            // 0x5bc
        u32 words[4];
        u16 entries[8];
    };
    u8 unk5cc[0x84]; // 0x5cc
    u8 enabled;       // 0x650
};

extern "C" void* __aeabi_memcpy(void* destination, const void* source, u32 size);

// Replace the eight-entry status filter, or disable it for a negative count.
extern "C" void statusDownSetSelectedIds(const u16* entries, s32 count)
{
    if (count > 8) {
        return;
    }
    StatusDownFilterView* filter = (StatusDownFilterView*)g_statusDown;
    for (s32 i = 0; i < 4; i++) {
        filter->words[i] = 0;
    }
    if (count >= 0) {
        filter->enabled = 1;
        __aeabi_memcpy(filter->entries, entries, count * sizeof(u16));
    } else {
        filter->enabled = 0;
    }
}
