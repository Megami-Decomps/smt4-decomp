#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ int value;
    /* 0x24 */ u8 unk24[0x3C];
    /* 0x60 */ u8 changed;
    /* 0x61 */ u8 unk61;
    /* 0x62 */ u8 locked;
} Obj;

void flaggedEntrySetValueA(Obj *obj, int value)
{
    if (obj->locked == 0) {
        if (obj->value != value) {
            obj->changed = 1;
        }
        obj->value = value;
    }
}

} /* extern "C" */
