#include "shard/Shard0051.h"

extern "C" {

typedef struct Inner38 {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ s32 count;
} Inner38;

typedef struct Rec10 {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Inner38 *inner;
} Rec10;

extern Rec10 *FUN_0050d2cc(u8 *key);
extern s32 FUN_004acb54(Inner38 *inner);

/* Runs FUN_004acb54 for each of the inner object's items; 0xE if there is no inner object, 0x14 on failure. */
u32 runItemsOfInner(Ref4 *obj)
{
    Rec10 *record;
    Inner38 *inner;
    s32 count;
    s32 i;

    if (obj == NULL) {
        return 1;
    }
    record = FUN_0050d2cc(obj->inner);
    if (record != NULL) {
        inner = record->inner;
    }
    if (!(record != NULL && inner != NULL)) {
        return 0xE;
    }
    count = inner->count;
    for (i = 0; i < count; i++) {
        if (FUN_004acb54(inner) == 0) {
            return 0x14;
        }
    }
    return 0;
}

} /* extern "C" */
