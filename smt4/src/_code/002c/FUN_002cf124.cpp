/* Returns 1 if the object's kind (bits 5-8 of its mode word) is 0, 1, 5 or 6. */
#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 unused : 5;
    /*      */ u32 kind : 4;
    /*      */ u32 rest : 23;
} Object;

u32 FUN_002cf124(Object *obj)
{
    u32 kind = obj->kind;

    if (kind == 0 || kind == 1 || kind == 5 || kind == 6) {
        return 1;
    }
    return 0;
}

}
