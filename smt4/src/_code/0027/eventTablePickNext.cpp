/* NON_MATCHING: 14 lines: hasSpecial and the hoisted 0xFFFFFFFF swap fp/r8, and in the spawn loop retail branches on the flagB test the other way (beq pass; b fail). */
#include "gamedata/MapSaveBlock.h"
#include "gamedata/DataTable.h"
#include "game/GameState.h"
#include "addon/AocSystem.h"
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;

extern "C" {

/* Event table entry, stride 12 (observed fields only). */
struct EventEntry {
    u8 kind;          /* 0x00: 1 matches the current game state, 2 matches the spawn index */
    s8 stateA;        /* 0x01 */
    s8 stateB;        /* 0x02 (kind 1) */
    s8 spawn;         /* 0x03 (kind 2) */
    s16 flagA;        /* 0x04: must be set */
    u16 flagB;        /* 0x06: must be clear */
    s16 partyEntry;   /* 0x08 */
    u16 needSpecial;  /* 0x0A: 1 requires a special enemy kind on the map */
};

s32 mapEnemyHasAvailableSecondaryState(void);
u32 mapGetDepartureIndex(void);
s32 gameFlagIsSet(s32 flag);
s32 FUN_00298dc8(u16 entry);

/* Entry `index` of the event table: the built-in entries first, then the extra ones. */
static EventEntry *eventTableEntry(u32 index)
{
    void *section = dataTableGet(0x23, 7);
    EventEntry *entries = static_cast<EventEntry *>(dataTableGetEntries(section));
    u32 count = dataTableGetCount(section);
    if (index < count) {
        return &entries[index];
    }
    AocSystem *extension = g_aocSystem;
    EventEntry *extra = (EventEntry *)extension->table23[7].records;
    u32 extraCount = extension->table23[7].count;
    if (index < count + extraCount) {
        return &extra[index - count];
    }
    return 0;
}

static u32 tableSectionCount(s32 table, s32 section)
{
    return dataTableGetCount(dataTableGet(table, section));
}

/* The flag requirements of an event entry: flagA (when given) must be set, flagB (when given) clear. */
static s32 eventFlagsAllow(const EventEntry *entry)
{
    if (entry->flagA != 0) {
        if (gameFlagIsSet(entry->flagA) == 0) {
            return 0;
        }
    } else if (entry->flagB == 0) {
        return 0;
    }
    if (entry->flagB != 0 && gameFlagIsSet((s16)entry->flagB) != 0) {
        return 0;
    }
    return 1;
}

/* The flag and party requirements of an event entry are met. */
static s32 eventEntryAvailable(const EventEntry *entry, s32 hasSpecial)
{
    return eventFlagsAllow(entry) != 0 &&
           (entry->partyEntry == 0 || FUN_00298dc8(entry->partyEntry) != 0) &&
           (entry->needSpecial != 1 || hasSpecial != 0);
}

/* Picks the next event table entry that applies to the current spawn point / game state and is
 * available, remembers it in the map block, and returns it (NULL when none, or when it is the
 * one picked last time). */
EventEntry *eventTablePickNext(void)
{
    MapSaveBlock *flags = gameGetMapBlock();
    s32 hasSpecial = mapEnemyHasAvailableSecondaryState();

    if (g_gameState.returning != 0) {
        u32 spawn = mapGetDepartureIndex();
        if (spawn != 0) {
            for (s32 i = 0; i < (s32)(tableSectionCount(0x23, 7) + g_aocSystem->table23[7].count); i++) {
                EventEntry *entry = eventTableEntry(i);
                if (entry->kind == 2 && entry->spawn == (s32)spawn && eventEntryAvailable(entry, hasSpecial)) {
                    if (flags->lastEvent == (u32)i) {
                        return 0;
                    }
                    flags->lastEvent = i;
                    return entry;
                }
            }
        }
        flags->lastEvent = 0xFFFFFFFF;
        return 0;
    } else {
        for (s32 i = 0; i < (s32)(tableSectionCount(0x23, 7) + g_aocSystem->table23[7].count); i++) {
            EventEntry *entry = eventTableEntry(i);
            if (entry->kind == 1 && entry->stateA == g_gameState.mapId && entry->stateB == g_gameState.areaId &&
                eventEntryAvailable(entry, hasSpecial)) {
                if (flags->lastEvent == (u32)i) {
                    return 0;
                }
                flags->lastEvent = i;
                return entry;
            }
        }
        flags->lastEvent = 0xFFFFFFFF;
        return 0;
    }
}

} /* extern "C" */
