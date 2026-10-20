#include "shard/Shard0045.h"

extern "C" {

typedef struct VSlot9Obj VSlot9Obj;

typedef struct VSlot9Vtbl {
    /* 0x00 */ void *unk00[9];
    /* 0x24 */ void (*slot9)(VSlot9Obj *self);
} VSlot9Vtbl;

struct VSlot9Obj {
    /* 0x00 */ const VSlot9Vtbl *vtbl;
    /* 0x04 */ u8 unk04[0xC];
    /* 0x10 */ s32 unk10;
    /* 0x14 */ u8 unk14[0x89];
    /* 0x9D */ u8 unk9D;
};

extern void FUN_001a586c(s32 value, VSlot9Obj *obj);

/* Stores the flag at +0x9D, re-registers the object, then calls its virtual slot 9 (tail call). */
void vslot9ObjRefresh(VSlot9Obj *obj, u8 flag)
{
    obj->unk9D = flag;
    if (obj->unk10 != 0) {
        FUN_001a586c(obj->unk10, obj);
    }
    obj->vtbl->slot9(obj);
}

} /* extern "C" */
