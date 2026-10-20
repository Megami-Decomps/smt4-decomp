#include "shard/Shard004F.h"

extern "C" {

typedef struct DataObj {
    /* 0x00 */ const ObjectVtbl *vtbl;
    /* 0x04 */ u32 data;
} DataObj;

typedef struct Slot28 {
    /* 0x00 */ Object *first;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ s32 unk08;
    /* 0x0C */ u8 unk0C[0x10];
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ Object *second;
    /* 0x24 */ u32 unk24;
} Slot28;

typedef struct Obj4FSlots28 {
    /* 0x00 */ u8 unk00[4];
} Obj4FSlots28;

extern u32 DAT_0056fcc0;
extern void FUN_001aea28(u32 a, u32 b);

void obj4FSlots28Reset(Obj4FSlots28 *obj)
{
    s32 i = 0;

    do {
        Slot28 *slot = (Slot28 *)((u8 *)obj + i * 0x28 + 400);

        slot->unk04 = -1;
        slot->unk08 = -1;
        slot->unk24 = 0;
        slot->unk1C = 0;
        if (slot->second != NULL) {
            slot->second->vtbl->release(slot->second);
            slot->second = NULL;
        }
        if (slot->first != NULL) {
            FUN_001aea28(DAT_0056fcc0, ((DataObj *)slot->first)->data);
            if (slot->first != NULL) {
                slot->first->vtbl->release(slot->first);
                slot->first = NULL;
            }
        }
        i++;
    } while (i < 0x32);
}

} /* extern "C" */
