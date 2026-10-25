/* NON_MATCHING: readable rewrite with slot helpers compiles; inlined slot-search loops are shaped differently from retail (168 vs 194 rows) */
#include "common.h"
#include "gamedata/Table04Record.h"

// Party/demon slot (0x134 bytes): only the fields used here.
struct PartySlot {
    u8 unk00[0x34];
    u16 skills[8];      // 0x34
    u8 skillRank[0x18]; // 0x44: per-skill-slot rank, then per-skill-type ranks from 0x4c
    u8 unk5c[8];
    u16 level;          // 0x64 (read as a halfword)
    u8 unk66[0x12c - 0x66];
    u16 id;             // 0x12c
    u16 index;          // 0x12e
    u32 flags;          // 0x130, bit 0: in use
};

struct PartySlotTable {
    u8 unk0000[0x1ddc];
    PartySlot slots[12];    // 0x1ddc
};

struct DevilGrowth {
    u8 unk00[0x26];
    u16 skillType;      // 0x26
};

struct ParentLink {
    u8 unk00[4];
    u16 parentId;       // 0x04
};

extern "C" {

PartySlotTable* gameGetSlotTable(void);
void battleRecordInitializeFromDefinition(PartySlot* slot, s32 mode);
ParentLink* FUN_00370ecc(u32 id);
void FUN_003e4b2c(u32 id);
u32 dataTable0aSub0GetValueById(u32 id);
s32 FUN_0035e458(u32 skill);
s32 FUN_0035d89c(u32 skill);

static __inline PartySlot* getSlot(u16 index)
{
    if (index >= 12) return NULL;
    return &gameGetSlotTable()->slots[index];
}

static __inline PartySlot* findSlotById(u32 id)
{
    for (s32 i = 0; i < 12; i++) {
        PartySlot* slot = getSlot(i);
        if (slot->id == id) return slot;
    }
    return NULL;
}

static __inline bool hasSkill(PartySlot* slot, u32 skill)
{
    for (s32 i = 0; i < 8; i++) {
        if (slot->skills[i] == skill) return true;
    }
    return false;
}

// Makes sure the slot for `id` exists and is in use, then lets it inherit the
// first skill of the demon it was derived from.
void FUN_004bd410(u32 id)
{
    s32 freeIndex = -1;
    PartySlot* slot;
    s32 i = 0;
    do {
        slot = getSlot(i);
        if (slot->id == id) {
            slot->flags |= 1;
            break;
        }
        if (freeIndex < 0 && slot->id == 0) freeIndex = i;
        i++;
    } while (i < 12);
    if (freeIndex >= 0) {
        slot = getSlot(freeIndex);
        slot->id = id;
        slot->flags |= 1;
        slot->index = freeIndex;
        battleRecordInitializeFromDefinition(slot, 0);
    }

    ParentLink* link = FUN_00370ecc(id);
    if (link == NULL || id == link->parentId) return;
    u32 parentId = link->parentId;

    PartySlot* parent = findSlotById(parentId);
    if (parent != NULL) {
        PartySlot* own = findSlotById(id);
        if (own != NULL && (s32)(parent->level - own->level) > -1) FUN_003e4b2c(id);
    }

    parent = findSlotById(parentId);
    u32 skill = dataTable0aSub0GetValueById(parentId);
    if (parent == NULL || skill == 0) return;
    if (!hasSkill(parent, skill)) return;
    if (slot != NULL && hasSkill(slot, skill)) return;

    s32 empty = 0;
    for (s32 j = 0; j < 8; j++) {
        if (slot->skills[j] == 0) break;
        empty++;
    }
    if (slot == NULL || empty >= 8) return;
    slot->skills[empty] = skill;

    DevilGrowth *growth = (DevilGrowth *)dataTable04FindById(skill);
    s32 rank = 0;
    if (growth != NULL && growth->skillType < 0x12) {
        rank = (s8)slot->skillRank[8 + growth->skillType];
    }
    s32 maxRank = FUN_0035e458(skill);
    s32 minRank = FUN_0035d89c(skill);
    if (maxRank < rank) {
        rank = (s8)maxRank;
    } else if (rank < minRank) {
        rank = (s8)minRank;
    }
    slot->skillRank[empty] = rank;
}

} /* extern "C" */
