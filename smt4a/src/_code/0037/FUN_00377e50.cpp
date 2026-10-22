#include "common.h"

struct GimmickObject;
struct GimmickObjectVtable {
    void (*unk00)(GimmickObject *);
    void (*release)(GimmickObject *);
};
struct GimmickObject {
    /* 0x00 */ GimmickObjectVtable *vtable;
    /* 0x04 */ u32 owner;
};
struct GimmickSlot {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ s16 id;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ GimmickObject *object;
    /* 0x0C */ u8 unk0c[12];
};
struct MapGimmickWork {
    /* 0x000 */ u8 unk000[0x8c4];
    /* 0x8C4 */ GimmickSlot slots[10];
};
extern "C" {
extern MapGimmickWork *g_mapGimic;
extern u32 g_handleRegistry;
void ptrListRemoveClearOwner(u32 registry, u32 owner);

/* Unregisters and releases the active gimmick with the requested id. */
void FUN_00377e50(s32 id)
{
    for (s32 i = 0; i < 10; ++i) {
        GimmickSlot *slot = &g_mapGimic->slots[i];
        if (slot->active && slot->id == id) {
            ptrListRemoveClearOwner(g_handleRegistry, slot->object->owner);
            if (slot->object != NULL) {
                slot->object->vtable->release(slot->object);
                slot->object = NULL;
            }
            slot->active = 0;
            slot->unk02 = 0;
            slot->id = 0;
            return;
        }
    }
}
}
