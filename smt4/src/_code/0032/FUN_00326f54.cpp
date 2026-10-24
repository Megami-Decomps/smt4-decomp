#include "common.h"

struct Obj326f54Node {
    u8 unk00[0x24];
    u8 unk24[0x10];
    s32 unk34;
};

struct Obj326f54 {
    u8 unk00[0xc];
    Obj326f54Node *node;
};

extern "C" void FUN_00243d20(Obj326f54Node *node, u8 *unk24, s32 unk34);

/* Passes the object's node, its +0x24 block and its +0x34 value on to FUN_00243d20. */
extern "C" void FUN_00326f54(Obj326f54 *obj)
{
    FUN_00243d20(obj->node, obj->node->unk24, obj->node->unk34);
}
