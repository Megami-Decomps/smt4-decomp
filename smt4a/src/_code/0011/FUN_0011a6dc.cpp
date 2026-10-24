/* NON_MATCHING: scheduling only: retail loads owner->data (r1) before obj->param (r2) while building the last call's arguments */
/* Replaces the object's owned helper with a freshly constructed one (destroying the old), then forwards the new helper and the owner's data to FUN_00117044. */
#include "common.h"

extern "C" {

struct Helper;

typedef struct HelperVtbl {
    /* 0x00 */ void *slot0;
    /* 0x04 */ void (*destroy)(struct Helper *helper);
} HelperVtbl;

typedef struct Helper {
    /* 0x00 */ HelperVtbl *vtbl;
} Helper;

typedef struct Owner {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u8 unk004[0x14];
    /* 0x018 */ u32 data;
} Owner;

typedef struct Holder {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ Owner *owner;
} Holder;

typedef struct Object {
    /* 0x000 */ u8 unk000[0xB8];
    /* 0x0B8 */ u32 param;
    /* 0x0BC */ Helper *helper;
    /* 0x0C0 */ u8 unk0C0[4];
    /* 0x0C4 */ u8 extra[0xDC];
    /* 0x1A0 */ Holder *holder;
} Object;

extern void FUN_00117044(Helper *helper, u32 a, u32 b, u8 *c);
extern Helper *_Znwj(u32 size);
extern Helper *FUN_002fde5c(Helper *memory);

void FUN_0011a6dc(Object *obj)
{
    Owner *owner = obj->holder->owner;
    Helper *helper;

    if (obj->helper != NULL) {
        obj->helper->vtbl->destroy(obj->helper);
    }
    helper = _Znwj(0x18);
    if (helper != NULL) {
        helper = FUN_002fde5c(helper);
    }
    obj->helper = helper;
    FUN_00117044(helper, owner->data, obj->param, obj->extra);
}

}
