#include "common.h"

extern "C" {

void FUN_001b6668(u8 *dest, u8 *source);
void FUN_001b9f70(void *object);
void slistPushFront(void *list, void *object);

typedef struct Owner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 member04[1];
} Owner;

typedef struct Object {
    /* 0x000 */ u8 unk000[0x1B0];
    /* 0x1B0 */ u8 member1B0[1];
} Object;

/* Releases `object` from the owner: FUN_001b6668 on their members, then (when there is an object) FUN_001b9f70 and slistPushFront. */
void FUN_001b2040(Owner *owner, Object *object)
{
    u8 *a = owner->member04;
    u8 *b = object->member1B0;

    FUN_001b6668(a, b);
    if (object != NULL) {
        FUN_001b9f70(object);
        slistPushFront(owner, object);
        return;
    }
}

} /* extern "C" */
