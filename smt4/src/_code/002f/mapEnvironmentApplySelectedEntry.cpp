#include "map/MapEnvironment.h"

extern "C" {
void mapEnvironmentSetLight(u32 enabled, u32 arg14, u32 arg15, u32 arg16, u32 arg17,
                  u32 arg18, u32 arg19, u32 arg20, u32 arg21, u32 arg22,
                  u32 arg23, s32 arg24, s32 arg26, f32 arg1A, f32 arg1C);
void mapOverlayDraw(void);
extern MapTableGlobals g_mapTable;

/* Applies the selected entry of the map environment table, enabled, then refreshes the dependent
 * state. */
void mapEnvironmentApplySelectedEntry(void)
{
    const MapEnvironmentEntry *entry = &g_mapTable.entries[g_mapTable.selectedIndex];
    mapEnvironmentSetLight(1, entry->unk14, entry->unk15, entry->unk16, entry->unk17,
                 entry->unk18, entry->unk19, entry->unk20, entry->unk21,
                 entry->unk22, entry->unk23, entry->unk24, entry->unk26,
                 (f32)entry->unk1A, entry->unk1C);
    mapOverlayDraw();
}

} /* extern "C" */
