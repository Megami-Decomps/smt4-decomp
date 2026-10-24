/* NON_MATCHING: near (199 rows against 203): same table walk, flag tests and constants; retail keeps the table id in a stack slot (push {r3,...}), hoists 0xFFFFFFFF into r8 and the match-test constant in fp, evaluates dataTableGet(0x23,7) args in the other order inside the size test and splits the flagB test differently */
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
    u16 partyEntry;   /* 0x08 */
    u16 needSpecial;  /* 0x0A: 1 requires a special enemy kind on the map */
};

struct AocSystem {
    u8 pad000[0x41C];
    s32 extraCount;               /* 0x41C */
    EventEntry *extraEntries;     /* 0x420 */
};

struct GameFlagsBlock {
    u8 pad000[0xE88];
    u32 lastEvent;                /* 0xE88 */
};

extern AocSystem *g_aocSystem;    /* 0x570280 */
struct GameStateBlock {
    s32 state;                    /* 0x00 */
    s32 area;                     /* 0x04 */
    u8 pad08[31];
    s8 spawnMode;                 /* 0x27: non-zero selects the spawn-point entries */
};

extern GameStateBlock g_gameState;           /* 0x5f15fc */

GameFlagsBlock *gameFlagsGetBlock(void);
s32 mapEnemyHasSpecialKind(void);
u32 lmapGetSpawnIndex(void);
u32 dataTableGet(s32 table, s32 sub);
s32 dataTableGetCount(u32 table);
EventEntry *dataTableGetEntries(void);
s32 gameFlagIsSet(s32 flag);
s32 partyEntryFlagsBit1(u16 entry);

/* Entry `index` of the event table: the built-in entries first, then the extra ones. */
static EventEntry *eventTableEntry(u32 index)
{
    u32 table = dataTableGet(0x23, 7);
    EventEntry *entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);
    if (index < count) {
        return &entries[index];
    }
    if (index < count + g_aocSystem->extraCount) {
        return &g_aocSystem->extraEntries[index - count];
    }
    return 0;
}

static s32 eventTableSize(void)
{
    return dataTableGetCount(dataTableGet(0x23, 7)) + g_aocSystem->extraCount;
}

/* The flag requirements of an event entry: flagA (when given) must be set, flagB (when given) clear. */
static s32 eventFlagsAllow(const EventEntry *entry)
{
    if (entry->flagA != 0) {
        if (gameFlagIsSet(entry->flagA) == 0) {
            return 0;
        }
        if (entry->flagB == 0) {
            return 1;
        }
    } else if (entry->flagB == 0) {
        return 0;
    }
    return gameFlagIsSet((s16)entry->flagB) == 0;
}

/* The flag and party requirements of an event entry are met. */
static s32 eventEntryAvailable(const EventEntry *entry, s32 hasSpecial)
{
    return eventFlagsAllow(entry) != 0 &&
           (entry->partyEntry == 0 || partyEntryFlagsBit1(entry->partyEntry) != 0) &&
           (entry->needSpecial != 1 || hasSpecial != 0);
}

/* Picks the next event table entry that applies to the current spawn point / game state and is
 * available, remembers it in the flags block, and returns it (NULL when none, or when it is the
 * one picked last time). */
EventEntry *FUN_003b52ec(void)
{
    GameFlagsBlock *flags = gameFlagsGetBlock();
    s32 hasSpecial = mapEnemyHasSpecialKind();

    if (g_gameState.spawnMode != 0) {
        u32 spawn = lmapGetSpawnIndex();
        if (spawn != 0) {
            for (s32 i = 0; i < eventTableSize(); i++) {
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
    } else {
        for (s32 i = 0; i < eventTableSize(); i++) {
            EventEntry *entry = eventTableEntry(i);
            if (entry->kind == 1 && entry->stateA == g_gameState.state && entry->stateB == g_gameState.area &&
                eventEntryAvailable(entry, hasSpecial)) {
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
}

} /* extern "C" */
