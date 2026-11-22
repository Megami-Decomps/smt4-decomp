/* NON_MATCHING: 134 vs 134 rows (48 diff lines); table lookup, switch and return epilogue match retail, leaving only an r5/r6/r7 rotation (world/index/slot) and cmp operand order in slotIndexOf. */
#include "gamedata/DataTable.h"
#include "gamedata/NkmEnemyLookup.h"

struct BattleVec3 {
    f32 x, y, z;
};

/* A battle combatant (0x1d0 bytes each). */
struct BattleActor {
    u8 unk00[0xc];
    BattleVec3 position; /* 0x0c */
    u8 unk18[0x28];
    f32 scale;           /* 0x40 */
    u8 unk44[0xc];
    u32 flags;           /* 0x50: 0x10 follows the anchor, 0x200000 uses the table position */
    u8 unk54[0x16];
    s16 slotId;          /* 0x6a */
    u8 unk6c[0x164];
};

/* The part of the battle state this reads. */
struct BattleWorldView {
    u8 unk0000[0x1ec4];
    void *anchor;        /* 0x1ec4: object the follow-mode position is taken from */
    u8 unk1ec8[0xc];
    BattleActor *actors; /* 0x1ed4 */
    u8 unk1ed8[0x3bc];
    void *dataFile;      /* 0x2294 */
};

/* A combatant's record in the roster: its list of draw object ids. */
struct BattleRosterEntry {
    u8 unk00[2];
    u16 id;              /* 0x02 */
    u8 unk04[8];
    s32 drawIds[1];      /* 0x0c */
};

struct BattleSlotList {
    u8 unk00[8];
    s16 ids[50];         /* 0x08 */
};

struct BattlePositionRecord {
    s16 id;              /* 0x00 */
    u8 unk02[6];
    BattleVec3 position; /* 0x08 */
    u8 unk14[0x24];
};

struct EnemyDrawObject;

extern "C" {
BattleRosterEntry *btlFindEntryBlockByMemberId(BattleWorldView *world, s32 index); /* declcheck: local (BtlEntryLookup.h types parameter as BtlMainStateA *) */
BattleSlotList *btlMainFindEntryByListedId(BattleWorldView *world, s32 slotId); /* declcheck: local (BtlEntryLookup.h types parameter as BtlMainStateA *) */
void *dataTableFileGetTable(void *file, u32 section); /* declcheck: local (DataTableAccess_VariantA.h types parameter as u32) */
BattleVec3 *FUN_00348ee8(void *anchor);
EnemyDrawObject *stateEntryFindById(BattleWorldView *world, s32 id);
void enemyDrawCalcVerticalOffset(EnemyDrawObject *object, BattleVec3 *offset, f32 scale);

/* Find the position record matching `id` in the battle data file (same pattern as btlDataFindRecordById). */
static __inline BattlePositionRecord *findPositionRecord(void *file, u16 id)
{
    if (file == NULL) {
        return NULL;
    }
    void *section = dataTableFileGetTable(file, 0);
    BattlePositionRecord *records = (BattlePositionRecord *)dataTableGetEntries(section);
    s32 count = dataTableGetCount(section);
    for (s32 i = 0; i < count; ++i) {
        BattlePositionRecord *record = &records[i];
        if (record->id == id) {
            return record;
        }
    }
    return NULL;
}

/* The index of `id` in the slot list (-1 when absent; sibling of battleFindPositionMember in btlGetCombatantOverridePosition). */
static __inline s32 slotIndexOf(BattleSlotList *slots, s32 id)
{
    for (s32 i = 0; i < 50; i += 2) {
        if (id == slots->ids[i]) {
            return i;
        }
        if (id == slots->ids[i + 1]) {
            return i + 1;
        }
    }
    return -1;
}

/* Where combatant `index` is drawn: its table position while spawning, otherwise its own position plus
 * the vertical offset of its draw object (or, when following the anchor, the anchor plus a height-based lift). */
BattleVec3 btlGetCombatantDrawPosition(BattleWorldView *world, s32 index, s32 force)
{
    BattleActor *actor = &world->actors[index];
    BattleVec3 position;
    if (actor->flags & 0x200000) {
        u16 id = btlFindEntryBlockByMemberId(world, index)->id;
        BattlePositionRecord *found = findPositionRecord(world->dataFile, id);
        position = found->position;
    } else {
        if ((actor->flags & 0x10) && force == 0) {
            position = *FUN_00348ee8(world->anchor);
            position.z += 2.0f;
            u8 bustUp = nkmEnemyFindById(btlFindEntryBlockByMemberId(world, index)->id)->bustUp;
            f32 height = 0.0f;
            switch (bustUp) {
            case 0:
                height = 15.0f;
                break;
            case 1:
                height = 0.0f;
                break;
            case 2:
                height = -20.0f;
                break;
            }
            position.z += height;
        } else {
            BattleSlotList *slots = btlMainFindEntryByListedId(world, actor->slotId);
            s32 slot = slots != NULL ? slotIndexOf(slots, actor->slotId) : -1;
            if (slot < 0) {
                slot = 0;
            }
            EnemyDrawObject *object = stateEntryFindById(world, btlFindEntryBlockByMemberId(world, index)->drawIds[slot]);
            enemyDrawCalcVerticalOffset(object, &position, actor->scale);
            position.x += actor->position.x;
            position.y += actor->position.y;
            position.z += actor->position.z;
            position.z += 2.0f;
        }
    }
    return position;
}
} /* extern "C" */
