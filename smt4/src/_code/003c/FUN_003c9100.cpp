#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0x132];
    /* 0x132 */ u8 kind;
    /* 0x133 */ u8 unk133;
    /* 0x134 */ u16 value;
} Obj;

void FUN_003c9100(Obj *obj, u8 kind, u16 *value)
{
    obj->kind = kind;
    if (value != NULL) {
        obj->value = *value;
    }
}

} /* extern "C" */
