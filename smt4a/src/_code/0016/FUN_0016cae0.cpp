#include "common.h"

extern "C" {

typedef struct Item {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u32 handle;
} Item;

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 countA;
    /* 0x18 */ Item **itemsA;
    /* 0x1C */ s32 countB;
    /* 0x20 */ Item **itemsB;
} Holder;

void FUN_00182540(u32 handle);

/* Releases the handle of every item in both lists. */
void FUN_0016cae0(Holder *object)
{
    s32 i;

    if (object->countA != 0) {
        for (i = 0; i < object->countA; i++) {
            FUN_00182540(object->itemsA[i]->handle);
        }
    }
    if (object->countB != 0) {
        for (i = 0; i < object->countB; i++) {
            FUN_00182540(object->itemsB[i]->handle);
        }
    }
}

} /* extern "C" */
