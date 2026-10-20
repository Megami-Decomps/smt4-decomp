/* Resets the object's pending state and re-registers its callback, bumping the reference count. */
#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ u8 unk00[0xE4];
    /* 0xE4 */ s32 refCount;
    /* 0xE8 */ u32 pending;
    /* 0xEC */ u8 listener[0x0C];
    /* 0xF8 */ u8 flag;
    /* 0xF9 */ u8 unkF9[3];
    /* 0xFC */ u8 callback[1];
} Object;

extern void FUN_002f76ca(void *slot, const char *name);
extern void FUN_002f7824(void *listener);

void FUN_00116cdc(Object *obj)
{
    obj->pending = 0;
    FUN_002f7824(obj->listener);
    obj->flag = 0;
    FUN_002f76ca(obj->callback, "");
    obj->refCount++;
}

}
