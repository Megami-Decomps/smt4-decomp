#include "common.h"

extern "C" {

int tableGroupFindEntryIndex(...);
int scrScriptProcessStartEntry(u32 a, int b);

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x5A0];
    /* 0x5A0 */ u32 unk5A0;
    /* 0x5A4 */ u8 unk5A4[4];
    /* 0x5A8 */ u32 slotA;
    /* 0x5AC */ u32 unk5AC;
    /* 0x5B0 */ u8 unk5B0[4];
    /* 0x5B4 */ u32 slotB;
    /* 0x5B8 */ u8 unk5B8[0xC];
    /* 0x5C4 */ u32 *current;
} Obj;

int scrScriptProcessStartMappedEntry(Obj *obj, u32 arg)
{
    int result;
    u32 *slot;

    result = tableGroupFindEntryIndex(obj->unk5AC);
    if (result != -1) {
        slot = &obj->slotB;
    } else {
        result = tableGroupFindEntryIndex(obj->unk5A0, arg);
        slot = &obj->slotA;
    }
    obj->current = slot;
    scrScriptProcessStartEntry(*slot, result);
    return result;
}

} /* extern "C" */
