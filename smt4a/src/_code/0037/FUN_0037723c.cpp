#include "gamedata/MapSaveBlockA.h"
#include "shard/Shard0033.h"
#include "gamedata/MapSystemTable.h"
#include "gamedata/MsSearchTable.h"
#include "game/GameStateA.h"
#include "code/Code0037.h"

extern "C" {
s32 dataTable2ECount();
s32 dataTableGetRecordFortyEight();
void FUN_003b9720(s32 area, s32 index);
void gameClearMapGroupFlags(s32 area);
void FUN_002ba544(s32 area);
}

/* Related flag variants share the same persistent completion bit. */
static inline s32 canonicalAreaFlag(u32 flag)
{
    if (flag == 23 || flag == 24) return 14;
    if (flag == 25 || flag == 26) return 18;
    if (flag == 73 || flag == 77) return 65;
    if (flag == 74 || flag == 78) return 66;
    if (flag == 75 || flag == 79) return 67;
    if (flag == 76 || flag == 80) return 68;
    if (flag == 148 || flag == 158) return 141;
    if (flag == 149 || flag == 159) return 142;
    if (flag == 150 || flag == 160) return 145;
    if (flag == 166 || flag == 167) return 164;
    return flag;
}

/* Start unused timers for the current area, mark its records, and reset its slots. */
extern "C" void FUN_0037723c(s32 immediate)
{
    MapSaveBlockA *timers = gameFlagsGetBlock();
    for (s32 i = 0; i < dataTable2ECount(); ++i) {
        const MapSystemMapRecord *entry = dataTable2EGetEntry(i);
        s32 area = entry->mapId;
        if (area == -1) {
            return;
        }
        if (area != g_gameState.mapId || timers->timers[entry->timerSlot] != 0) {
            continue;
        }
        timers->timers[entry->timerSlot] = entry->cooldown * 1800;
        for (s32 j = 0; j < dataTableGetRecordFortyEight(); ++j) {
            const MsSearchRecord *record = FUN_003799d0(j);
            if (record->id != -1 && record->areaId == area) {
                s32 flag = record->markBit;
                MapSaveBlockA *flags = gameFlagsGetBlock();
                flag = canonicalAreaFlag(flag);
                s32 word = flag / 32;
                s32 bit = flag % 32;
                u32 bits = flags->markBits[word];
                bits |= 1u << bit;
                flags->markBits[word] = bits;
            }
        }
        for (s32 j = 0; j < 21; ++j) {
            FUN_003b9720(area, j);
        }
        if (immediate != 0) {
            gameClearMapGroupFlags(area);
        } else {
            FUN_002ba544(area);
        }
    }
}
