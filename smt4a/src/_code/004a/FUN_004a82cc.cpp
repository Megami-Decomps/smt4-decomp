/* NON_MATCHING: retail constructor chaining retains this in r0 across both helper calls. */
#include "shard/W5_W5Match2_PlainData.h"

struct SelectionBase {
    u8 unk00[0xd];
    u8 unk0d;
    u8 unk0e;
};
struct SelectionObject {
    void *vtable; // 0x000
    u8 unk004[0x18];
    u8 active; // 0x01c
    u8 visible; // 0x01d
    u8 selected; // 0x01e
    u8 unk01f;
    SelectionBase base; // 0x020
    u8 unk02f[0x99];
    EmptyRange rectangle; // 0x0c8
    u8 unk0dc[0x73c];
    void *secondaryVtable; // 0x818
    u8 unk81c[0x38];
    u32 unk854;
    u32 unk858;
    u32 unk85c;
};

extern "C" {
extern u8 DAT_0055c928;
extern u8 _ZTV9Obj55ca08[];
void flagsDESet(SelectionBase *);
void rectangleResetSelection(EmptyRange *);

// Initialize the selection state and both polymorphic interfaces.
SelectionObject *FUN_004a82cc(SelectionObject *object)
{
    object->vtable = &DAT_0055c928;
    flagsDESet(&object->base);
    rectangleResetSelection(&object->rectangle);
    object->secondaryVtable = _ZTV9Obj55ca08 + 8;
    object->active = 0;
    object->visible = 0;
    object->selected = 0;
    object->unk85c = 0;
    object->unk854 = 0;
    object->unk858 = 0;
    return object;
}
}
