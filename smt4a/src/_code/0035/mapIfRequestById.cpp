#include "common.h"

struct MapInterfaceEntry {
    u8 active;             // 0x00
    u8 unk01[0x17];       // 0x01
    s32 id;                // 0x18
    u8 unk1c[0x25];       // 0x1c
    u8 requested;          // 0x41
    u8 unk42[0x152];      // 0x42
};

struct MapInterfaceState {
    u8 unk000[0x1dc];          // 0x000
    MapInterfaceEntry entries[128]; // 0x1dc
};

extern "C" MapInterfaceState* g_mapIf;

// Mark the first active map-interface entry with the requested ID.
extern "C" void mapIfRequestById(s32 id)
{
    for (s32 index = 0; index < 128; ++index) {
        if (g_mapIf->entries[index].active && g_mapIf->entries[index].id == id) {
            g_mapIf->entries[index].requested = 1;
            return;
        }
    }
}
