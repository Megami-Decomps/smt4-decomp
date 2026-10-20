#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ int value;
    /* 0x4C */ u8 unk4C[0x15];
    /* 0x61 */ u8 changed;
    /* 0x62 */ u8 locked;
} Obj;

/* Sets the value (unless locked), marking the object changed when it differs. */
void flaggedEntrySetValueB(Obj *obj, int value)
{
    if (obj->locked == 0) {
        if (obj->value != value) {
            obj->changed = 1;
        }
        obj->value = value;
    }
}

} /* extern "C" */
