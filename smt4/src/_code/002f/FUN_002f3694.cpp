/* NON_MATCHING: the mark bits go through FUN_002f364c's inlined body and the slot bit helpers name the word and bit
 * as retail computes them; remaining: the timer slot address takes the other register order, and retail tests the
 * pickable kinds (0, 6) with branches where the build predicates them. */
#include "gamedata/MapSaveBlock.h"
#include "map/mapDepart.h"
#include "gamedata/MapSystemTable.h"
#include "gamedata/MsSearchTable.h"
#include "code/Code0025.h"
#include "game/GameState.h"

/* A record of data table 0x31: a candidate slot of an area, grouped by `group`. */
struct AreaSlotRecord {
    /* 0x00 */ s8 areaId;           /* -1 = unused */
    /* 0x01 */ s8 group;
    /* 0x02 */ u8 unk02[9];
    /* 0x0B */ s8 kind;             /* 0 and 6 can be picked */
};

extern "C" {


s32 dataTableGetRecordFortyEight(void);
s32 dataTableGetRecordFortyNine(void);
AreaSlotRecord *FUN_0027ee24(s32 index);
s32 randNextInRange(u32 maximum);
void FUN_001fc314(s32 areaId);

/* FUN_002f364c's body: sets or clears one bit of the map block's mark flags. */
static __inline void markBitWrite(s32 flagIndex, s32 enabled)
{
    MapSaveBlock *map = gameGetMapBlock();
    s32 word = flagIndex / 32;
    if (enabled != 0) {
        map->markBits[word] |= 1 << (flagIndex % 32);
    } else {
        map->markBits[word] &= ~(1 << (flagIndex % 32));
    }
}

static __inline void slotBitSet(MapSaveBlock *block, s32 index)
{
    s32 word = index / 32;
    s32 bit = index % 32;
    block->slotBits[word] |= 1 << bit;
}

static __inline void slotBitClear(MapSaveBlock *block, s32 index)
{
    s32 word = index / 32;
    s32 bit = index % 32;
    block->slotBits[word] &= ~(1 << bit);
}

/* Starts the area events whose area is the current one and whose timer has run out: marks the area's flag bits and
 * picks one random candidate slot per group (0..15). */
void FUN_002f3694(void)
{
    MapSaveBlock *block = gameGetMapBlock();
    s32 i;

    i = 0;
    if (dataTable2eSub2GetCount() > 0) {
        do {
            MapSystemMapRecord *event = dataTable2eSub2GetRecord(i);
            s32 areaId = event->mapId;

            if (areaId == -1) {
                return;
            }
            if (g_gameState.mapId == areaId && block->timers[event->timerSlot] == 0) {
                s32 j;
                s32 group;

                block->timers[event->timerSlot] = event->cooldown * 0x708;
                for (j = 0; j < dataTableGetRecordFortyEight(); j++) {
                    MsSearchRecord *mark = msSearchGetRecordAt(j);

                    if (mark->id != -1 && mark->areaId == areaId) {
                        markBitWrite(mark->markBit, 1);
                    }
                }
                for (group = 0; group < 16; group++) {
                    MapSaveBlock *current = gameGetMapBlock();
                    s32 candidates = 0;

                    for (j = 0; j < dataTableGetRecordFortyNine(); j++) {
                        AreaSlotRecord *slot = FUN_0027ee24(j);

                        if (slot->areaId != -1 && slot->areaId == areaId && slot->group == group) {
                            slotBitClear(current, j);
                            if (slot->kind == 0 || slot->kind == 6) {
                                candidates++;
                            }
                        }
                    }
                    if (candidates != 0) {
                        s32 pick;

                        if (candidates == 1) {
                            pick = 0;
                        } else {
                            pick = randNextInRange((u16)(candidates - 1));
                        }
                        s32 count = 0;
                        for (j = 0; j < dataTableGetRecordFortyNine(); j++) {
                            AreaSlotRecord *slot = FUN_0027ee24(j);

                            if (slot->areaId != -1 && slot->areaId == areaId && slot->group == group &&
                                (slot->kind == 0 || slot->kind == 6)) {
                                if (count == pick) {
                                    slotBitSet(current, j);
                                }
                                count++;
                            }
                        }
                    }
                }
                FUN_001fc314(areaId);
            }
            i++;
        } while (i < dataTable2eSub2GetCount());
    }
}

} /* extern "C" */
