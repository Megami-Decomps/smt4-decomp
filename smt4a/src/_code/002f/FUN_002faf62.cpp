#include "common.h"

extern "C" {

void FUN_002e9f00(u8 *member, s32 value);
u32 *ptrTake(u32 *slot);

typedef struct Object Object;
typedef struct ObjectVtbl {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*destroy)(Object *object);
} ObjectVtbl;
struct Object {
    /* 0x00 */ const ObjectVtbl *vtbl;
};

typedef struct Owner {
    /* 0x000 */ u8 unk000[0x90];
    /* 0x090 */ u32 slotA;
    /* 0x094 */ u8 unk094[4];
    /* 0x098 */ u32 slotB;
    /* 0x09C */ u8 unk09C[0x34];
    /* 0x0D0 */ u8 memberD0[0xD8];
    /* 0x1A8 */ Object *object;
} Owner;

/* Destroys the objects taken out of the two slots at 0x90 and 0x98, then runs FUN_002e9f00 on the member at 0xD0 and destroys and clears the object at 0x1A8. */
void FUN_002faf62(Owner *owner)
{
    Object *object;

    if ((owner->slotA != 0) &&
        (object = (Object *)ptrTake(&owner->slotA), object != NULL)) {
        object->vtbl->destroy(object);
    }
    if ((owner->slotB != 0) &&
        (object = (Object *)ptrTake(&owner->slotB), object != NULL)) {
        object->vtbl->destroy(object);
    }
    FUN_002e9f00(owner->memberD0, 4);
    if (owner->object != NULL) {
        owner->object->vtbl->destroy(owner->object);
        owner->object = NULL;
    }
}

} /* extern "C" */
