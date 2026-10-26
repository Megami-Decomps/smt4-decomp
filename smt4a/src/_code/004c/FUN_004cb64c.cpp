/* NON_MATCHING: retail rewrites the untouched high word of the 64-bit entry flags (ldr/str of +0x5C) around every flag update and keeps the battle state in r5/the id table in r7; ours updates only the low word (146 rows against 147). */
#include "common.h"

#define ENTRY_PENDING_SPAWN 0x01
#define ENTRY_ACTIVE 0x02
#define ENTRY_DELAY 0x04
#define ENTRY_DELAY_HELD 0x08
#define ENTRY_REGISTER_ID 0x10
#define ENTRY_ID_KNOWN 0x100
#define ENTRY_ID_SHOWN 0x200
#define ENTRY_ID_BOTH 0x300

/* A combatant slot in the battle state (0x1D0 bytes). */
struct BtlSlotFlags {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 flags;
    /* 0x54 */ u8 unk54[4];
    /* 0x58 */ u32 state;
    /* 0x5C */ u8 unk5C[0x174];
};

struct BtlSlotBattle {
    /* 0x0000 */ u8 unk0000[0x1ED4];
    /* 0x1ED4 */ BtlSlotFlags *slots;
};

/* A battle entry being spawned (observed prefix). */
struct BtlSpawnEntry {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u32 delay;
    /* 0x4C */ u8 unk4C[0xC];
    /* 0x58 */ u64 flags;
    /* 0x60 */ u8 unk60[0xA];
    /* 0x6A */ s16 tableIndex;
};

/* The id table the entry's subject is looked up in. */
struct BtlIdTable {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 requestId;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u32 ids[1];
};

extern "C" {

extern void *g_btlUiBlock;
extern void *g_btlAux;

s32 idSetFindSubjectIndex(BtlSlotBattle *battle, BtlSpawnEntry *entry);
BtlIdTable *FUN_001568f8(BtlSlotBattle *battle, s32 index);
s32 uiHasEntryId(BtlSlotBattle *battle, u32 id);
u32 FUN_00409fe8(u32 id, s32 flag);
void valueSlotsInsert(BtlSlotBattle *battle, u32 value);
void uiInsertIdInFirstFreeSlot(BtlSlotBattle *battle, s32 id);
u32 stateEntryFindById(BtlSlotBattle *battle, u32 id);
s32 nkdwLoaderParse(u32 state);
void aocHandleButtons(u32 state, s32 mode);
s32 FUN_003fce08(u32 state, s32 flag);
void btlEnsureEnemyDrawResources(u32 state, s32 flag);
void btlUiAddRequest(void *block, u32 request);
void FUN_004f7fe8(void *aux, BtlSpawnEntry *entry, u32 id);
void FUN_004f7924(void *aux, BtlSpawnEntry *entry);
void battleEffectInitializeVariant(BtlSlotBattle *battle, BtlSpawnEntry *entry);

/* Drops the delay flag once the entry no longer has to wait. */
static inline void releaseDelay(BtlSpawnEntry *entry)
{
    if ((entry->flags & ENTRY_DELAY) != 0 && (entry->flags & ENTRY_DELAY_HELD) == 0) {
        entry->delay = 0;
        entry->flags &= ~(u64)ENTRY_DELAY;
    }
}

/* Advances a battle entry spawn: waits for the battle's slots, registers the subject's id, loads
 * its data and draw resources, then starts its request and effect. */
void FUN_004cb64c(BtlSlotBattle *battle, BtlSpawnEntry *entry)
{
    BtlIdTable *table;
    u32 id;
    u32 state;
    s32 index;
    s32 i;

    if ((entry->flags & ENTRY_PENDING_SPAWN) != 0) {
        for (i = 0; i < 0x6D; i++) {
            BtlSlotFlags *slot = &battle->slots[i];

            if ((slot->flags & 1) != 0 && (slot->state & 2) != 0) {
                return;
            }
        }
        entry->flags = (entry->flags & ~(u64)ENTRY_PENDING_SPAWN) | 0x12;
    }
    if ((entry->flags & ENTRY_ACTIVE) != 0) {
        if ((entry->flags & ENTRY_REGISTER_ID) != 0) {
            index = idSetFindSubjectIndex(battle, entry);
            if (index < 0) {
                index = 0;
            }
            table = FUN_001568f8(battle, entry->tableIndex);
            id = table->ids[index];
            if (uiHasEntryId(battle, id) == 0) {
                entry->flags &= ~(u64)ENTRY_ID_BOTH;
                valueSlotsInsert(battle, FUN_00409fe8(id, 1));
                uiInsertIdInFirstFreeSlot(battle, (s16)id);
            } else {
                entry->flags |= ENTRY_ID_BOTH;
            }
            entry->flags &= ~(u64)ENTRY_REGISTER_ID;
        }
        index = idSetFindSubjectIndex(battle, entry);
        if (index < 0) {
            index = 0;
        }
        table = FUN_001568f8(battle, entry->tableIndex);
        id = table->ids[index];
        state = stateEntryFindById(battle, id);
        if ((entry->flags & ENTRY_ID_KNOWN) == 0) {
            if (nkdwLoaderParse(state) == 0) {
                releaseDelay(entry);
                return;
            }
            entry->flags |= ENTRY_ID_KNOWN;
            aocHandleButtons(state, 7);
        }
        if ((entry->flags & ENTRY_ID_SHOWN) == 0) {
            if (FUN_003fce08(state, 1) == 0) {
                releaseDelay(entry);
                return;
            }
            btlEnsureEnemyDrawResources(state, 1);
            entry->flags |= ENTRY_ID_SHOWN;
        }
        btlUiAddRequest(g_btlUiBlock, table->requestId);
        FUN_004f7fe8(g_btlAux, entry, id);
        FUN_004f7924(g_btlAux, entry);
        battleEffectInitializeVariant(battle, entry);
    }
    releaseDelay(entry);
}

} /* extern "C" */
