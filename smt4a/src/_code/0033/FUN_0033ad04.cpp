/* NON_MATCHING: register allocation: retail spills the slot pointer, spawn index and list pointer around the inlined spawn block (three more stack slots, extra live registers) */
#include "common.h"
#include "gamedata/Table00Lookup.h"

/* A resource the enemy slot owns or only references. */
class EnemyResource {
public:
    virtual ~EnemyResource();
    /* 0x04 */ u32 *owner; /* its handle block; bit 0-1 of owner[1] mark it released */
};

/* One 0x188-byte map-enemy slot (only the fields touched here are named). */
struct EnemySpawnSlot {
    /* 0x000 */ u8 active;
    /* 0x001 */ u8 unk001[0x2f];
    /* 0x030 */ s32 unk030;
    /* 0x034 */ s32 unk034;
    /* 0x038 */ s32 unk038;
    /* 0x03c */ u8 unk03c[0x34];
    /* 0x070 */ s32 spawnId;
    /* 0x074 */ u32 recordId;
    /* 0x078 */ u8 unk078[5];
    /* 0x07d */ u8 locked;
    /* 0x07e */ u8 unk07e[6];
    /* 0x084 */ s32 state;
    /* 0x088 */ s32 stateTime;
    /* 0x08c */ u8 unk08c[0xb0];
    /* 0x13c */ u8 unk13c;
    /* 0x13d */ u8 unk13d;
    /* 0x13e */ u8 unk13e;
    /* 0x13f */ u8 unk13f;
    /* 0x140 */ u8 unk140;
    /* 0x141 */ u8 unk141[0x33];
    /* 0x174 */ u16 kindFlags;
    /* 0x176 */ u8 unk176[5];
    /* 0x17b */ u8 unk17b;
    /* 0x17c */ s32 kind;
    /* 0x180 */ EnemyResource *resource;
    /* 0x184 */ u8 registered;
    /* 0x185 */ u8 owned;
    /* 0x186 */ u8 unk186[2];
};

struct EnemyAuxiliary {
    /* 0x00 */ EnemyResource *resource;
    /* 0x04 */ u8 registered;
    /* 0x05 */ u8 state;
    /* 0x06 */ u8 unk06[2];
};

/* The enemies that can appear in one area: ids, data records and kinds by spawn index. */
struct EnemySpawnGroup {
    /* 0x00 */ s32 area;
    /* 0x04 */ s32 ids[16];
    /* 0x44 */ u32 records[16];
    /* 0x84 */ s32 kinds[16];
};

struct EnemySpawnList {
    /* 0x0000 */ u8 unk0000[0x34];
    /* 0x0034 */ EnemySpawnSlot slots[40];
    /* 0x3d74 */ u8 unk3d74[4];
    /* 0x3d78 */ s32 activeCount;
    /* 0x3d7c */ u8 unk3d7c[8];
    /* 0x3d84 */ s32 unk3d84;
    /* 0x3d88 */ u8 unk3d88[4];
    /* 0x3d8c */ EnemyAuxiliary auxiliary[21];
    /* 0x3e34 */ EnemySpawnGroup groups[16];
    /* 0x4a74 */ s32 spawnCount;
};

/* The selected area record. */
struct EnemyAreaSelection {
    /* 0x00 */ u8 unk00[0x84];
    /* 0x84 */ s16 unk84;
    /* 0x86 */ s16 area;
};


extern "C" {
extern EnemySpawnList *g_mapEnemy;
extern u32 *g_handleRegistry;
extern EnemyAreaSelection DAT_005f17fc;
void ptrListRemoveClearOwner(u32 *registry, u32 *owner);
u16 FUN_004bb870(s32 index);
}

/* Drops the slot's resource: unregisters it (or marks it released), then deletes it if the slot owns it. */
static __inline void enemySlotReleaseResource(EnemySpawnSlot *slot)
{
    if (slot->resource != NULL && slot->registered != 0) {
        u32 *owner = slot->resource->owner;
        if (slot->owned != 0) {
            if (owner != NULL) {
                ptrListRemoveClearOwner(g_handleRegistry, owner);
            }
            slot->registered = 0;
        } else {
            owner[1] |= 3;
            slot->registered = 0;
            g_mapEnemy->auxiliary[slot->kind].state = 0;
        }
    }
    EnemySpawnList *list = g_mapEnemy;
    if (slot->resource != NULL) {
        if (slot->owned != 0) {
            delete slot->resource;
            slot->resource = NULL;
        }
        slot->resource = NULL;
        slot->active = 0;
        slot->unk030 = 0;
        slot->unk034 = -1;
        slot->unk038 = 1;
        slot->unk13c = 0;
        slot->unk13d = 0;
        slot->unk13f = 0;
        slot->unk140 = 0;
        list->activeCount--;
    }
}

/* Puts the slot in `state` and fills it from the current area's next spawn entry. */
static __inline void enemySlotSpawn(EnemySpawnSlot *slot, s32 state, s32 *spawnCount)
{
    slot->state = state;
    slot->stateTime = 0;
    u32 index = *spawnCount & 0xff;
    for (s32 i = 0; i < 16; i++) {
        EnemySpawnGroup *group = &g_mapEnemy->groups[i];
        if (group->area == DAT_005f17fc.area) {
            enemySlotReleaseResource(slot);
            slot->spawnId = group->ids[index];
            slot->recordId = group->records[index];
            slot->kindFlags = dataTable00FindById((u16)slot->recordId)->level & 0x7fff;
            s32 variant = FUN_004bb870(slot->spawnId);
            if (variant != 0) {
                slot->unk17b = (u8)variant;
            }
            slot->kind = group->kinds[index];
            break;
        }
    }
    ++*spawnCount;
}

/* Assigns every idle enemy slot its next spawn entry for the current area. */
extern "C" void FUN_0033ad04(void)
{
    EnemySpawnList *list = g_mapEnemy;
    s32 *spawnCount = &list->spawnCount;
    list->unk3d84 = 0;
    for (s32 i = 0; i < 40; i++) {
        EnemySpawnSlot *slot = &list->slots[i];
        if (slot->active != 0 && slot->kind != 0 && slot->kind < 11 && slot->locked == 0 &&
            *spawnCount < 16) {
            switch (slot->state) {
            case 0:
            case 4:
            case 5:
                enemySlotSpawn(slot, 0x14, spawnCount);
                break;
            case 2:
                enemySlotSpawn(slot, 0x16, spawnCount);
                break;
            }
        }
    }
}
