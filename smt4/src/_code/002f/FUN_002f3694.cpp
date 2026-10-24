/* NON_MATCHING: close: retail multiplies with smulbb (both operands halfwords), evaluates the mark's bit index before calling gameGetMapBlock and keeps the kind test as two branches where built predicates the increment */
#include "map/mapDepart.h"

/* A record of data table 0x2E (section 2): a timed area event. */
struct AreaEventRecord {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s16 areaId;          /* -1 ends the table */
    /* 0x22 */ u8 unk22[4];
    /* 0x26 */ s16 cooldown;        /* in 0x708-frame units */
    /* 0x28 */ s16 timerSlot;
};

/* A record of data table 0x30 (0x48 entries): marks a bit of the map's first flag set for an area. */
struct AreaMarkRecord {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s32 active;          /* -1 = unused */
    /* 0x24 */ s16 bit;
    /* 0x26 */ s8 areaId;
};

/* A record of data table 0x31: a candidate slot of an area, grouped by `group`. */
struct AreaSlotRecord {
    /* 0x00 */ s8 areaId;           /* -1 = unused */
    /* 0x01 */ s8 group;
    /* 0x02 */ u8 unk02[9];
    /* 0x0B */ s8 kind;             /* 0 and 6 can be picked */
};

/* The map block as this function sees it: two flag bit sets and the cooldown timers. */
struct EventMapBlock {
    /* 0x000 */ u8 unk000[0x794];
    /* 0x794 */ u32 slotBits[1];
    /* 0x798 */ u8 unk798[0x4FC];
    /* 0xC94 */ u8 unkC94[4];
    /* 0xC98 */ u32 markBits[1];
    /* 0xC9C */ u8 unkC9C[0x1C4];
    /* 0xE60 */ s32 timers[48];
};
typedef char EventMapBlockLayout[offsetof(EventMapBlock, markBits) == 0xC98 && offsetof(EventMapBlock, timers) == 0xE60 &&
    offsetof(EventMapBlock, slotBits) == 0x794 ? 1 : -1];

extern "C" {

extern GameState g_gameState;

EventMapBlock *gameGetMapBlock(void);
s32 dataTable2eSub2GetCount(void);
AreaEventRecord *dataTable2eSub2GetRecord(s32 index);
s32 dataTableGetRecordFortyEight(void);
AreaMarkRecord *FUN_0025b670(s32 index);
s32 dataTableGetRecordFortyNine(void);
AreaSlotRecord *FUN_0027ee24(s32 index);
s32 randNextInRange(u32 maximum);
void FUN_001fc314(s32 areaId);

static __inline void markBitSet(EventMapBlock *block, s32 index)
{
    block->markBits[index / 32] |= 1 << (index % 32);
}

static __inline void slotBitSet(EventMapBlock *block, s32 index)
{
    block->slotBits[index / 32] |= 1 << (index % 32);
}

static __inline void slotBitClear(EventMapBlock *block, s32 index)
{
    block->slotBits[index / 32] &= ~(1 << (index % 32));
}

/* Starts the area events whose area is the current one and whose timer has run out: marks the area's flag bits and
 * picks one random candidate slot per group (0..15). */
void FUN_002f3694(void)
{
    EventMapBlock *block = gameGetMapBlock();
    s32 i;

    i = 0;
    if (dataTable2eSub2GetCount() > 0) {
        do {
            AreaEventRecord *event = dataTable2eSub2GetRecord(i);
            s32 areaId = event->areaId;

            if (areaId == -1) {
                return;
            }
            if (g_gameState.unk000 == areaId && block->timers[event->timerSlot] == 0) {
                s32 j;
                s32 group;

                block->timers[event->timerSlot] = event->cooldown * 0x708;
                for (j = 0; j < dataTableGetRecordFortyEight(); j++) {
                    AreaMarkRecord *mark = FUN_0025b670(j);

                    if (mark->active != -1 && mark->areaId == areaId) {
                        markBitSet(gameGetMapBlock(), mark->bit);
                    }
                }
                for (group = 0; group < 16; group++) {
                    EventMapBlock *current = gameGetMapBlock();
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
                        s32 count = 0;

                        if (candidates == 1) {
                            pick = 0;
                        } else {
                            pick = randNextInRange((u16)(candidates - 1));
                        }
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
