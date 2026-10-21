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
    u8 unk0dc[0x480];
    void *secondaryVtable; // 0x55c
    u8 unk560[0x38];
    u32 unk598;
    u32 unk59c;
    u32 unk5a0;
};

extern "C" {
extern u8 DAT_00422484;
extern u8 DAT_00422590;
void FUN_00287314(SelectionBase *);
void rectangleResetSelection(EmptyRange *);

// Initialize the selection state and both polymorphic interfaces.
SelectionObject *FUN_0022cb58(SelectionObject *object)
{
    object->vtable = &DAT_00422484;
    FUN_00287314(&object->base);
    rectangleResetSelection(&object->rectangle);
    object->secondaryVtable = &DAT_00422590;
    object->active = 0;
    object->visible = 0;
    object->selected = 0;
    object->unk5a0 = 0;
    object->unk598 = 0;
    object->unk59c = 0;
    return object;
}
}
