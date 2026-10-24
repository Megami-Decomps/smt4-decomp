#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x6A];
    /* 0x6A */ s16 id;
    /* 0x6C */ u8 unk6c[0x1D0 - 0x6C];
} Entry; /* 0x1D0 */

typedef struct Object {
    /* 0x0000 */ u8 unk0000[0xC];
    /* 0x000C */ u32 slots[1];
} Object;

typedef struct ObjectBlock {
    /* 0x0000 */ u8 unk0000[0x1ED4];
    /* 0x1ED4 */ Entry *entries;
} ObjectBlock;

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ ObjectBlock *block;
} Holder;

extern s32 idSetFindSubjectIndex(ObjectBlock *block, Entry *entry);
extern Object *FUN_001568f8(ObjectBlock *block, s32 id);
extern void stateEntryFindById(ObjectBlock *block, u32 value);

void FUN_00421b2c(Holder *holder, s32 row)
{
    Entry *entry = &holder->block->entries[row];
    s32 slot = idSetFindSubjectIndex(holder->block, entry);
    Object *object = FUN_001568f8(holder->block, entry->id);

    stateEntryFindById(holder->block, object->slots[slot]);
}

} /* extern "C" */
