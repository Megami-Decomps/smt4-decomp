#include "map/MapEffectReservation.h"

/* The Apocalypse effect instance: the same fields as MapEffectInstance, four bytes longer. */
struct MapEffectInstanceA {
    u8 unk000[0x12c];
    u32 resource; // 0x12c
    u8 unk130[0x30];
    u16 first;    // 0x160
    u16 second;   // 0x162
    u8 active;    // 0x164
    u8 unk165[0x17];
};

extern "C" {
extern MapEffectReservationState DAT_00580c90;
extern MapEffectInstanceA g_recordTable[];

// Set the frame range of the first live map effect created from the resource and deactivate it.
void FUN_002b7a78(u32 resource, u16 first, u16 second)
{
    for (s32 i = 0; i < DAT_00580c90.count; i++) {
        if (g_recordTable[i].resource == resource) {
            g_recordTable[i].first = first;
            g_recordTable[i].second = second;
            g_recordTable[i].active = 0;
            return;
        }
    }
}

} /* extern "C" */
