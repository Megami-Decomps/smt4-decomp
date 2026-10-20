#include "shard/Shard004A.h"

extern "C" {

typedef struct Slot4Obj Slot4Obj;
typedef struct Slot4Vtbl {
    /* 0x00 */ void *unk00[4];
    /* 0x10 */ void (*slot4)(Slot4Obj *obj, u32 arg);
} Slot4Vtbl;
struct Slot4Obj {
    /* 0x00 */ const Slot4Vtbl *vtbl;
    /* 0x04 */ u32 unk;
};
typedef struct Owner4A {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ u8 block20[4];
    /* 0x024 */ u8 unk024[0x828];
    /* 0x84C */ Slot4Obj *object;
} Owner4A;
extern u32 FUN_0031d174(u8 *block);
extern u32 FUN_002a482c(u8 *block);
extern void size40Set(Slot4Obj *object, u32 a, u32 b);

void owner4ASetSizeAndCall(Owner4A *obj, u32 arg)
{
    u32 height = FUN_0031d174(obj->block20);
    u32 width = FUN_002a482c(obj->block20);

    size40Set(obj->object, width, height);
    obj->object->vtbl->slot4(obj->object, arg);
}

} /* extern "C" */
