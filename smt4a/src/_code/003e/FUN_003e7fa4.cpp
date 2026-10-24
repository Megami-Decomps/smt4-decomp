/* NON_MATCHING: structure, calls, constants and instruction count match; remaining differences are register assignment and scheduling: retail keeps zero in r8, the actor slot id in r1 compared as `cmp slot, id`, the height constant in s0 loaded after the data table lookup and the lift in s16 (this build uses s17/s16), reads the data file through a literal offset (`ldr r0, [pc]; ldr r0, [r0, r5]`) instead of `add; ldr`, and joins the slot search at one clamp. */
#include "gamedata/DataTable.h"

struct BattleVec3 {
    f32 x, y, z;
};

// A battle combatant (0x1d0 bytes each).
struct BattleActor {
    u8 unk00[0xc];
    BattleVec3 position; // 0x0c
    u8 unk18[0x28];
    f32 scale;           // 0x40
    u8 unk44[0xc];
    u32 flags;           // 0x50: 0x10 follows the anchor, 0x200000 uses the table position
    u8 unk54[0x16];
    s16 slotId;          // 0x6a
    u8 unk6c[0x164];
};

// The part of the battle state this reads.
struct BattleWorldView {
    u8 unk0000[0x1ec4];
    void* anchor;        // 0x1ec4: object the follow-mode position is taken from
    u8 unk1ec8[0xc];
    BattleActor* actors; // 0x1ed4
    u8 unk1ed8[0x3bc];
    void* dataFile;      // 0x2294
};

// A combatant's record in the roster: its list of draw object ids.
struct BattleRosterEntry {
    u8 unk00[2];
    u16 id;              // 0x02
    u8 unk04[8];
    s32 drawIds[1];      // 0x0c
};

struct BattleSlotList {
    u8 unk00[8];
    s16 ids[50];         // 0x08
};

struct BattlePositionRecord {
    s16 id;              // 0x00
    u8 unk02[6];
    BattleVec3 position; // 0x08
    u8 unk14[0x24];
};

struct BattleActorData {
    u8 unk00[0xa2];
    u8 height;           // 0xa2: 0 tall, 1 average, 2 low
};

struct EnemyDrawObject;

extern "C" {
BattleRosterEntry* FUN_001568f8(BattleWorldView* world, s32 index);
BattleSlotList* FUN_003f0e20(BattleWorldView* world, s32 slotId);
void* dataTableFileGetTable(void* file, u32 section);
BattleVec3* FUN_00348ee8(void* anchor);
BattleActorData* dataTable00FindById(u16 id);
EnemyDrawObject* stateEntryFindById(BattleWorldView* world, s32 id);
void enemyDrawCalcVerticalOffset(EnemyDrawObject* object, BattleVec3* offset, f32 scale);

// The index of `id` in the slot list (0 when the list is missing or does not contain it).
static __inline s32 slotIndexOf(const BattleSlotList* slots, s32 id)
{
    if (slots != NULL) {
        for (s32 i = 0; i < 50; i += 2) {
            if (id == slots->ids[i]) {
                return i;
            }
            if (id == slots->ids[i + 1]) {
                return i + 1;
            }
        }
    }
    return 0;
}

// Where combatant `index` is drawn: its table position while spawning, otherwise its own position plus
// the vertical offset of its draw object (or, when following the anchor, the anchor plus a height-based lift).
BattleVec3 FUN_003e7fa4(BattleWorldView* world, s32 index, s32 force)
{
    BattleActor* actor = &world->actors[index];
    BattleVec3 position;
    if (actor->flags & 0x200000) {
        u16 id = FUN_001568f8(world, index)->id;
        BattlePositionRecord* found = NULL;
        if (world->dataFile != NULL) {
            void* section = dataTableFileGetTable(world->dataFile, 0);
            BattlePositionRecord* records = static_cast<BattlePositionRecord*>(dataTableGetEntries(section));
            s32 count = dataTableGetCount(section);
            for (s32 i = 0; i < count; ++i) {
                if (records[i].id == id) {
                    found = &records[i];
                    break;
                }
            }
        }
        position = found->position;
    } else {
        const f32 lift = 2.0f;
        if (!(actor->flags & 0x10) || force != 0) {
            BattleSlotList* slots = FUN_003f0e20(world, actor->slotId);
            s32 slot = slotIndexOf(slots, actor->slotId);
            if (slot < 0) {
                slot = 0;
            }
            EnemyDrawObject* object = stateEntryFindById(world, FUN_001568f8(world, index)->drawIds[slot]);
            enemyDrawCalcVerticalOffset(object, &position, actor->scale);
            position.x += actor->position.x;
            position.y += actor->position.y;
            position.z += actor->position.z;
            position.z += lift;
        } else {
            position = *FUN_00348ee8(world->anchor);
            position.z += lift;
            f32 height = 0.0f;
            switch (dataTable00FindById(FUN_001568f8(world, index)->id)->height) {
            case 0:
                height = 15.0f;
                break;
            case 2:
                height = -20.0f;
                break;
            }
            position.z += height;
        }
    }
    return position;
}
}
