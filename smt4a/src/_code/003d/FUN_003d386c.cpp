/* NON_MATCHING: status-bit loop control, cycle-array addressing and scratch registers differ. */
#include "camp/CampState.h"
#include "gamedata/SelectedUnitQuery.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "util/FUN_002a4894.h"
struct PlayerData;

namespace {
/* Selection fields overlap the canonical camp's byte-aligned padding. */
struct CampStatusSelectionView {
    u8 unk000[0xBC];
    s32 selection;
    u8 unk0C0[0x12C];
    u8 selector[1];
};
/* The selected-unit and cycle tables are beyond CampStateA's shared prefix. */
struct CampStatusCyclesView {
    CampStateA camp;
    u8 unk1B24[0x50];
    SelectedUnitListEntry entries[25];
    u8 unk1C3C[0x1540];
    s32 elapsed[25];
    s32 selectedStatus[25];
    u32 colors[25];
};
typedef char CampStatusCycleOffsets[
    offsetof(CampStatusSelectionView, selector) == 0x1EC &&
    offsetof(CampStatusCyclesView, entries) == 0x1B74 &&
    offsetof(CampStatusCyclesView, elapsed) == 0x317C &&
    offsetof(CampStatusCyclesView, selectedStatus) == 0x31E0 &&
    offsetof(CampStatusCyclesView, colors) == 0x3244 ? 1 : -1];
}
extern "C" {
extern CampStateA *g_camp;
s32 objectApplyIfUnblocked(void *selector);
s32 resourceRunOperationIfUnblocked(void *selector);
void sysMemClear(void *memory, u32 bytes);
PlayerData *gameGetPlayerData();
u32 markerKindGetColor(s16 status);
void mapBlockSetRequest(u32 color);

void FUN_003d386c(s32 useSelector)
{
    CampStateA *camp = g_camp;
    CampStatusSelectionView *selection = reinterpret_cast<CampStatusSelectionView *>(camp);
    CampStatusCyclesView *cycles = reinterpret_cast<CampStatusCyclesView *>(camp);
    s32 count = objectApplyIfUnblocked(selection->selector);
    if (objectApplyIfUnblocked(selection->selector) < count)
        count = objectApplyIfUnblocked(selection->selector);
    u32 visited[25];
    sysMemClear(visited, sizeof(visited));
    for (s32 index = 0; index < count; ++index) {
        s32 slot = static_cast<s32>(cycles->entries[index].packedIndex);
        if (visited[slot + 1] != 0)
            continue;
        visited[slot + 1] = 1;
        u16 status;
        s32 statusCount = 0;
        if (slot < 0) {
            /* PlayerData's legacy header redeclares GameDataBlocks; keep that dependency out of this unit. */
            struct PlayerStatusView {
                u8 unk00[0x5E];
                u16 mask;
            };
            status = reinterpret_cast<const PlayerStatusView *>(gameGetPlayerData())->mask;
        } else {
            status = gameGetSlotRecord(slot)->status.mask;
            for (s32 bit = 1; bit < 14; ++bit) {
                if (bit != 2 && (status & (1u << bit)) != 0)
                    ++statusCount;
            }
        }
        s32 ordinal = 0;
        if ((slot < 0 || statusCount != 0) && status != 0) {
            for (s32 bit = 1; bit < 14; ++bit) {
                if (bit == 2)
                    continue;
                if ((status & (1u << bit)) != 0) {
                    if (cycles->selectedStatus[slot + 1] == ordinal) {
                        cycles->colors[slot + 1] = markerKindGetColor(static_cast<s16>(bit));
                        break;
                    }
                    ++ordinal;
                }
            }
        } else {
            cycles->colors[slot + 1] = 0xFFFFFFFF;
        }
        if (++cycles->elapsed[slot + 1] >= 24) {
            /* Retail uses the ordinal reached by the scan, not the initial popcount. */
            cycles->selectedStatus[slot + 1] = (cycles->selectedStatus[slot + 1] + 1) % ordinal;
            cycles->elapsed[slot + 1] = 0;
        }
    }
    s32 selected;
    if (useSelector == 0) {
        selected = selection->selection;
    } else {
        s32 first = resourceRunOperationIfUnblocked(selection->selector);
        selected = first + FUN_002a4894(selection->selector);
    }
    s32 slot = static_cast<s32>(cycles->entries[selected].packedIndex);
    mapBlockSetRequest(cycles->colors[slot + 1]);
}
}
